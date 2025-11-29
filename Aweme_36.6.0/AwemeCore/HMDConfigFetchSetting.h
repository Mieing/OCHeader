@interface HMDConfigFetchSetting : HMDCommonAPISetting

@property (nonatomic) unsigned long long fetchInterval;
@property (nonatomic) BOOL useSettingsV5;
@property (nonatomic) long long optimizeType;

+ (id)hmd_attributeMapDictionary;

@end
