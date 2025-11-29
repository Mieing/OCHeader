@class NSString, ACCBeautyFeatureComponent;
@protocol ACCFilterService, ACCCameraService, ACCFeatureComponent, ACCBeautyService, ACCCameraPureModeService;

@interface ACCBeautyComponentFlowPlugin : ACCFeatureComponent <ACCRecordFlowServiceSubscriber, ACCCameraPureModeRecover, ACCFeatureComponentPlugin>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCBeautyFeatureComponent *hostComponent;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCBeautyService> beautyService;
@property (retain, nonatomic) id<ACCFilterService> filterService;
@property (retain, nonatomic) id<ACCCameraPureModeService> pureModeService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)flowServiceStateDidChanged:(unsigned long long)a0 preState:(unsigned long long)a1;
- (void)flowServiceWillBeginTakePicture;
- (void)flowServiceDidAddPictureToVideo:(id)a0;
- (void)flowServiceDidAddFragment:(id)a0;
- (void)flowServiceDidCompleteRecord;
- (void)componentDidMount;
- (void)bindServices:(id)a0;
- (void)trackCannotShowBeautyWithNetworkStatus:(BOOL)a0 useCache:(BOOL)a1 isLoadingToast:(BOOL)a2;
- (void)fillBeautifyInfoForFragmentInfo:(id)a0;
- (id)composerEffectObj;
- (void)rollbackEffect;
- (void).cxx_destruct;

@end
