@class NSString;
@protocol AFDColorRingFacadeProtocol, AWEIMSkylightInteractInterface, AWEIMSkylightViewInterface, AFDColorRingConfigProtocol;

@interface AFDSkylightCellStory25ColorRingComponent : AFDSkylightBaseComponent <AWEIMSkylightCellComponentEvent, AWEStory25DraftMessage, AWEIMComponentHostVCLifeCycle>

@property (retain, nonatomic) id<AFDColorRingFacadeProtocol> colorRingFacade;
@property (retain, nonatomic) id<AFDColorRingConfigProtocol> colorRingConfig;
@property (weak, nonatomic) id<AWEIMSkylightViewInterface> skylightViewInterface;
@property (weak, nonatomic) id<AWEIMSkylightInteractInterface> skylightInteractInterface;
@property (nonatomic) BOOL shouldShowPublishLandingAnimation;
@property (nonatomic) BOOL isHostVCAppeared;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)componentContext;
- (void)hostVC_viewDidDisappear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (long long)colorRingType;
- (void)hostVC_viewDidAppear;
- (void)onPresenter:(id)a0 willUpdateView:(id)a1;
- (void)onCellPrepareReuseForCurrentViewModel;
- (void)updateComponentAfterModelUpdate;
- (void)skyCellWillDisplay;
- (void)skyCellDidEndDisplay;
- (void)story25PublishTask:(id)a0 didBeginPublishWithInfo:(id)a1;
- (void)story25PublishTask:(id)a0 didEndPublishWithError:(id)a1;
- (void)updatePresenterInfo;
- (void)createOrUpdateFacadeIfNeeded;
- (void)refreshAfterPublishIfNeeded;
- (BOOL)isStaticColorRing;
- (void)trackColorRingMonitor_ActualShow;
- (id)ringViewDisplayConfig;
- (void)trackColorRingMonitor_DataAvailable;
- (void)handleCloseFriendGuideTap;
- (id)getSkylightColorRingParams;
- (void)handleColorRingViewTap;
- (id)userID;
- (void).cxx_destruct;
- (id)user;
- (void)dealloc;

@end
