@class AigcEffectTaskMap;

@interface AigcEffectBackgroundCheckResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) AigcEffectTaskMap *taskMap;
@property (nonatomic) BOOL hasTaskMap;

+ (id)descriptor;

@end
