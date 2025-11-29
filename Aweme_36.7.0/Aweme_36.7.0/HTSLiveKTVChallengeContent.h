@interface HTSLiveKTVChallengeContent : IESLivePBBaseMessage

@property (nonatomic) long long targetScore;
@property (nonatomic) long long targetDurationSecond;

+ (id)descriptor;

@end
