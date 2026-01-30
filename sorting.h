using namespace std;
void swap(int &a,int &b);
void sort(int *a,int N);
void display(int *a,int N);

void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void sort(int *a,int N)
{
    int i,j;
    for (i=0; i>0 ; i++)
    {
        int sorted = 0;
        for (j=0; j < i ; j++)
        {
            if(a[j] < a[j+1])
            {
                swap(a[j],a[j+1]);
            }
            display(a,N);
        }
        if (sorted ==0) break;
        cout<<endl;
        display(a,N);
    }
}
void display(int *a,int N)
{
    for (int i=0; i< N-1 ; i++)
    {
        cout<<a[i]<<" ";
    }
}
void selectionsort(int *a,int N)
{
    for (int i=0; i<N-1;i++)
    {
        int min=i;
        for (int j=i+1; j<N; j++)
        {
            if(a[j] < a[i]) {min = j;}
        }
        swap(a[i],a[min]);
        
    }
    display(a,N);
}
void insertionsort(int *a,int N)
{
    
}