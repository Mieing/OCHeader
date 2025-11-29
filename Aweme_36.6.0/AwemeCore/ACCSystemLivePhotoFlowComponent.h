@class UIImageView, NSString;
@protocol ACCCameraService, ACCRecordFlowService, ACCRecordFlowControlService, ACCRecordSystemLivePhotoService, ACCRecorderViewContainer;

@interface ACCSystemLivePhotoFlowComponent : ACCFeatureComponent <ACCRecordFlowHandler, ACCRecordFlowControlServiceSubscriber, ACCCameraLifeCircleEvent, ACCRecordSystemLivePhotoServiceSubscriber>

@property (retain, nonatomic) id<ACCRecordFlowControlService> flowControlService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) UIImageView *livePhotoLoadingView;
@property (nonatomic) BOOL firstFrameHasRendered;
@property (nonatomic) BOOL hasTakePictureAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidDisappear;
- (void)cameraService:(id)a0 stopVideoCaptureWithError:(id)a1;
- (void)onCameraFirstFrameDidRender:(id)a0;
- (void)recordSystemLivePhotoStart:(double)a0;
- (void)recordSystemLivePhotoCancel;
- (void)flowControlServiceWillStartRecordFlow:(unsigned long long)a0 source:(id)a1;
- (void)takeLivePhotoPicture;
- (void)componentDidMount;
- (unsigned long long)preferredLoadPhase;
- (void)bindServices:(id)a0;
- (void)startRecordFlowWithSource:(id)a0;
- (BOOL)canStopWithSource:(id)a0;
- (void)tryTakePicture;
- (void)showLivePhotoRecordingImageView;
- (void)hideLivePhotoRecordingImageView;
- (void)configLivePhotoLoadingView;
- (void).cxx_destruct;

@end
