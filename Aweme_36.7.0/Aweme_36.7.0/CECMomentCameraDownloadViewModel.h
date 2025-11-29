@class NSString, AFDMomentCameraContext, CECMomentCameraTextViewModel;
@protocol AFDMomentCameraPerformanceTrackService, AFDMomentContextService, CECMomentCameraFlowService, AFDMCEditService, CECMomentCameraSwitchTabService, CECMomentCameraSubModeService;

@interface CECMomentCameraDownloadViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraDownloadInterface>

@property (nonatomic) BOOL shouldShowDownloadButton;
@property (nonatomic) BOOL shouldDisable;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (weak, nonatomic) id<AFDMCEditService> editService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (weak, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (readonly, weak, nonatomic) CECMomentCameraTextViewModel *textViewModel;
@property (nonatomic) BOOL disableShowDownloadButton;
@property (retain, nonatomic) AFDMomentCameraContext *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)trackEditUserSettingButtonClicked;
- (void)injectService;
- (void)p_updateWithState:(long long)a0;
- (void)didTapDownloadButton;
- (void)trackDownloadFromPublish:(BOOL)a0;
- (void)savePictureWithEffect:(id)a0 withCompletion:(id /* block */)a1;
- (void)trackPermissionToastShow:(id)a0;
- (void)savePictureWithCompletion:(id /* block */)a0;
- (void)trackPermissionToastClick:(id)a0 clickPosition:(id)a1 clickType:(id)a2;
- (id)p_mixtureImageForMultiCamera;
- (void)p_saveToPhotoLibraryWithImageArray:(id)a0 videoURLArray:(id)a1 withCompletionBlock:(id /* block */)a2;
- (id)p_saveImageWithWatermark:(id)a0;
- (id)addExifAuthorDataForImage:(id)a0;
- (id)p_mixtureMapAndAvatarWithMapImage:(id)a0 withAvatarView:(id)a1;
- (void).cxx_destruct;

@end
