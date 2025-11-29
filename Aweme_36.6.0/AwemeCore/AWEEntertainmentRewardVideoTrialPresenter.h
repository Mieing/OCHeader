@interface AWEEntertainmentRewardVideoTrialPresenter : AWEEntertainmentBaseVideoTrialPresenter

@property (nonatomic) BOOL didAppearNeedReport;

- (id)trackCommonParams;
- (void)trackTrialDidStart;
- (void)trackTrialDidFinish;
- (void)trackIAAStatusShow:(long long)a0;
- (void)viewDidAppear;

@end
