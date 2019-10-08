//This code is to rotate 90 degree and 270 degree of an image. 


int rotate(PIXEL* original, int rows, int cols, int rotation,
           PIXEL** new, int* newrows, int* newcols)
{
 
 
  int c,r;//counters for rows and columns
  *newrows = cols;
  *newcols = rows;
  //allocating space for the new rotated image
  *new = (PIXEL*)malloc(rows*cols*sizeof(PIXEL));
  PIXEL *o;
  PIXEL *n;
  //rotating -90 or 270 degrees (they are the same)
  if(rotation == -90 || rotation == 270 )
  {
        for(r = 0; r < rows; r++)
        {
                for(c = 0; c < cols; c++ )
                {
                        n = (*new) + (c * rows) + (rows - r - 1 );
                        o = ((original) + (r * cols) + c);
                        *n = *o;
                }//end of for
        }//end of for
  }else if(rotation == 90 || rotation == -270)//rotating 90 or -270
  {
        for(r = 0; r < rows; r++)
        {
                for(c = 0; c < cols; c++ )
                {
                        n = (*new) + (c * rows) + (rows + r + 1 );
                        o = ((original) + (r * cols) + c);
                        *n = *o;
                }//end of for
        }//end of for
  }
 
 
 
 
  return 0;
}