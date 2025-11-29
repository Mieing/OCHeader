@class AWEIMSkylightDistributionSettings, NSString;
@protocol AWEIMSkylightViewInterface, AWELiveModuleService, AWELiveCheckDataManagerService;

@interface AWEIMSkylightLiveCheckComponent : AWEIMComponentBase <AWELiveCheckDataManagerSubscriber, AWEIMSkylightScrollAction>

@property (retain, nonatomic) id<AWELiveModuleService> liveModuleService;
@property (retain, nonatomic) id<AWELiveCheckDataManagerService> liveCheckService;
@property (weak, nonatomic) id<AWEIMSkylightViewInterface> skylightViewInterface;
@property (nonatomic) BOOL fixCorrectScene;
@property (nonatomic) BOOL appearing;
@property (retain, nonatomic) AWEIMSkylightDistributionSettings *liveSettings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)hostVC_viewDidDisappear;
- (void)afterInitialComponentAllResolved:(id)a0;
- (void)componentDidMounted:(id)a0;
- (void)hostVC_viewDidAppear;
- (void)onLiveUpdateReceive:(id)a0 PageType:(long long)a1;
- (void)skylightDidEndScroll;
- (void)didRefreshSkylightView;
- (void)subscribeLiveCheck;
- (void).cxx_destruct;
- (void)dealloc;

@end
