@class NSString, ACCBeautyFeatureComponent;
@protocol ACCFeatureComponent, ACCRecordTrackService, ACCRecordPropService, ACCBeautyService;

@interface ACCBeautyFeatureComponentPropPlugin : NSObject <ACCCameraLifeCircleEvent, ACCFeatureComponentPlugin, ACCServiceBindable>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (readonly, nonatomic) ACCBeautyFeatureComponent *hostComponent;
@property (retain, nonatomic) id<ACCRecordTrackService> trackService;
@property (retain, nonatomic) id<ACCRecordPropService> propService;
@property (retain, nonatomic) id<ACCBeautyService> beautyService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

@end
