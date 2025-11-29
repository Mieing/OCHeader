@class NSString, AWEStudioRecorderFeatureHDPhotoConfig;
@protocol ACCRecordSwitchModeService, AWERecordHDPhotoService, ACCRecorderViewContainer, AWEStudioInspirationFollowFeaturePublicAPI, ACCRecordSystemLivePhotoService, ACCRecordTemplateVideoPreviewService, ACCRecordFlowService, ACCCameraService, AWERecordPopupLifeRecordService;

@interface AWERecordHDPhotoComponent : ACCFeatureComponent <ACCRecordFlowServiceSubscriber, ACCRecordSwitchModeServiceSubscriber>

@property (weak, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (weak, nonatomic) id<AWERecordHDPhotoService> hdPhotoService;
@property (weak, nonatomic) id<ACCRecordFlowService> flowService;
@property (weak, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (weak, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (weak, nonatomic) id<AWEStudioInspirationFollowFeaturePublicAPI> inspirationFollowService;
@property (retain, nonatomic) id<AWERecordPopupLifeRecordService> popupRecord;
@property (weak, nonatomic) id<ACCRecordTemplateVideoPreviewService> templateVideoPreviewService;
@property (retain, nonatomic) AWEStudioRecorderFeatureHDPhotoConfig *featureConfig;
@property (nonatomic) BOOL firstFrameDidRender;
@property (nonatomic) BOOL showGuideAfterFirstFrame;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidAppear;
- (void)prepareDataForSwitchModeToMode:(id)a0 oldMode:(id)a1;
- (void)onCameraFirstFrameDidRender:(id)a0;
- (void)flowServiceWillBeginTakePicture;
- (void)flowServiceDidTakeHDPicture:(id)a0 error:(id)a1;
- (unsigned long long)preferredLoadPhase;
- (id)guideLabel;
- (void)bindServices:(id)a0;
- (BOOL)isModeTakePicture;
- (BOOL)enableGuide4ToolbarHidden;
- (void)showHDPhotoGuideIfNeeded;
- (BOOL)isModeTakePictureWithMode:(id)a0;
- (void).cxx_destruct;

@end
