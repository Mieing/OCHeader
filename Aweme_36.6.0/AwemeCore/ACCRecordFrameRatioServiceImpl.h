@class NSString, UIImage, ACCCameraSubscription, RACSignal, RACSubject, AWEVideoPublishViewModel, AWEStudioRecorderFeatureCaptureConfig, _TtC9CameraKit10CameraView;
@protocol ACCCameraService, ACCRecorderViewContainer, IESServiceProvider, ACCRecordSwitchModeService, ACCCameraSwapService, CKSCameraContextProcessor;

@interface ACCRecordFrameRatioServiceImpl : NSObject <ACCRecordFrameRatioService>

@property (retain, nonatomic) AWEStudioRecorderFeatureCaptureConfig *featureConfig;
@property (nonatomic) BOOL captureStoped;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) id<ACCRecorderViewContainer> viewContainer;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSwitchModeService> switchModeService;
@property (retain, nonatomic) id<CKSCameraContextProcessor> contextProcessor;
@property (retain, nonatomic) id<ACCCameraSwapService> cameraSwapService;
@property (weak, nonatomic) _TtC9CameraKit10CameraView *cameraView;
@property (retain, nonatomic) UIImage *lastFrameImage;
@property (nonatomic) double switchStreamBegainTime;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (retain, nonatomic) RACSubject *frameRatioSubject;
@property (retain, nonatomic) RACSignal *frameRatioSignal;
@property (nonatomic) BOOL isSwitchingRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cameraService:(id)a0 stopVideoCaptureWithError:(id)a1;
- (void)onCameraFirstFrameDidRender:(id)a0;
- (void)frameRatioClickEvent;
- (BOOL)readFrameRatio3_4WithModeId:(unsigned long long)a0;
- (void)saveFrameRatio:(BOOL)a0 withModeId:(unsigned long long)a1;
- (void)adjustRecordFrameRatioBeforCameraBuild;
- (void)adjustResolutionWitSwitchStream:(BOOL)a0;
- (struct CGSize { double x0; double x1; })getInputSizeWithCurrentCamera;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })currentContentFrame;
- (void)changeRecordFrameRatioToMode:(id)a0 showFrameAnimation:(BOOL)a1 switchStream:(BOOL)a2;
- (void)changeRecordFrameRatioToMode:(id)a0 showFrameAnimation:(BOOL)a1 showBlur:(BOOL)a2 useLastFrameAsBlurImage:(BOOL)a3 switchStream:(BOOL)a4;
- (void)changeCurrentModeFrameRatioToType:(long long)a0 showCorner:(BOOL)a1 showFrameAnimation:(BOOL)a2 switchStream:(BOOL)a3;
- (void)changeCurrentModeFrameRatioToType:(long long)a0 showCorner:(BOOL)a1 showFrameAnimation:(BOOL)a2 showBlur:(BOOL)a3 useLastFrameAsBlurImage:(BOOL)a4 switchStream:(BOOL)a5;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1 featureConfig:(id)a2;
- (void)switchBegainColdOperation;
- (void)adjustResolutionWitSwitchStream:(BOOL)a0 completion:(id /* block */)a1;
- (void)switchEndRecoveOperation;
- (BOOL)currentConditionSupportCacheWithModeId:(unsigned long long)a0;
- (id)currentRatioStatusItemToSync;
- (struct CGSize { double x0; double x1; })getSizeWithSwitchStreamCamera:(long long)a0;
- (void)whenFirstRenderCompleted:(BOOL)a0;
- (void)sendSwitchStreamMonitor:(BOOL)a0;
- (void).cxx_destruct;
- (double)cornerRadius;
- (void)dealloc;
- (void)addSubscriber:(id)a0;

@end
