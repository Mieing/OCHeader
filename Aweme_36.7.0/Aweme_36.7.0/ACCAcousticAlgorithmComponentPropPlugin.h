@class NSString;
@protocol ACCFeatureComponent, ACCCameraService;

@interface ACCAcousticAlgorithmComponentPropPlugin : NSObject <ACCRecordPropServiceSubscriber, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (retain, nonatomic) id<ACCCameraService> cameraService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

@end
