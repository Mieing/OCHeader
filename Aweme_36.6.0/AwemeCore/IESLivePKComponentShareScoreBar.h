@class IESLiveRevenueInteractShareScoreBar;
@protocol IESLiveCompoundSubscription;

@interface IESLivePKComponentShareScoreBar : IESLiveRevenueInteractPlayComponent

@property (weak, nonatomic) IESLiveRevenueInteractShareScoreBar *scoreBar;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;

- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)componentInteracting;
- (void)loadPKScoreBar;
- (void).cxx_destruct;
- (void)clean;

@end
