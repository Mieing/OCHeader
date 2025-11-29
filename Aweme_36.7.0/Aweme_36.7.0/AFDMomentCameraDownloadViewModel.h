@protocol AFDMomentCameraFlowService, AFDMomentCameraPerformanceTrackService, AFDMomentContextService, AFDMCEditService;

@interface AFDMomentCameraDownloadViewModel : AFDMomentCameraBaseViewModel

@property (nonatomic) BOOL shouldShowDownloadButton;
@property (retain, nonatomic) id<AFDMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (weak, nonatomic) id<AFDMCEditService> editService;
@property (weak, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (nonatomic) BOOL disableShowDownloadButton;

- (void)setupViewModel;
- (void)p_updateWithState:(long long)a0;
- (void)didTapDownloadButton;
- (void)trackDownload;
- (void)trackPermissionToastClick:(id)a0 clickPostion:(id)a1 clickType:(id)a2;
- (void)p_saveImpl;
- (void)p_saveToPhotoLibraryWithImage:(id)a0 videoURL:(id)a1;
- (void).cxx_destruct;

@end
