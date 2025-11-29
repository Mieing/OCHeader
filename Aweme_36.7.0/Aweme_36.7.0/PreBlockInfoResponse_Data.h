@class NSMutableArray;

@interface PreBlockInfoResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *blockInfoArray;
@property (readonly, nonatomic) unsigned long long blockInfoArray_Count;

+ (id)descriptor;

@end
