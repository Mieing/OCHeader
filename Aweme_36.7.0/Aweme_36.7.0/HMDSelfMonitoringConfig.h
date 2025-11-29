@class NSDictionary;

@interface HMDSelfMonitoringConfig : HMDBaseConfig

@property (nonatomic) BOOL enableOpen;
@property (nonatomic) unsigned int uploadInterval;
@property (retain, nonatomic) NSDictionary *experimentTags;

+ (id)hmd_attributeMapDictionary;
+ (BOOL)shouldLocalStoreConfigData;

- (void).cxx_destruct;

@end
