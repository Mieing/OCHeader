@class UIButton, CECMomentCameraPreviewViewModel, NSString, CECMomentCameraSubModeViewModel, CECMomentCameraPublishViewModel;
@protocol AFDMomentCameraPerformanceTrackService, CECMomentCameraSwitchTabService, AFDMomentContextService, CECMomentCameraSubModeService, CECMomentCameraFlowService, AFDMomentCameraPublishService;

@interface CECMomentCameraPublishComponent : AFDMomentCameraBaseComponent <CECMomentCameraFlowServiceSubscriber, CECMomentCameraSubModeSwitchServiceSubscriber>

@property (retain, nonatomic) CECMomentCameraPublishViewModel *viewModel;
@property (retain, nonatomic) CECMomentCameraPreviewViewModel *previewViewModel;
@property (retain, nonatomic) CECMomentCameraSubModeViewModel *subModeViewModel;
@property (retain, nonatomic) UIButton *publishButton;
@property (retain, nonatomic) UIButton *publishRotateButton;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (retain, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<AFDMomentCameraPublishService> publishService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindObserver;
- (BOOL)isSupportFriendsVisibleForNotes;
- (void)componentDidLoad;
- (void)subModeServiceWillChangeToMode:(id)a0 fromMode:(id)a1;
- (id)p_currentSubMode;
- (double)publishShowingAlpha;
- (void)didTapPublishButton;
- (void)touchDownTapPublishButton;
- (void)touchCancelTapPublishButton;
- (void)publishAction;
- (void)p_actuallyPublish;
- (id)prepareExtrePamas;
- (void)publishLandingForMomentText;
- (void).cxx_destruct;

@end
