@class NSString, ACCFilterComponent;
@protocol ACCCameraService, ACCFeatureComponent, IESServiceProvider;

@interface ACCFilterComponentTrackerPlugin : NSObject <ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCFilterComponent *hostComponent;
@property (retain, nonatomic) id<IESServiceProvider> serviceProvider;
@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)bindServices:(id)a0;
- (void)bindTrackEvent;
- (void).cxx_destruct;

@end
