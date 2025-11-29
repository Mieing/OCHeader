@interface LSSDeviceFeatureCollector : LSSBaseFeatureCollector

+ (id)defaultFeatureCollector;

- (id)fillInputFeature:(id)a0 projectKey:(id)a1 strategyConfigBundleName:(id)a2 extraInfo:(id)a3;
- (id)initCollector;

@end
