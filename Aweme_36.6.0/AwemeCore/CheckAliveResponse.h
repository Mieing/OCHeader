@class NSMutableArray;

@interface CheckAliveResponse : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *dataArray;
@property (readonly, nonatomic) unsigned long long dataArray_Count;

+ (id)descriptor;

@end
