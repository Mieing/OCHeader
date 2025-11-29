@class UIViewController, NSString, IESMMCameraConfig, AWEAIGCSelectServiceServiceImpl, AWEVideoPublishViewModel, UIView, ACCRecordViewControllerInputData;
@protocol ACCLoadingViewProtocol, ACCRecordSwitchModeService, ACCRecordPropService, ACCRecorderViewContainer, ACCRecordCloseService, ACCRecordSwitchModeGestureService, ACCResourceLoadedService, ACCFilterService, ACCCameraService;

@interface ACCAIGCSelectComponent : ACCFeatureComponent <AWEMVTemplateModelDelegate, ACCRecordSwitchModeServiceSubscriber>

@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (nonatomic) BOOL retryEnterAfterExitFinished;
@property (nonatomic) BOOL isFirstAppear;
@property (nonatomic) BOOL haveReportShowTab;
@property (retain, nonatomic) AWEVideoPublishViewModel *AIGCPublishModel;
@property (retain, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCFilterService> filterService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordCloseService> closeService;
@property (retain, nonatomic) id<ACCRecordSwitchModeGestureService> modeGestureService;
@property (retain, nonatomic) id<ACCResourceLoadedService> resourceLoadedService;
@property (retain, nonatomic) UIViewController *aigcTemplateViewController;
@property (copy, nonatomic) NSString *lastTaskId;
@property (nonatomic) BOOL hasAddDefaultAIGCProp;
@property (retain, nonatomic) IESMMCameraConfig *mainConfig;
@property (retain, nonatomic) AWEAIGCSelectServiceServiceImpl *aigcServiceImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)onCameraDidStartRender:(id)a0;
- (void)componentDidMount;
- (void)componentDidUnmount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (id)rootVC;
- (void)p_close;
- (void)bindServices:(id)a0;
- (void)addDefaultAIGCProp;
- (void)p_preLoadData;
- (void)p_preloadHuafengData;
- (void)p_preloadMyData;
- (void)p_preloadLoraData;
- (void)p_preloadMultiResources;
- (void)p_preloadLoraUgcBannerSupportMsgStrategyEffect;
- (void)handleTrackNetWorkBuriedkeyDuration:(double)a0 Error:(id)a1 Iscache:(BOOL)a2;
- (id)getNormalTrackParams;
- (id)aigcTemplateViewControllerWithRecordBtnFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_exitAIGCTemplateMode;
- (void)p_resetPublishModel:(id)a0;
- (void)p_exitAIGCMode;
- (void)p_enterAIGCMode;
- (void)exitAIGCModeHiddenSelectButton:(BOOL)a0;
- (id)waterfallAIGCTemplateVC:(BOOL)a0;
- (void)p_preloadAITabData;
- (void).cxx_destruct;

@end
