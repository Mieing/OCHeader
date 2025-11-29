@class NSString, AigcEffectTaskData;

@interface IESLiveFaceEffectAigcBgTaskModel : NSObject

@property (copy, nonatomic) NSString *effectId;
@property (retain, nonatomic) AigcEffectTaskData *finishedTask;
@property (retain, nonatomic) AigcEffectTaskData *progressingTask;

- (void).cxx_destruct;

@end
