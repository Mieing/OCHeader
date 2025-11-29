@class NSString, NSMutableDictionary;

@interface MMFinderLiveKTVCacheMgr : MMUserService <MMLiveCDNPlayerItemExt, MMFinderLiveKTVBoxExt, MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *ktvCacheDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initDatas;
- (void)clearDatas;
- (void)registerExtensions;
- (void)unRegisterExtensions;
- (id)cacheKTVContainer:(id)a0 ktvBox:(id)a1;
- (void)clearKTVCache:(id)a0;
- (id)getKTVCache:(id)a0;
- (id)getKTVCacheWithTaskId:(id)a0;
- (void)onLiveCDNPlayerItem:(id)a0 customExtraPramDestroy:(id)a1;
- (void)onUniqueTaskId:(id)a0 transitionBegin:(id)a1 box:(id)a2 contextId:(id)a3;
- (void)onUniqueTaskId:(id)a0 transitionEnd:(id)a1 box:(id)a2 contextId:(id)a3;
- (void).cxx_destruct;

@end
