@class ACCCameraSubscription, NSString, ACCRecorderDeviceMotion, AWEVideoPublishViewModel;
@protocol ACCCameraService, ACCRecordSystemLivePhotoService, IESServiceProvider;

@interface ACCLandscapeRecordServiceImpl : NSObject <ACCLandscapeRecordService>

@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (weak, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) ACCCameraSubscription *subscription;
@property (nonatomic) long long currentDeviceOrientation;
@property (nonatomic) long long currentCameraOutputDirection;
@property (nonatomic) BOOL isDetecting;
@property (retain, nonatomic) ACCRecorderDeviceMotion *deviceMotion;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCRecordSystemLivePhotoService> systemLivePhotoService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupDeviceMotion;
- (void)startDetect;
- (void)stopDetect;
- (BOOL)shouldHandleAutoRotate;
- (void)triggerRecordOrientationUpdateAction;
- (void)resetDefaultOrientation;
- (void)reloadHistroyRecordOrientation;
- (double)rotateEndValueWithDeviceOrientation:(long long)a0;
- (BOOL)isReshootScene;
- (long long)draftProfileRecordOrientation;
- (id)rotateLastCaptureFrameWithImage:(id)a0 isExpand:(BOOL)a1;
- (void)updateItemRotation:(id)a0 withDeviceOrientation:(long long)a1 animated:(BOOL)a2;
- (id)initWithServiceProvider:(id)a0 repository:(id)a1;
- (void)updateCurrentDeviceOrientation:(long long)a0;
- (void)updateCurrentCameraOutputDirection:(long long)a0;
- (id)rotateImageWithImage:(id)a0 angle:(double)a1 isExpand:(BOOL)a2;
- (double)motionUpdateInterval;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)addSubscriber:(id)a0;

@end
