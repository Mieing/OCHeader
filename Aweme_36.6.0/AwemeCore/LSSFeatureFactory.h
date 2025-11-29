@interface LSSFeatureFactory : NSObject

+ (id)defaultFeatureFactory;

- (void)updateFeatureConfig:(id)a0;
- (id)featchFeatureData:(id)a0 inFeatureData:(id)a1 projectKey:(id)a2 sdkInfo:(id)a3;
- (void)updateCallerInfo:(long long)a0 callerInfo:(id)a1;
- (void)setFeature:(long long)a0 eventInfo:(id)a1;

@end
