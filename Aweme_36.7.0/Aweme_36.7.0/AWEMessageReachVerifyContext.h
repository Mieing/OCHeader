@class AWEMessageReachVerifyComponentModel, AWEHPChannelBadgeTask, NSDictionary, NSString, NSNumber, AWEHPChannelBubbleTask;

@interface AWEMessageReachVerifyContext : NSObject

@property (retain, nonatomic) AWEMessageReachVerifyComponentModel *verifyModel;
@property (nonatomic) long long bubbleShowResult;
@property (copy, nonatomic) NSNumber *bubblePrecheckResult;
@property (retain, nonatomic) AWEHPChannelBubbleTask *bubbleTask;
@property (nonatomic) long long badgeShowResult;
@property (copy, nonatomic) NSNumber *badgePrecheckResult;
@property (retain, nonatomic) AWEHPChannelBadgeTask *badgeTask;
@property (copy, nonatomic) NSDictionary *verifyExtra;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *currentScene;

- (void).cxx_destruct;

@end
