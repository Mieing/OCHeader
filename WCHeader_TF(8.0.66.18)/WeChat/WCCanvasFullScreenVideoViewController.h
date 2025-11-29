@class UIView, WCAdInteractionView, WCPlayerView, WCStatTimerHelper, WCCanvasAdControlView, NSString, UIButton, WCCanvasComponentItem, WCAdvertiseInfo;
@protocol WCCanvasFullScreenVideoViewControllerDelegate;

@interface WCCanvasFullScreenVideoViewController : FullScreenViewController <WCAdInteractionViewDelegate>

@property (retain, nonatomic) UIView *fullScreenContent;
@property (nonatomic) BOOL isVideoPlayWhenExit;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) WCAdInteractionView *floatAreaView;
@property (retain, nonatomic) WCStatTimerHelper *timerHelper;
@property (weak, nonatomic) id<WCCanvasFullScreenVideoViewControllerDelegate> delegate;
@property (retain, nonatomic) WCCanvasComponentItem *componentItem;
@property (retain, nonatomic) WCAdvertiseInfo *advertiseInfo;
@property (retain, nonatomic) WCPlayerView *playerView;
@property (retain, nonatomic) WCCanvasAdControlView *controlView;
@property (nonatomic) BOOL bPlay;
@property (nonatomic) BOOL forceLanscapeWhenTurnToFullscreen;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originRect;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)closeFullscreen;
- (void)didControlViewHidden:(BOOL)a0;
- (void)resetPlayerViewFrame;
- (void)resetPlayerViewFrameForSize:(struct CGSize { double x0; double x1; })a0;
- (void)showVCAnimation;
- (void)stopAndCloseFullScreenWindow;
- (void)makeSurePortraitAndDismissFullScreenWindow;
- (void)hideVCAnimation;
- (void)dismissFullScreenWindow;
- (void)clearSubviews;
- (void)onClickCloseButton;
- (void)tryToForceOrientationToLanscape;
- (void)tryToSetCurrentOrientations:(unsigned long long)a0;
- (void)generateFloatAreaViewForComponentItem:(id)a0;
- (void)reportFloatAreaExposedData;
- (id)fetchFloatBarInfo;
- (void)interactionViewDeterminationWasMadeWithRelatedId:(id)a0 forType:(unsigned long long)a1;
- (void)pauseVideoInner;
- (void)startVideoInner;
- (unsigned long long)fetchStayTotalTime;
- (void).cxx_destruct;

@end
