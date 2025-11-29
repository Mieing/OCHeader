@class UIImage, AFDMomentCameraContext, NSString;
@protocol CECMomentCameraFlowService, AFDMomentCameraPerformanceTrackService, CECMomentCameraSwitchTabService;

@interface CECMomentCameraAlbumViewModel : AFDMomentCameraBaseViewModel <CAKPhotoLibraryChangeObserver, CECMomentCameraFlowServiceSubscriber, CECMomentCameraAlbumInterface>

@property (nonatomic, getter=isHidden) BOOL hidden;
@property (nonatomic, getter=isEnable) BOOL enable;
@property (retain, nonatomic) UIImage *albumButtonCover;
@property (retain, nonatomic) UIImage *defaultAlbumButtonCover;
@property (nonatomic) BOOL isDefaultCover;
@property (nonatomic) BOOL isViewAppeared;
@property (nonatomic) BOOL hasRegisterChangeObserver;
@property (nonatomic) BOOL shouldFetchWhenBtnShow;
@property (nonatomic) BOOL isUploadFlow;
@property (nonatomic) BOOL isAuthorizationStage;
@property (nonatomic) BOOL needShowAlbumVC;
@property (nonatomic) BOOL needReleaseAlbumVC;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (weak, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly, nonatomic) BOOL showFetchLoading;
@property (retain, nonatomic) AFDMomentCameraContext *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)flowServiceWillChangeToState:(long long)a0 fromState:(long long)a1;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)configViewAppear:(BOOL)a0;
- (void)trackerClickAlbumBtn;
- (void)runAuthorizationStage:(BOOL)a0;
- (void)trackBackToCamera;
- (void)configResourceWith:(BOOL)a0 image:(id)a1 livePhoto:(id)a2;
- (void)userDidOpenAlbumVC;
- (void)fetchResourceWith:(BOOL)a0 filePath:(id)a1;
- (void)p_fetchLastPhotoAsTheCoverIfNeedWhenBtnShow:(BOOL)a0;
- (void)fetchLastPhotoAsTheCoverIfNeed;
- (void)p_setAlbumButtonCover:(id)a0;
- (void)p_addPhotoLibraryObserveIfNeed;
- (void)configResourceWith:(BOOL)a0 image:(id)a1 livePhoto:(id)a2 isNeedTrack:(BOOL)a3;
- (void)injectService;
- (void).cxx_destruct;
- (void)photoLibraryDidChange:(id)a0;
- (void)dealloc;

@end
