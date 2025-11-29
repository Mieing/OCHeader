@class IESMMCameraConfig, NSString, UIView, CECCameraSubscription;
@protocol ACCRecorderProtocol, ACCAlgorithmProtocol, ACCBeautyProtocol, VERecorderPublicProtocol, CECMomentCameraFactory, ACCMultiCameraProtocol, ACCFilterProtocol, ACCCameraAudioControlProtocol, AFDMomentCameraPerformanceTrackService, ACCCameraControlProtocol, ACCServiceProvideRecipe, CECMomentCameraSwitchTabService;

@interface CECMomentCameraServiceImpls : NSObject <CECMomentCameraService>

@property (retain, nonatomic) id<VERecorderPublicProtocol> camera;
@property (retain, nonatomic) CECCameraSubscription *subscription;
@property (nonatomic) BOOL hasSendDidRenderMsg;
@property (nonatomic) BOOL isCameraCompleted;
@property (nonatomic) BOOL isLoadFinished;
@property (weak, nonatomic) id<ACCServiceProvideRecipe> serviceResolver;
@property (retain, nonatomic) id<AFDMomentCameraPerformanceTrackService> trackService;
@property (retain, nonatomic) id<CECMomentCameraSwitchTabService> switchTabService;
@property (nonatomic) BOOL cameraHasInit;
@property (nonatomic) BOOL isLandingToRecord;
@property (readonly, nonatomic) UIView *cameraPreviewView;
@property (readonly, nonatomic) UIView *cameraSecondPreviewView;
@property (retain, nonatomic) id<CECMomentCameraFactory> cameraFactory;
@property (retain, nonatomic) IESMMCameraConfig *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<ACCRecorderProtocol> recorder;
@property (readonly, nonatomic) id<ACCCameraControlProtocol> cameraControl;
@property (readonly, nonatomic) id<ACCAlgorithmProtocol> algorithm;
@property (readonly, nonatomic) id<ACCMultiCameraProtocol> multiCameraControl;
@property (readonly, nonatomic) id<ACCBeautyProtocol> beauty;
@property (readonly, nonatomic) id<ACCFilterProtocol> filter;
@property (readonly, nonatomic) id<ACCCameraAudioControlProtocol> audio;

- (id)resolveObject:(id)a0;
- (id /* block */)wrappedCameraActionBlock;
- (void)markComponentsLoadFinished;
- (id /* block */)cameraActionBlock;
- (void)buildCameraWithConfig:(id)a0;
- (void)switchMomentCameraSetCamera:(id)a0;
- (void)switchCameraToMutliCameraWithConfig:(id)a0 completion:(id /* block */)a1;
- (void)switchCameraToSingleCameraWithConfig:(id)a0 completion:(id /* block */)a1;
- (void)removeCamera;
- (void)cameraSessionVECameraCreateCompletion;
- (void)cameraSessionAfterSwithSession;
- (void)configResolver:(id)a0;
- (void)p_handleComleteCamera;
- (void)bindCameraLifeCircle;
- (void)p_releaseCamera;
- (void)p_switchCameraToMutliCameraWithConfig:(id)a0 completion:(id /* block */)a1;
- (void)p_switchCameraToSingleCameraWithConfig:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)isSplitting;
- (void)addSubscriber:(id)a0;

@end
