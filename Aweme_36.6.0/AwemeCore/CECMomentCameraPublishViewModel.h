@class AFDMomentCameraContext, NSString, CECMomentCameraSubModeViewModel, CECMomentCameraSecurityViewModel, CECMomentCameraTextViewModel, CECMomentCameraBeautyViewModel, NSMutableArray, CECMomentCameraDownloadViewModel, CECMomentCameraSwitchModeViewModel, CMCPublishModel;
@protocol CECMomentCameraSwitchTabService, AFDMomentContextService, CECMomentCameraSubModeService, CECMomentCameraService, AFDMomentCameraPublishService, AFDMomentCameraPerformanceTrackService, AFDMCEditService, CECDraftService, CECMomentCameraFlowService;

@interface CECMomentCameraPublishViewModel : AFDMomentCameraBaseViewModel <CECMomentCameraFlowServiceSubscriber>

@property (nonatomic) BOOL shouldHideButtonWhenTextPanning;
@property (nonatomic) BOOL userInteractionEnabled;
@property (nonatomic) BOOL shouldPublishRotateButton;
@property (nonatomic) BOOL toggleMomentTextPublishEvent;
@property (weak, nonatomic) CECMomentCameraBeautyViewModel *beautyViewModel;
@property (weak, nonatomic) CECMomentCameraTextViewModel *textViewModel;
@property (retain, nonatomic) CECMomentCameraDownloadViewModel *downloadViewModel;
@property (weak, nonatomic) CECMomentCameraSwitchModeViewModel *switchModeViewModel;
@property (retain, nonatomic) CECMomentCameraSubModeViewModel *subModeViewModel;
@property (retain, nonatomic) CECMomentCameraSecurityViewModel *securityModeViewModel;
@property (weak, nonatomic) id<CECMomentCameraSubModeService> subModeService;
@property (retain, nonatomic) id<CECMomentCameraFlowService> flowService;
@property (retain, nonatomic) id<CECMomentCameraService> cameraService;
@property (weak, nonatomic) id<AFDMCEditService> editService;
@property (weak, nonatomic) id<AFDMomentCameraPublishService> publishService;
@property (retain, nonatomic) id<AFDMomentContextService> contextService;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (weak, nonatomic) id<CECDraftService> draftService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (retain, nonatomic) NSMutableArray *publishQueue;
@property (retain, nonatomic) CMCPublishModel *currentPublishingModel;
@property (nonatomic) BOOL shouldShowPublishButton;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL dontBlockMomentPublish;
@property (retain, nonatomic) AFDMomentCameraContext *cameraContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupViewModel;
- (void)saveToAlbum;
- (id)publishImage;
- (void)flowServiceDidChangeToState:(long long)a0 fromState:(long long)a1;
- (void)didTapPublishButton;
- (void)updatePublishButtonWithState:(long long)a0 mode:(id)a1;
- (BOOL)canPublish;
- (void)trackTapPublishButton;
- (void)publishForMomentRecord;
- (void)saveToAlbumWithUserSetting;
- (void)createDraftModelForMomentRecordWithCompletion:(id /* block */)a0;
- (void)p_configDraftModel:(id)a0;
- (BOOL)isImagePublishPath;
- (void)saveToAlbumIfNeeded;
- (BOOL)needCheckImage;
- (BOOL)isVideoPublishPath;
- (id)p_coverImageWithImage:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1;
- (id)p_momentCameraExtraTrackDict;
- (void)trackEnterPublishPage;
- (void).cxx_destruct;
- (id)originalImage;
- (void)dealloc;

@end
