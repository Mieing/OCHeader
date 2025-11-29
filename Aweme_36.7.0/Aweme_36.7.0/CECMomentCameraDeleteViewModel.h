@class CECMomentCameraTextViewModel, CECMomentCameraPreviewViewModel, NSString, AFDMomentCameraContext;
@protocol AFDMomentCameraPerformanceTrackService, AFDMomentContextService, CECMomentCameraFlowService, CECMomentCameraSubModeService;

@interface CECMomentCameraDeleteViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraDeleteInterface>

@property (nonatomic) BOOL shouldShowDeleteButton;
@property (nonatomic) BOOL shouldDisable;
@property (readonly, weak, nonatomic) CECMomentCameraPreviewViewModel *previewViewModel;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (retain, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (readonly, weak, nonatomic) CECMomentCameraTextViewModel *textViewModel;
@property (nonatomic) BOOL closeCameraVC;
@property (retain, nonatomic) AFDMomentCameraContext *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)didTapDeleteButton;
- (void)injectService;
- (void)p_updateWithState:(long long)a0;
- (void)deletePublish;
- (void)trackForAudioNotesDelete;
- (void)trackDeletePost;
- (void).cxx_destruct;

@end
