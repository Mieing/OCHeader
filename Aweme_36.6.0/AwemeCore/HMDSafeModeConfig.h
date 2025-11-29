@interface HMDSafeModeConfig : HMDBaseConfig

@property (nonatomic) BOOL enableOpen;
@property (nonatomic) double timeoutDuration;

+ (id)hmd_attributeMapDictionary;
+ (BOOL)shouldLocalStoreConfigData;

@end
