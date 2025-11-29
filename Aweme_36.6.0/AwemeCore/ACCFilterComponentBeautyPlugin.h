@class NSString, ACCFilterComponent;
@protocol ACCFeatureComponent;

@interface ACCFilterComponentBeautyPlugin : ACCFeatureComponent <ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCFilterComponent *hostComponent;
@property (weak, nonatomic) id<ACCFeatureComponent> component;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
