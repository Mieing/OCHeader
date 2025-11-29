@interface HMDPerformanceUploadSetting : HMDCommonAPISetting

@property (nonatomic) unsigned long long maxRetryCount;
@property (nonatomic) unsigned long long uploadInterval;
@property (nonatomic) unsigned long long onceMaxCount;
@property (nonatomic) unsigned long long reportFailBaseInterval;
@property (nonatomic) BOOL enableNetQualityReport;
@property (nonatomic) BOOL enableDowngradeByChannel;

+ (id)hmd_attributeMapDictionary;

@end
