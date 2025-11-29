@class NSMutableArray;

@interface HTSLiveAIClone : IESLivePBBaseMessage

@property (retain, nonatomic) NSMutableArray *aiConvListArray;
@property (readonly, nonatomic) unsigned long long aiConvListArray_Count;

+ (id)descriptor;

@end
