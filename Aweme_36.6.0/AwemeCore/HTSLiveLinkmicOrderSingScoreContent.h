@class HTSLiveOrderSingUserScore;

@interface HTSLiveLinkmicOrderSingScoreContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveOrderSingUserScore *userScore;
@property (nonatomic) BOOL hasUserScore;

+ (id)descriptor;

@end
