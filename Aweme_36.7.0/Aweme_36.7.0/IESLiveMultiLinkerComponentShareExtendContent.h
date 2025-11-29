@protocol IESLiveSubscription;

@interface IESLiveMultiLinkerComponentShareExtendContent : IESLiveRevenueInteractPlayComponent

@property (retain, nonatomic) id<IESLiveSubscription> disposable;

- (id)countDownStr:(long long)a0;
- (void)showShareExtendContent:(BOOL)a0 isPunish:(BOOL)a1 description:(id)a2 countDownStr:(id)a3;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void).cxx_destruct;
- (void)clean;

@end
