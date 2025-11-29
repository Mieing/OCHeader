@class NSString, NSMutableDictionary;

@interface AWEPitayaFeaturesContextTracker : HTSService <IESPitayaFeaturesContextTracker> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) NSMutableDictionary *instanceDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)fillFeatures:(id)a0 withModel:(id)a1 config:(id)a2;
- (id)getBatchFeature:(id)a0;
- (id)getSchemaFeature:(id)a0;
- (id)getKVStoreFeature:(id)a0;
- (id)getCloudFeature:(id)a0;
- (id)getFeature:(id)a0 params:(id)a1;
- (id)getStoreFeatureValuesWithBusiness:(id)a0 type:(id)a1 featureNames:(id)a2;
- (id)getStoreFeatureValuesWithBusiness:(id)a0 type:(id)a1;
- (id)getCloudUserFeatureWithBusinessName:(id)a0 featureName:(id)a1;
- (id)getUEInstanceWithBusinessName:(id)a0 featureName:(id)a1;
- (id)getCachedInstanceWithType:(id)a0 businessName:(id)a1;
- (void)setCachedInstance:(id)a0 type:(id)a1 businessName:(id)a2;
- (id)getMemoryCacheInstanceWithBusinessName:(id)a0;
- (id)getKVStoreInstanceWithBusinessName:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
