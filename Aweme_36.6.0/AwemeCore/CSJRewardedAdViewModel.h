@interface CSJRewardedAdViewModel : NSObject

@property (nonatomic) double topBarTotoalTime;
@property (nonatomic) long long rewardTotoalTime;
@property (nonatomic) double rewardOriginTime;
@property (nonatomic) BOOL useFullLinkTimer;
@property (nonatomic) unsigned long long rewardTimingPageMask;
@property (nonatomic) BOOL sendRewardWhenSwitchToEndcard;
@property (nonatomic) unsigned long long rewardedSceneType;

- (void)setupWithMaterial:(id)a0;

@end
