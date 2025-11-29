@interface IESLiveGameOpenPlatformAnchorRevenueNotificationCenter : IESLiveGameOpenPlatformNotificationCenter

+ (id)defaultCenter;

- (id)notificationWithMessage:(id)a0;
- (void)startObservingMessage;
- (void)stopObservingMessage;

@end
