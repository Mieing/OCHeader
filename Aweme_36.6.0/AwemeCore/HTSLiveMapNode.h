@class NSMutableArray;

@interface HTSLiveMapNode : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *pairsArray;
@property (readonly, nonatomic) unsigned long long pairsArray_Count;

+ (id)descriptor;

@end
