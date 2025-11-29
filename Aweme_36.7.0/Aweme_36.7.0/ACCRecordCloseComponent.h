@class ACCGroupedPredicate, ACCRecordCloseViewModel, NSString, AWEResourceUploadParametersResponseModel, NSObject, ACCAnimatedButton;
@protocol ACCRecordCloseHandlerProtocol, ACCRecorderViewContainer, ACCRecordUIHiddenStrategyService, ACCCameraService, ACCRecordFlowService, ACCPublishServiceProtocol, ACCRecordScanModeService, ACCRecordSystemLivePhotoService, ACCRecordSwitchModeService, ACCRecordScanModelFlowService, ACCShootSourceService, ACCMultiStyleAlertProtocol, AWERecordInspirationServiceProtocol;

@interface ACCRecordCloseComponent : ACCFeatureComponent <ACCRecorderViewContainerItemsHideShowObserver, ACCRecordScanModelFlowSubscriber, ACCRecordFlowServiceSubscriber, AWERecordInspirationServiceSubscriber>

@property (copy, nonatomic) id /* block */ backAlertConfig;
@property (retain, nonatomic) NSObject<ACCMultiStyleAlertProtocol> *backAlert;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) ACCRecordCloseViewModel *viewModel;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) ACCAnimatedButton *closeButton;
@property (nonatomic) BOOL isFirstAppear;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<ACCPublishServiceProtocol> publishService;
@property (retain, nonatomic) AWEResourceUploadParametersResponseModel *uploadParamsCache;
@property (retain, nonatomic) ACCGroupedPredicate *showButtonPredicte;
@property (retain, nonatomic) id<ACCRecordScanModelFlowService> scanToScanService;
@property (retain, nonatomic) id<ACCRecordScanModeService> scanModeService;
@property (retain, nonatomic) id<ACCRecordUIHiddenStrategyService> hiddenStrategyService;
@property (retain, nonatomic) id<ACCShootSourceService> shootSourceService;
@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (retain, nonatomic) id<AWERecordInspirationServiceProtocol> inspriationService;
@property (copy, nonatomic) NSString *reshootTitle;
@property (copy, nonatomic) NSString *exitTitle;
@property (retain, nonatomic) id<ACCRecordCloseHandlerProtocol> themeHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)closeButtonHeight;

- (void)componentWillAppear;
- (void)componentDidAppear;
- (void)shouldItemsShow:(BOOL)a0 animated:(BOOL)a1;
- (void)updateItemsHiddenWithAnimation:(BOOL)a0;
- (id)componentContentView;
- (void)loadComponentView;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (id)serviceBinding;
- (id /* block */)p_cancelActionConfig;
- (id /* block */)p_saveDraftActionConfig;
- (BOOL)p_showBackAlertForDraftIfNeeded;
- (BOOL)p_showBackAlertIfNeeded;
- (id)p_commonBackAlertActionTrackInfo;
- (id /* block */)p_draftBackAlertConfig;
- (id)p_businessActionConfigs;
- (BOOL)p_shouldShowSaveDraftAction;
- (id /* block */)p_alertConfigWithoutAction;
- (BOOL)p_filterBaseCaseForShowAction;
- (void)p_bindViewModelObserver;
- (void)clickBackBtn:(id)a0;
- (void)flowServiceDidEnterScanMode;
- (void)flowServiceWillExitScanMode;
- (BOOL)shouldRemoveAllSegments;
- (void)showCancelShootAlertBtn:(id)a0;
- (void)closeRecorder;
- (void)saveTheOriginalDraft;
- (void)clearEditBackUp;
- (void)p_exitForDraft;
- (void)p_cancelForDraft;
- (id /* block */)p_combineBackAlertConfigWithBusinessActionConfigs:(id)a0;
- (BOOL)p_filterCommonCaseForShowQuickPublishAndSaveDraftAction;
- (id /* block */)p_exitActionConfig;
- (BOOL)p_shouldShowReshootAction;
- (id /* block */)p_reshootActionConfig;
- (void)inspirationEnterEffectTakeSame;
- (void)inspirationExitEffectTakeSame;
- (void).cxx_destruct;
- (void)removeAllSegments;
- (void)updateCloseButtonVisibility;

@end
