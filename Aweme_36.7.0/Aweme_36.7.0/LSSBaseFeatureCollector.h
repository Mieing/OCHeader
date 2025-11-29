@class NSDictionary, NSString;

@interface LSSBaseFeatureCollector : NSObject

@property (copy, nonatomic) NSDictionary *callerInfo;
@property (copy, nonatomic) NSString *collectorName;
@property (copy, nonatomic) NSString *featureType;
@property (copy, nonatomic) NSDictionary *featureConfig;

- (id)fillInputFeature:(id)a0 projectKey:(id)a1 strategyConfigBundleName:(id)a2 extraInfo:(id)a3;
- (void)updateCallerInfo:(id)a0;
- (void)updateFeatureConfig:(id)a0;
- (int)getNetWorkType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
