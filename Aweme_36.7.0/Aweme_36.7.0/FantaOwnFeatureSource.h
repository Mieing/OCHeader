@class NSMutableDictionary, NSMutableSet;

@interface FantaOwnFeatureSource : NSObject <FantaFeatureSource> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) NSMutableDictionary *featureProducerDictionary;
@property (retain, nonatomic) NSMutableDictionary *featureRequestProducerDictionary;
@property (retain, nonatomic) NSMutableSet *featureProviderSet;

- (void)registerFeature:(id)a0 producer:(id /* block */)a1;
- (void)registerRequestPureFeature:(id)a0 producer:(id /* block */)a1;
- (void)registerFeatureProvider:(id)a0;
- (id)featureForKey:(id)a0 extraInfo:(id)a1;
- (id)featureGroupForKeys:(id)a0 extraInfo:(id)a1;
- (id)p_featureValueForKey:(id)a0 extraInfo:(id)a1;
- (id)p_featureValueForKeyV2:(id)a0 extraInfo:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)type;
- (void)dealloc;

@end
