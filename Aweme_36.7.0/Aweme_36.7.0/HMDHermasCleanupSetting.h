@interface HMDHermasCleanupSetting : HMDBaseConfig

@property (nonatomic) unsigned long long maxStoreSize;
@property (nonatomic) unsigned long long maxStoreTime;

+ (id)hmd_attributeMapDictionary;

@end
