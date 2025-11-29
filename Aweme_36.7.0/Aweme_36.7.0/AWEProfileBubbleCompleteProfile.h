@interface AWEProfileBubbleCompleteProfile : AWEUINotificationBarView <AWEProfileBubbleProtocol>

@property (nonatomic) long long priority;

- (void)config;
- (void)didShow;
- (void)didPop;

@end
