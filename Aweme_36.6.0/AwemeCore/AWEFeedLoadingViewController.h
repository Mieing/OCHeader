@class AWEUILoadingView;

@interface AWEFeedLoadingViewController : AWEBaseController

@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (nonatomic) BOOL shouldShowLoadingView;

- (void)dismissLoadingView;
- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)manualRefreshCompletionMethod;
- (void)beginInitialFetch;
- (void)handleConnectionChanged:(id)a0;
- (void)handleNoNetworkDetectionResult:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
