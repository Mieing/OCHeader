@class NSString, UIView;
@protocol BDByteScreenCastLivePlayerControlViewProtocol;

@interface AWEPlayInteractionScreenCastController : AWEPlayInteractionBaseController <AWEScreenCastControlViewInteractiveDelegate, AWEPlayInteractionPlayerLifeCycleProtocol, AWEScreenCastPendantDataProvider, AWEPlayInteractionScreenCastControllerProtocol>

@property (retain, nonatomic) UIView<BDByteScreenCastLivePlayerControlViewProtocol> *screenCastControlView;
@property (retain, nonatomic) UIView *blackView;
@property (retain, nonatomic) UIView *animationBackGroundView;
@property (nonatomic) double originViewHeight;
@property (nonatomic) BOOL isInShrink;
@property (nonatomic) BOOL hasHide;
@property (nonatomic) BOOL isDisplaying;
@property (nonatomic) BOOL shouldRecheckPendantShow;
@property (nonatomic) BOOL isViewAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (void)setHide:(BOOL)a0;
- (void)onPlayer:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)didDisplay;
- (void)videoDidShrink;
- (void)videoDidMagnify;
- (void)onPlayerPlay:(id)a0 ifPlay:(BOOL)a1;
- (void)notifyScreenRotation;
- (BOOL)videoContentIsLandscape;
- (void)closeButtonClicked:(id)a0;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (id)pendantService;
- (void)getInnerListArgsWith:(id /* block */)a0;
- (BOOL)checkIsScreenCastSubView:(id)a0;
- (void)removeControlViewIfNeeded;
- (void)enterScreenCastStatusIfNeeded;
- (void)removeScreenCastControlView;
- (void)updateScreenCastViewLayout:(id)a0;
- (void)startScreenCastIfNeeded;
- (BOOL)screenCastInnerFeedEnable;
- (void)removeControlView:(id)a0;
- (void)showControlView:(id)a0;
- (void)updateControlViewFrame;
- (void)enterInnerListWithUpdateScreenCastDatas:(BOOL)a0;
- (void)notFindTVVideoInVideoList;
- (void)startConnectToDevice;
- (void)castPlayProgressInfoChanged:(id)a0;
- (void)castPlayStatusChanged:(unsigned long long)a0;
- (void)alreadyCastPlayAllVideos;
- (id)castExtraParams:(id)a0;
- (void)screenCastButtonClicked;
- (void)quitFromLandscapeFeed;
- (void)willVideoDidShrink;
- (void)videoContentFameDidChange;
- (BOOL)needEnterCastPage;
- (void)updateScreenCastConfig;
- (void)showPendantIfNecessary;
- (void)updateForbiddenAttachmentAreas:(BOOL)a0;
- (void)hidePendantIfNecessary;
- (id)castPendantScene;
- (id)currentProgressInfo;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)containerView;
- (void)viewDidLoad;
- (void)didEndDisplaying;
- (void)viewDidDisappear;
- (void)willDisplay;

@end
