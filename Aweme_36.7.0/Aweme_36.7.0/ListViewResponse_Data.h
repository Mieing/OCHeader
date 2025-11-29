@class NSMutableArray;

@interface ListViewResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *viewListArray;
@property (readonly, nonatomic) unsigned long long viewListArray_Count;

+ (id)descriptor;

@end
