@class NSString, ByteBenchStrategyOC;
@protocol AWEClientAIUIBlockInterface;

@interface AWEStaticFeaturesContextTracker : HTSService <IESStaticFeaturesContextTracker> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _lock;
}

@property (retain, nonatomic) ByteBenchStrategyOC *benchStrategy;
@property (retain, nonatomic) id<AWEClientAIUIBlockInterface> UIBlockHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id /* block */)makeValueGetter:(id /* block */)a0;
- (id)getFeaturesWithStrategy:(id)a0 subTypes:(id)a1;
- (id)getBizFeatureGetterMap;
- (id)getFeaturesWithStrategy:(id)a0;
- (void).cxx_destruct;
- (id)getFeature:(id)a0;
- (void)dealloc;

@end
