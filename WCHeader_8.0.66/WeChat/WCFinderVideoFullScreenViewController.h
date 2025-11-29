@class NSString, WCFinderPlayBar, WCFinderMegaVideo, UIPercentDrivenInteractiveTransition, WCPlayerView;

@interface WCFinderVideoFullScreenViewController : MMUIViewController <UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) WCPlayerView *playerView;
@property (retain, nonatomic) WCFinderPlayBar *playBar;
@property (retain, nonatomic) UIPercentDrivenInteractiveTransition *animator;
@property (retain, nonatomic) WCFinderMegaVideo *videoSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;
- (struct CGSize { double x0; double x1; })videoSizeFromWCFinderMegaVideoMedia:(id)a0;
- (id)createPlayArgsForMedia:(id)a0;
- (BOOL)isLocalMedia:(id)a0;
- (void)setupClose;
- (void)setUpBottomView;
- (void)tapToExit:(id)a0;
- (void)dragPanGesture:(id)a0;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void).cxx_destruct;

@end
