@interface AWEProfileBubbleCacheCleanAlter : AWEUINotificationBarView <AWEProfileBubbleProtocol>

@property (nonatomic) long long cleanSize;
@property (nonatomic) long long trackFreeSize;

- (void)themeChange;
- (void)updateActionImage;
- (void)trackPopupAction:(id)a0;
- (void)config;
- (void)dealloc;
- (void)didShow;
- (void)didPop;

@end
