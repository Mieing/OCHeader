@class IESMMCameraConfig, NSString, NSHashTable, AWEVideoPublishViewModel, AWEStudioRecorderFeatureCaptureConfig, ACCRecordViewControllerInputData;
@protocol ACCModeCameraSessionService, VERecorderPublicProtocol;

@interface ACCCameraFactoryImpls : NSObject <ACCCameraFactory, ACCModeCameraSessionConfigAssembler, CameraKit.CameraSessionSwitchSubscription>

@property (weak, nonatomic) ACCRecordViewControllerInputData *inputData;
@property (retain, nonatomic) id<VERecorderPublicProtocol> camera;
@property (retain, nonatomic) IESMMCameraConfig *config;
@property (retain, nonatomic) NSHashTable *subscribers;
@property (nonatomic) BOOL postInitCameraConfigFinished;
@property (weak, nonatomic) AWEVideoPublishViewModel *repository;
@property (retain, nonatomic) id<ACCModeCameraSessionService> modeCameraSessionService;
@property (retain, nonatomic) AWEStudioRecorderFeatureCaptureConfig *captureFeatureConfig;
@property (nonatomic) unsigned long long initStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setCameraIfNeeded:(id)a0;
- (void)cameraInstanceDidCreated:(id)a0 cameraSessionKey:(id)a1;
- (void)cameraSessionDidRestoreConfig:(id)a0;
- (void)preloadCameraInstanceAvailable:(id)a0 forSessionKey:(id)a1;
- (void)didSwitchCameraSessionFrom:(id)a0 to:(id)a1;
- (void)willSwitchCameraSessionFrom:(id)a0 to:(id)a1;
- (void)addCameraListener:(id)a0;
- (id)buildCameraWithContext:(const void *)a0 cameraPreviewView:(id)a1 completionBlock:(id /* block */)a2;
- (BOOL)cansUpdateCameraSize;
- (void)assemblyCameraConfig:(id)a0 initialRecordMode:(id)a1;
- (id)initWithInputData:(id)a0;
- (id)createCameraWithContext:(const void *)a0 cameraPreviewView:(id)a1 completion:(id /* block */)a2;
- (void)postCameraCreationConfiguration:(id)a0;
- (BOOL)p_isNeedCreateCamera;
- (void)setVERecordInfoBlockIfNeeded;
- (id)cameraConfigWithInputData:(id)a0;
- (void)configCameraConfig:(id)a0 withInputData:(id)a1 initialRecordMode:(id)a2;
- (void)p_cameraSessionManagerCameraAvailble:(id)a0 forSessionKey:(id)a1;
- (void).cxx_destruct;

@end
