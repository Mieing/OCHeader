@class NSString, ACCBeautyFeatureComponent;
@protocol ACCCameraService, ACCRecordFlowService, IESServiceProvider, ACCFeatureComponent, ACCBeautyService;

@interface ACCBeautyFeatureComponentTrackerPlugin : NSObject <ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCBeautyFeatureComponent *hostComponent;
@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCRecordFlowService> flowService;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (retain, nonatomic) id<ACCBeautyService> beautyService;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)bindTrackEvent;
- (void).cxx_destruct;

@end
