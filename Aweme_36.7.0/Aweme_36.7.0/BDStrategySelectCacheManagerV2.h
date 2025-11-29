@class NSString, NSDictionary, NSMutableDictionary;

@interface BDStrategySelectCacheManagerV2 : NSObject <BDStrategySelectCacheProtocol> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
}

@property (copy, nonatomic) NSString *updateSignature;
@property (retain, nonatomic) NSDictionary *updateMd5Map;
@property (retain) NSDictionary *updateSource;
@property (readonly, nonatomic) NSMutableDictionary *tempSelectCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)loadStrategySelectCache;
+ (void)loadStrategySelectCacheWithMD5Map:(id)a0 signature:(id)a1;
+ (id)ruleSetNamesForInput:(id)a0 withFilterKeys:(id)a1 inSet:(id)a2;
+ (void)setRuleSetNames:(id)a0 forInput:(id)a1 withFilterKeys:(id)a2 inSet:(id)a3;
+ (id)ruleSetNamesForCacheKey:(id)a0;
+ (void)postProcessCacheUpdate;
+ (void)setRuleSetNames:(id)a0 forCacheKey:(id)a1;
+ (id)signature;
+ (id)sharedInstance;

- (void)clearTempSelectCache;
- (id)tempRuleSetNamesForCacheKey:(id)a0;
- (void)setTempRuleSetNames:(id)a0 forCacheKey:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
