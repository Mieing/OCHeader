@class AWEAwemeModel, NSString, UIView, UITableViewCell, UIImageView, CAGradientLayer, UIViewController, AWEFeedFeelGoodPlayerContainerView;
@protocol AWEFeedFeelGoodCellViewControllerDelegate, BDXViewContainerProtocol, AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol, AWEFeedBaseCellProtocol;

@interface AWEFeedFeelGoodCellViewController : UIViewController <BDXContainerLifecycleProtocol, BDXBridgeProviderProtocol, AWEFeelGoodCellViewControllerProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) CAGradientLayer *backgroundLayer;
@property (retain, nonatomic) AWEFeedFeelGoodPlayerContainerView *playerContainerView;
@property (retain, nonatomic) UIView<BDXViewContainerProtocol> *containerView;
@property (nonatomic) BOOL feelGoodLoaded;
@property (nonatomic) BOOL feelGoodLoadFailed;
@property (weak, nonatomic) UITableViewCell<AWEFeedBaseCellProtocol> *targetCell;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } videoPlayerFrame;
@property (nonatomic) double playerRadius;
@property (copy, nonatomic) NSString *loadState;
@property (nonatomic) long long showState;
@property (copy, nonatomic) NSString *quitMethod;
@property (nonatomic) double bottomOffsetY;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIViewController<AWEAwemeBizPlayVideoProtocol, AWEAwemePlayVideoTrackProtocol> *playerViewController;
@property (weak, nonatomic) id<AWEFeedFeelGoodCellViewControllerDelegate> delegate;

+ (Class)aAWEPadModuleAdapterClass;

- (void)container:(id)a0 didFinishLoadWithURL:(id)a1;
- (void)container:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)containerWillStartLoading:(id)a0;
- (id)aAWEPadModuleAdapter;
- (void)registerMethodsWithBridge:(id)a0 inContainer:(id)a1;
- (void)onApplicationDidChangeStatusBarOrientation:(id)a0;
- (void)dismissFeelGood:(BOOL)a0;
- (void)preloadFeelGood:(id)a0;
- (BOOL)showFeelGood:(id)a0 animated:(BOOL)a1;
- (id)notLoadReadyReason;
- (BOOL)showFeelGood:(id)a0 params:(id)a1;
- (void)closeFeelGood:(BOOL)a0;
- (id)generateContext;
- (id)bdxParams;
- (void)sendEvent:(id)a0 withParams:(id)a1;
- (void)onBroadcastNotification:(id)a0;
- (BOOL)shouldRevertNotificationChange;
- (BOOL)shouldTriggerBackgroundColorOptimization;
- (BOOL)shouldRevertMaskViewFrameChange;
- (void)animateWithDuration:(double)a0 animation:(id /* block */)a1 completion:(id /* block */)a2;
- (id)interactionView:(id)a0;
- (void)updateFeelGoodPosition:(BOOL)a0;
- (void)hideVideo:(BOOL)a0 duration:(double)a1 animate:(BOOL)a2;
- (void)trackLoadResult:(BOOL)a0 errorCode:(long long)a1 errorMsg:(id)a2;
- (void)updateVideoFrameWithParams:(id)a0 eventName:(id)a1 completion:(id /* block */)a2;
- (void)updateFeelGoodPosition;
- (BOOL)shouldZoomWidthManually;
- (BOOL)shouldSetSizeWithZero;
- (void)p_reportADLogWithParams:(id)a0;
- (void)adjustFeelGoodCellVideoFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)closeAction;
- (void)viewDidLayoutSubviews;
- (double)animationDuration;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;
- (struct CGSize { double x0; double x1; })videoSize;
- (void)hideVideo;

@end
