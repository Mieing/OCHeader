@class UIViewController, AWEBasicModeVideoPlayerToastView, NSString, AWEBasicModeCustomDisplayViewModel, UITapGestureRecognizer;
@protocol AWEBasicModeDisplayViewControllerProtocol, AWEBasicModePlayInteractionViewControllerProtocol;

@interface AWEBasicModeCustomDisplayViewController : UIViewController <UIGestureRecognizerDelegate>

@property (retain, nonatomic) AWEBasicModeCustomDisplayViewModel *displayModel;
@property (nonatomic) BOOL isLastCell;
@property (nonatomic) double lastClickTimestamp;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (retain, nonatomic) UIViewController<AWEBasicModeDisplayViewControllerProtocol> *videoController;
@property (retain, nonatomic) UIViewController<AWEBasicModePlayInteractionViewControllerProtocol> *interactionController;
@property (retain, nonatomic) AWEBasicModeVideoPlayerToastView *toastLabel;
@property (nonatomic) BOOL isValid;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)prepareForDisplayWithoutCoverImage;
- (id)getVideoController;
- (void)configWithModel:(id)a0;
- (void)p_silentUpdate;
- (void)p_configVideoWithModel:(id)a0;
- (void)p_configInteractionWithModel:(id)a0;
- (void)p_initVideoController;
- (void)p_initInteractController;
- (void)_onVideoPlayerViewSingleClicked:(id)a0;
- (void)_onVideoPlayerViewDoubleClicked:(id)a0;
- (void)_onVideoPlayerViewClicked:(id)a0;
- (void)replaceVideoPlayer:(id)a0;
- (void)uninstallVideoController:(BOOL)a0;
- (void)p_showToastWithText:(id)a0;
- (void)prepareForDisplay;
- (id)model;
- (void).cxx_destruct;
- (BOOL)play;
- (BOOL)pause;
- (void)stop;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)pause:(BOOL)a0;
- (void)reset;
- (void)viewDidLoad;
- (double)currentPlaybackTime;
- (void)dealloc;

@end
