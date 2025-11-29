@interface HTSLiveStreamRecognitionCandidate : IESLivePBBaseMessage

@property (nonatomic) int sceneEnum;
@property (nonatomic) int priority;

+ (id)descriptor;

@end
