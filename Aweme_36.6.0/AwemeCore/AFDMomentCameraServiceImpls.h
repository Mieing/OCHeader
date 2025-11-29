@class CMCCameraSubscription, IESMMCameraConfig, NSString, UIView;
@protocol AFDMomentCameraPerformanceTrackService, ACCServiceProvideRecipe, VERecorderPublicProtocol, CMCRecorderProtocol, CMCCameraControlProtocol, AFDMomentCameraFactory;

@interface AFDMomentCameraServiceImpls : NSObject <AFDMomentCameraService>

@property (retain, nonatomic) id<VERecorderPublicProtocol> camera;
@property (nonatomic) BOOL cameraHasInit;
@property (retain, nonatomic) CMCCameraSubscription *subscription;
@property (nonatomic) BOOL hasSendDidRenderMsg;
@property (nonatomic) BOOL isCameraCompleted;
@property (nonatomic) BOOL isLoadFinished;
@property (weak, nonatomic) id<ACCServiceProvideRecipe> serviceResolver;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (readonly, nonatomic) UIView *cameraPreviewView;
@property (retain, nonatomic) id<AFDMomentCameraFactory> cameraFactory;
@property (retain, nonatomic) IESMMCameraConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<CMCRecorderProtocol> recorder;
@property (readonly, nonatomic) id<CMCCameraControlProtocol> cameraControl;

- (id)resolveObject:(id)a0;
- (void)markComponentsLoadFinished;
- (void)buildCameraWithConfig:(id)a0;
- (void)configResolver:(id)a0;
- (void)p_handleComleteCamera;
- (void)bindCameraLifeCircle;
- (void).cxx_destruct;
- (id)recorder;
- (BOOL)isSplitting;
- (void)addSubscriber:(id)a0;

@end
