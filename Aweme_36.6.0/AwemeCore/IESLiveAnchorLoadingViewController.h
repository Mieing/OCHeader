@interface IESLiveAnchorLoadingViewController : UIViewController

- (id)initWithDIContext:(id)a0 loadingText:(id)a1;
- (void)addObserverForSwitchError;
- (void)setupUIWithLoadingText:(id)a0;
- (void)dismissLoadingVC;

@end
