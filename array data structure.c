struct array* creatarray(int cap);
 void append(struct array *arr,int data);
 void view(struct array *arr);
 void insertarray(struct array *arr);
struct array{

int capacity;
int lastindex;
int *ptr;
};

int main()
{
    struct array *arr;
    arr=creatarray(5);
    insertarray(arr);
    append(arr,0);
    view(arr);
    return 0;
}

void insertarray(struct array *arr)
{
    int i,a;
    printf("how many value you want to enter:\n");
    scanf("%d",&a);
    printf("enter a value:\n");

    for(i=0;i<=a-1;i++){
       scanf("%d",&arr->ptr[i]);
    }
    arr->lastindex=a-1;

    }





void view(struct array *arr)
{
    int i;
  for(i=0;i<=arr->lastindex;i++)
  {
      printf("%d ",arr->ptr[i]);
  }
}


  void append(struct array *arr,int data)
{
    if(arr->capacity==arr->lastindex+1)
    {
      printf("overflow\n");
    } else{
    arr->ptr[arr->lastindex+1]=data;
    arr->lastindex+=1;
    }
}

struct array* creatarray(int cap)
{
    struct array *arr;
    arr=(struct array*)malloc(sizeof(struct array));
   arr->ptr=(int*)malloc(sizeof(int)*cap);
   arr->capacity=cap;
   arr->lastindex=-1;
   return arr;


}





