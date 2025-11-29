@class EnterpriseBrandAttrDB, NSString, BannerTips, NSMutableSet, NSCache;

@interface EnterpriseBrandAttrMgr : MMUserService <PBMessageObserverDelegate, MMServiceProtocol> {
    EnterpriseBrandAttrDB *_db;
    NSCache *_cache;
    BannerTips *_bannerTips;
    NSMutableSet *_attrFetchingSet;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)getAttrByUserName:(id)a0;
- (id)getOrCreateAttrByUserName:(id)a0;
- (unsigned int)getQyUinByUserName:(id)a0;
- (BOOL)isBrandBlockMsg:(id)a0;
- (BOOL)isBrandMuteMsg:(id)a0;
- (unsigned int)getWwEntryType:(id)a0;
- (BOOL)isHighLightWw:(id)a0;
- (BOOL)setAttr:(id)a0 onProperties:(const void *)a1;
- (void)setCloseHighLightWw:(id)a0;
- (void)incWwExposeTime:(id)a0;
- (void)deleteAttr:(id)a0;
- (id)getAttrCacheItem:(id)a0;
- (void)removeAttrCacheItem:(id)a0;
- (BOOL)setAttrToCache:(id)a0;
- (BOOL)setUpdateTimeToCache:(id)a0;
- (BOOL)needUpdate:(id)a0;
- (void)onEnterpriseBrandContactDeleted:(id)a0;
- (BOOL)updateAttrFromSvr:(id)a0;
- (BOOL)forceUpdateAttrFromSvr:(id)a0;
- (void)handleGetBizEnterpriseAttrFromSvr:(id)a0;
- (id)handleBizEnterpriseAttr:(id)a0;
- (id)getWeworkBannerTips:(long long)a0;
- (id)getWeworkBannerIconUrl;
- (id)getWeworkBannerTipsColor;
- (id)getWeworkBannerJumpUrl;
- (id)colorFromARGB:(int)a0;
- (void)updateBlockMsgFlagToSvr:(id)a0 block:(BOOL)a1;
- (void)updateBrandMuteFlagToSvr:(id)a0 mute:(BOOL)a1;
- (void)updateAttrToSvr:(id)a0 mask:(unsigned int)a1;
- (void)handleSetBizEnterpriseAttrToSvr:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
