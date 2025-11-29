@class NSDictionary;

@interface IESIMDiskOptConfig : NSObject

@property (nonatomic) BOOL enable;
@property (nonatomic) double levelAFreeSizeGB;
@property (nonatomic) double levelBAppSizeGB;
@property (nonatomic) long long diskSpaceCalculateIntervalSeconds;
@property (retain, nonatomic) NSDictionary *optLevelAConfig;
@property (retain, nonatomic) NSDictionary *optLevelBConfig;
@property (retain, nonatomic) NSDictionary *commonConfig;

+ (id)modelCustomPropertyMapper;

- (id)dictionaryValueForKey:(id)a0 userType:(long long)a1;
- (void).cxx_destruct;

@end
