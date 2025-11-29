@class UIViewController, NSString, ACCMVSelectViewModel, NSMutableDictionary, UIView, AWEModalTransitionDelegate, AWEVideoPublishViewModel;
@protocol ACCLoadingViewProtocol, ACCRecordSwitchModeService, ACCRecordPropService, ACCRecorderViewContainer, ACCRecordCloseService, ACCRecordSwitchModeGestureService, ACCFilterService, ACCCameraService;

@interface ACCMVSelectComponent : ACCFeatureComponent <AWEMVTemplateModelDelegate, ACCRecordSwitchModeServiceSubscriber, ACCMVSelectViewModelDelegate>

@property (retain, nonatomic) AWEModalTransitionDelegate *transitionDelegate;
@property (retain, nonatomic) UIView<ACCLoadingViewProtocol> *loadingView;
@property (copy, nonatomic) NSString *mvEnterMethod;
@property (nonatomic) BOOL retryEnterAfterExitFinished;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) AWEVideoPublishViewModel *mvPublishModel;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCFilterService> filterService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCRecordCloseService> closeService;
@property (retain, nonatomic) id<ACCRecordSwitchModeGestureService> modeGestureService;
@property (retain, nonatomic) UIViewController *mvTemplateViewController;
@property (retain, nonatomic) ACCMVSelectViewModel *viewModel;
@property (nonatomic) BOOL isMVTemplatePropLoading;
@property (retain, nonatomic) NSMutableDictionary *classicMVModelDict;
@property (nonatomic) BOOL didPreloadMVTemplates;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)configTrackParamsForInputData:(id)a0 withPublishModel:(id)a1;

- (void)componentWillAppear;
- (void)switchModeServiceWillChangeToMode:(id)a0 oldMode:(id)a1;
- (void)switchModeServiceDidChangeMode:(id)a0 oldMode:(id)a1;
- (void)onCameraDidStartRender:(id)a0;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (id)rootVC;
- (id /* block */)didPickTemplateBlock;
- (void)p_close;
- (void)bindServices:(id)a0;
- (void)p_resetPublishModel:(id)a0;
- (void)model:(id)a0 didStartDownloadTemplateModel:(id)a1;
- (void)model:(id)a0 didFinishDownloadTemplateModel:(id)a1 duration:(double)a2;
- (void)model:(id)a0 didFailDownloadTemplateModel:(id)a1 withError:(id)a2 duration:(double)a3;
- (void)preloadMVTemplatesIfNeed;
- (id)mvTemplateViewControllerWithRecordBtnFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_exitWaterfallMVTemplateMode;
- (void)p_preloadMVTemplates;
- (id)waterfallMVTemplateVC:(BOOL)a0;
- (void)p_exitMVMode;
- (void)enterMVMode;
- (void)p_fetchChallengeForEffectModel:(id)a0;
- (void)p_updatePublishModelWithClassicalMVTemplate:(id)a0;
- (void)showSelectPhotoViewController:(id)a0;
- (BOOL)openRecorderFirstFrameOpt;
- (void)p_bindMVTemplatePropSelectedSignal;
- (void)p_enterClassicalMVPhotoSelectVC:(id)a0;
- (void)p_updatePublishModelWithCutSameTemplateMode:(id)a0;
- (void)showCutSameImportViewController:(id)a0;
- (void)showSelectPhotoViewController:(id)a0 withRequestAuthorCompletionBlock:(id /* block */)a1;
- (void)p_presentSelectPhotoViewController:(id)a0;
- (void)p_presentCutSameImportViewController:(id)a0;
- (void)exitMVModeHiddenSelectButton:(BOOL)a0;
- (void)p_addRecorderInteractionStickers;
- (void)p_preloadMVTemplatesCategoriesAndHotMVTemplates;
- (void)inspirationVimoTemplatePropDidSelectWith:(id)a0;
- (void)p_switchModeGestureConfig;
- (void).cxx_destruct;

@end
