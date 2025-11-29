@class DUXBottomNotification;

@interface AWEPlayInteractionPureModeController : AWEPlayInteractionNewBaseController

@property (nonatomic) BOOL isShowingSnackbar;
@property (retain, nonatomic) DUXBottomNotification *bottomNotification;
@property (nonatomic) double height;

- (BOOL)shouldAddPlayTimeObserver;
- (BOOL)shouldShowSnackBarWithPlayTime:(double)a0;
- (void)showSnackbarIfNeeded;
- (void)trackExitSnackbarWithMethod:(id)a0;
- (void)trackShowSnackbar;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)didEndDisplaying;
- (void)viewWillDisappear;

@end
