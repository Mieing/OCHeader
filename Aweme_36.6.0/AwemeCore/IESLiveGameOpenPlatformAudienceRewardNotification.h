@class NSString;

@interface IESLiveGameOpenPlatformAudienceRewardNotification : IESLiveGameOpenPlatformNotification

@property (readonly, nonatomic) long long rewardAmount;
@property (readonly, copy, nonatomic) NSString *rewardTitle;
@property (readonly, copy, nonatomic) NSString *timeText;
@property (copy, nonatomic) id /* block */ routeAction;

+ (id)name;
+ (Class)messageClass;

- (id)attachingDIContext;
- (void).cxx_destruct;
- (id)name;

@end
