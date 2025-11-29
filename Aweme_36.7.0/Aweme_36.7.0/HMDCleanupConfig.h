@class NSArray, HMDHermasCleanupSetting;

@interface HMDCleanupConfig : HMDBaseConfig

@property double outdatedTimestamp;
@property (nonatomic) unsigned long long maxSessionCount;
@property (nonatomic) double maxRemainDays;
@property (retain) NSArray *andConditions;
@property (nonatomic) unsigned long long expectedDBSize;
@property (nonatomic) unsigned long long devastateDBSize;
@property (retain, nonatomic) HMDHermasCleanupSetting *hermasCleanupSetting;

+ (id)hmd_attributeMapDictionary;

- (void).cxx_destruct;

@end
