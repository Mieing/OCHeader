@class NSNumber;

@interface AWEProfileBubbleHomepageBottomToast : AWEUINotificationBarView <AWEProfileBubbleProtocol>

@property (retain, nonatomic) NSNumber *currentToastType;
@property (nonatomic) BOOL hasNotClosed;
@property (nonatomic) long long priority;

- (BOOL)isUniqueURL:(id)a0;
- (id)pureURLWithURL:(id)a0;
- (void)actionOnWechatBindWithURL:(id)a0;
- (void)config;
- (void).cxx_destruct;
- (void)didShow;

@end
