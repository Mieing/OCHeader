@class NSString;
@protocol ACCRecordPropService, AWERecordBeautyService, ACCFeatureComponent;

@interface ACCRecorderBeautyComponentPropPlugin : ACCFeatureComponent <ACCServiceBindable, ACCFeatureComponentPlugin>

@property (class, readonly, nonatomic) id hostIdentifier;

@property (weak, nonatomic) id<ACCRecordPropService> propService;
@property (weak, nonatomic) id<AWERecordBeautyService> beautyService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCFeatureComponent> component;

- (void)bindServices:(id)a0;
- (void).cxx_destruct;

@end
