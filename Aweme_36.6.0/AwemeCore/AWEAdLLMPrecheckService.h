@class NSMutableDictionary, NSDictionary, NSString, NSMutableArray;

@interface AWEAdLLMPrecheckService : NSObject <AWEAdLLMPrecheckService>

@property (retain, nonatomic) NSMutableDictionary *precheckCache;
@property (retain, nonatomic) NSMutableDictionary *innerPrecheckOrder;
@property (retain, nonatomic) NSMutableArray *outerPrecheckOrder;
@property (retain, nonatomic) NSMutableDictionary *invalidPrecheckCache;
@property (retain, nonatomic) NSMutableDictionary *customWareHouse;
@property (copy, nonatomic) NSDictionary *config;
@property (copy, nonatomic) NSString *sceneName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)requestGroupName:(id)a0;
- (void)makeOuterOrder:(id)a0;
- (void)makeInnerOrder:(id)a0 cid:(id)a1;
- (void)trackPredict:(id)a0 highlight:(id)a1;
- (void)clearCacheToMaxCount;
- (void)clearAllCacheForCid:(id)a0;
- (id)allPrecheckCache;
- (id)precheckCacheWithCid:(id)a0;
- (id)orderedPrecheckCacheWithCid:(id)a0;
- (id)precheckCacheWithCid:(id)a0 text:(id)a1;
- (void)makePrecheckWithCid:(id)a0 text:(id)a1 compeletion:(id /* block */)a2;
- (void)cancelPrecheckWithCid:(id)a0;
- (id)customWareHouseForCid:(id)a0 forKey:(id)a1;
- (void)saveCustomValue:(id)a0 forKey:(id)a1 forCid:(id)a2;
- (id)allPrecheckInvalidCache;
- (id)precheckInvalidCacheWithCid:(id)a0;
- (id)precheckInvalidCacheWithCid:(id)a0 text:(id)a1;
- (id)allCacheCids;
- (BOOL)triggerPredownload:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
