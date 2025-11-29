@interface AWEProfileBubbleUserRate : AWEUINotificationBarView <AWEProfileBubbleProtocol>

@property (nonatomic) long long priority;

- (void)config;
- (void)didShow;

@end
