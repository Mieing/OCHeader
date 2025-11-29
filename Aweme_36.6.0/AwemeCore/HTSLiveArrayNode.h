@class NSMutableArray;

@interface HTSLiveArrayNode : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *nodesArray;
@property (readonly, nonatomic) unsigned long long nodesArray_Count;

+ (id)descriptor;

@end
