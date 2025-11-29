@interface HTSLiveMicrophoneTaskDataV2 : IESLivePBBaseMessage

@property (nonatomic) long long currentScore;
@property (nonatomic) long long needScoreToNext;
@property (nonatomic) int orderSingStage;

+ (id)descriptor;

@end
