@class NSObject, ACCRecorderTextModeViewModel, NSString, UIView, ACCRecorderTextModePreviewViewController, AWEVideoPublishViewModel;
@protocol ACCRecordSwitchModeService, ACCRecordCloseService, ACCRecordPropService, ACCRecorderViewContainer, ACCRecordModeFactory, ACCRecordSwitchModeGestureService, ACCTextModeBackgroundManagerProtocol, ACCMVTemplateManagerProtocol, ACCRecordSubmodeService, ACCFilterService, ACCCameraService;

@interface ACCRecorderTextModeComponent : ACCFeatureComponent <ACCRecordSwitchModeServiceSubscriber, ACCRecorderViewContainerItemsHideShowObserver, ACCCameraLifeCircleEvent>

@property (retain, nonatomic) ACCRecorderTextModePreviewViewController *textPreviewViewController;
@property (retain, nonatomic) UIView *redDotGuideView;
@property (retain, nonatomic) ACCRecorderTextModeViewModel *viewModel;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCRecordCloseService> closeService;
@property (retain, nonatomic) id<ACCFilterService> filterService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordModeFactory> recordModeFactory;
@property (retain, nonatomic) id<ACCRecordSwitchModeGestureService> modeGestureService;
@property (retain, nonatomic) AWEVideoPublishViewModel *textPublishModel;
@property (retain, nonatomic) id<ACCMVTemplateManagerProtocol> templateManager;
@property (nonatomic) BOOL hasFetchedMCTemplate;
@property (retain, nonatomic) id<ACCRecordSubmodeService> submodeService;
@property (retain, nonatomic) NSObject<ACCTextModeBackgroundManagerProtocol> *backgroundManager;
@property (nonatomic) BOOL didPreloadTextBackground;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)onCameraDidStartRender:(id)a0;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)componentDidMount;
- (id)serviceBinding;
- (BOOL)shouldShowGuide;
- (BOOL)enableGuide;
- (void)bindServices:(id)a0;
- (void)preloadBackgroundResourceIfNeed;
- (void)showRedDotGuideIfNeeded;
- (void)prefetchTextToVideoTemplatesIfNeed;
- (void)hideRedDotGuideWhenEnterTextMode;
- (void)enterPreMode;
- (void)goNextPage;
- (void)redDotGuideExposure;
- (void)enterTextMode;
- (void)exitTextMode;
- (void).cxx_destruct;
- (void)close:(BOOL)a0;

@end
