@class NSString, AWEScreenCastControlViewConfig, UIView;
@protocol BDByteScreenCastLivePlayerControlViewProtocol;

@interface AWEPlayInteractionScreenCastInnerFeedController : AWEPlayInteractionBaseController <AWEScreenCastControlViewInteractiveDelegate, AWEPlayInteractionPlayerLifeCycleProtocol, AWEPlayInteractionScreenCastControllerProtocol>

@property (retain, nonatomic) UIView<BDByteScreenCastLivePlayerControlViewProtocol> *screenCastControlView;
@property (retain, nonatomic) UIView<BDByteScreenCastLivePlayerControlViewProtocol> *originalControlView;
@property (retain, nonatomic) UIView *blackView;
@property (retain, nonatomic) UIView *animationBackGroundView;
@property (nonatomic) double originViewHeight;
@property (nonatomic) BOOL isInShrink;
@property (nonatomic) BOOL hasHide;
@property (retain, nonatomic) AWEScreenCastControlViewConfig *awemeCastConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (void)setHide:(BOOL)a0;
- (void)didDisplay;
- (void)videoDidShrink;
- (void)videoDidMagnify;
- (BOOL)isScreenCasting;
- (BOOL)videoContentIsLandscape;
- (void)closeButtonClicked:(id)a0;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (BOOL)checkIsScreenCastSubView:(id)a0;
- (void)removeControlViewIfNeeded;
- (void)enterScreenCastStatusIfNeeded;
- (void)removeScreenCastControlView;
- (void)updateScreenCastViewLayout:(id)a0;
- (void)updateScreenCastConfig:(BOOL)a0;
- (void)showControlView:(id)a0;
- (void)updateControlViewFrame;
- (void)castPlayProgressInfoChanged:(id)a0;
- (void)castPlayStatusChanged:(unsigned long long)a0;
- (void)alreadyCastPlayAllVideos;
- (id)castExtraParams:(id)a0;
- (double)startScreenCastPlayTime;
- (void)closeCastButtonClicked:(id)a0;
- (void)didConnectToDevice;
- (void)willVideoDidShrink;
- (void)videoContentFameDidChange;
- (id)currentProgressInfo;
- (void)showOriginalControlView:(id)a0;
- (void)updateScreenCastConfig:(BOOL)a0 needResumeCastEndState:(BOOL)a1;
- (void)resetControlViewTargetSize;
- (void)closeCastWithReason:(id)a0;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)containerView;
- (void)viewDidLoad;
- (void)dealloc;
- (void)didEndDisplaying;
- (void)willDisplay;

@end
