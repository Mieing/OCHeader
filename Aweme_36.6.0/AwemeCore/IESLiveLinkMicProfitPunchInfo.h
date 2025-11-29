@class NSString;

@interface IESLiveLinkMicProfitPunchInfo : IESLivePBBaseMessage

@property (nonatomic) long long userId;
@property (nonatomic) long long startTime;
@property (nonatomic) int punchStatus;
@property (nonatomic) long long punchDuration;
@property (copy, nonatomic) NSString *userOpenId;

+ (id)descriptor;

@end
