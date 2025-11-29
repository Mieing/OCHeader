@class IESLiveRevenueInteractShareScoreBar;
@protocol IESLiveCompoundSubscription;

@interface IESLiveMultiLinkerComponentShareScoreBar : IESLiveRevenueInteractPlayComponent

@property (retain, nonatomic) IESLiveRevenueInteractShareScoreBar *scoreBar;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;

- (void)bindAction;
- (void)componentPlaying;
- (void)componentPunishing;
- (void)componentFinished;
- (void)setupScoreBar;
- (void)updateScoreBarFrame;
- (void).cxx_destruct;
- (void)dealloc;

@end
