@interface HTSLiveFeedbackCard_ClientImpression : IESLivePBBaseMessage

@property (nonatomic) long long ignoreSubmitCounts;
@property (nonatomic) long long ignoreSubmitShowInterval;
@property (nonatomic) long long endingPageShowDuration;

+ (id)descriptor;

@end
