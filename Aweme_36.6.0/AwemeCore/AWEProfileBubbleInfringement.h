@interface AWEProfileBubbleInfringement : AWEUINotificationBarView <AWEProfileBubbleProtocol>

@property (nonatomic) long long priority;

- (void)config;
- (void)didShow;

@end
