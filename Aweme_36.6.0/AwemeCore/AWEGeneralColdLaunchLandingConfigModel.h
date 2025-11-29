@class NSString, AWEGeneralColdLaunchLandingFrequencyConfigModel;

@interface AWEGeneralColdLaunchLandingConfigModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *configId;
@property (retain, nonatomic) AWEGeneralColdLaunchLandingFrequencyConfigModel *frequencyConfig;
@property (copy, nonatomic) NSString *openSchema;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
