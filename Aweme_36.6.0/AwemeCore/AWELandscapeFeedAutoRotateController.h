@class NSTimer;

@interface AWELandscapeFeedAutoRotateController : AWELandscapeFeedBaseController

@property (nonatomic) BOOL isMonitoring;
@property (retain, nonatomic) NSTimer *accidentalTouchTimer;

- (void)beginMonitor;
- (void)endMonitor;
- (void)autoRotateSwitchChanged;
- (void)resetAccidentalTouchTimer:(BOOL)a0;
- (id)currentLiveCellChildViewController;
- (BOOL)canAutoRotate;
- (void)trackRotateExitFailedWithReason:(id)a0;
- (void)trackChangingAutoRotateSwitch;
- (void).cxx_destruct;
- (void)orientationChanged:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupOrientation;

@end
