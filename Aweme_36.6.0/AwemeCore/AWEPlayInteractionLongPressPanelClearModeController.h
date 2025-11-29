@class UIImageView, UIView;

@interface AWEPlayInteractionLongPressPanelClearModeController : AWEPlayInteractionBaseController

@property (retain, nonatomic) UIView *exitView;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIImageView *zoomImageView;

- (void)exitPureMode;
- (void)enterPureMode;
- (void)enterInteractionElementPureModeWithInfo:(id)a0;
- (void)exitInteractionElementPureMode:(id)a0;
- (void)exitInteractionElementPureModeByOthers:(id)a0;
- (void)showExitView:(BOOL)a0;
- (void)exitViewDidTapped:(id)a0;
- (void)enterPureModeWithoutToast;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (void)addObservers;
- (void)viewWillDisappear;

@end
