@class NSString, IESMMCameraConfig, AWERecordInspirationSearchContentViewController, AWERecordInspirationServiceImpl, UIView, IESEffectModel, UIViewController;
@protocol ACCRecordSwitchModeService, ACCRecordPropService, ACCPropPickerService, ACCRecorderViewContainer, AWERecordResourceDownloadTaskProtocol, _TtP9AWELottie13AWELottieView_, ACCSideslipPropService, ACCAIGCSelectServiceProtocol, AWERecordInspirationTrackerService, AWECreativeInspirationServiceProtocol, ACCCameraService;

@interface AWERecordInspirationComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, AWERecordInspirationServiceDelegate, ACCRecordPropServiceSubscriber>

@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCAIGCSelectServiceProtocol> aigcService;
@property (retain, nonatomic) AWERecordInspirationServiceImpl *inspirationService;
@property (retain, nonatomic) id<AWECreativeInspirationServiceProtocol> creativeInspirationService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCSideslipPropService> slidesPropService;
@property (retain, nonatomic) id<ACCPropPickerService> propPickerService;
@property (retain, nonatomic) UIViewController *contentViewController;
@property (retain, nonatomic) AWERecordInspirationSearchContentViewController *searchContentViewController;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *lotLoadingView;
@property (retain, nonatomic) id<AWERecordResourceDownloadTaskProtocol> downloadTask;
@property (nonatomic) BOOL asyncLoadEffectCompletion;
@property (nonatomic) BOOL handleCancelApplyEffect;
@property (retain, nonatomic) IESEffectModel *lastApplyEffect;
@property (retain, nonatomic) id<AWERecordInspirationTrackerService> trackerService;
@property (retain, nonatomic) IESMMCameraConfig *mainConfig;
@property (nonatomic) BOOL componentFirstAppear;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)propServiceDidApplyProp:(id)a0 success:(BOOL)a1;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (void)bindServices:(id)a0;
- (void)appendMetricsInfoToIESEffectModel:(id)a0 fromBizExtraStr:(id)a1;
- (void)backInspirationCardListPage;
- (void)createPropAsyncLoading;
- (void)stopPropAsyncLoading;
- (void)p_createPropAsyncLoading;
- (void)cutTemplateClickFromWidget;
- (void)showToastWithPropDownloadError:(id)a0;
- (void)enterInspirationTab;
- (void)exitInspirationTab;
- (BOOL)currentIsCameraModeWithModeId:(long long)a0;
- (id)createContentViewController;
- (void)backInspirationTab;
- (void)cutTemplateClick;
- (void)openAIGCCreatePage;
- (void)inspirationEffectTakeSameWithEffect:(id)a0 effectId:(id)a1 categoryName:(id)a2 bizExtra:(id)a3;
- (void).cxx_destruct;
- (void)addObserver;
- (void)dealloc;

@end
