@class NSMutableDictionary, BDPThreadSafeDictionary;

@interface BDPCommonParamsManager : NSObject {
    NSMutableDictionary *_paramDict;
    NSMutableDictionary *_customDict;
    NSMutableDictionary *_customDictPriorityList;
    BDPThreadSafeDictionary *_usingApps;
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _lock;
}

+ (id)paramsFromGroup:(id)a0;
+ (void)setParams:(id)a0 inGroup:(id)a1;
+ (void)setBgParams:(id)a0 inGroup:(id)a1;
+ (void)removeUsingApp:(id)a0;
+ (void)clearGroup:(id)a0;
+ (void)setUsingApp:(id)a0;
+ (void)removeCustomCommonParams:(id)a0;
+ (void)addDynamicJSSDKBundleVersionMap:(id)a0;
+ (void)setCustomCommonParams:(id)a0 priority:(id)a1 inGroup:(id)a2;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
