@class AigcEffectTaskData;

@interface AigcEffectBackgroundGenerateResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) AigcEffectTaskData *taskData;
@property (nonatomic) BOOL hasTaskData;

+ (id)descriptor;

@end
