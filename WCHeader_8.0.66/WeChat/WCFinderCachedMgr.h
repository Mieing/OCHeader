@class EntranceReportSwitch, MMLRUCache, NSMutableSet, WCFinderTipsShowEntranceExtInfo;

@interface WCFinderCachedMgr : NSObject

@property (retain, nonatomic) MMLRUCache *notifyUUIDCache;
@property (retain, nonatomic) MMLRUCache *lbsLifeSyncNotifyUUIDCache;
@property (retain, nonatomic) MMLRUCache *feedPlayInfoCache;
@property (retain, nonatomic) MMLRUCache *feedClientReportInfoCache;
@property (retain, nonatomic) MMLRUCache *profilePreFetchCache;
@property (retain, nonatomic) MMLRUCache *encryptedDataItemChache;
@property (retain, nonatomic) MMLRUCache *autoPlayNextFeedSwitchCache;
@property (retain, nonatomic) NSMutableSet *redPacketBubbleShowSet;
@property (retain, nonatomic) NSMutableSet *postJumpInfoBubbleShowSet;
@property (retain, nonatomic) EntranceReportSwitch *syncReport;
@property (retain, nonatomic) EntranceReportSwitch *lbsLifeSyncReport;
@property (retain, nonatomic) MMLRUCache *fansProfileUsernameCache;
@property (retain, nonatomic) MMLRUCache *subTabCache;
@property (nonatomic) unsigned long long hasEnterTabRecord;
@property (nonatomic) unsigned long long hasJumpToTabFromLeadToCardRecord;
@property (retain, nonatomic) MMLRUCache *shareListRemindFeedCache;
@property (nonatomic) unsigned long long discoverySyncTimestamp;
@property (nonatomic) unsigned long long foregroundSyncTimestamp;
@property (nonatomic) unsigned long long lbsLifeForegroundSyncTimestamp;
@property (nonatomic) unsigned long long enterSnsSyncTimestamp;
@property (nonatomic) unsigned long long exitSnsSyncTimestamp;
@property (nonatomic) unsigned long long exposeLastSnsFeedSyncTimestamp;
@property (nonatomic) unsigned long long exposeNSnsFeedSyncTimestamp;
@property (nonatomic) unsigned long long fetchRedDotSnsDelivery;
@property (nonatomic) unsigned long long fetchRedDotAppPush;
@property (nonatomic) BOOL ignoreFaceVerifyCheck;
@property (retain, nonatomic) WCFinderTipsShowEntranceExtInfo *lbsLifeEntranceShowInfoExtInfo;

+ (id)cachedKeyOfEncryptedFeedID:(id)a0;
+ (unsigned long long)convertFrom:(long long)a0;

- (id)init;
- (void)addRedPacketBubbleShow:(id)a0;
- (BOOL)redPacketBubbleHasShow:(id)a0;
- (void)addPostJumpInfoBubbleShow:(id)a0;
- (BOOL)postJumpInfoBubbleShow:(id)a0;
- (void)onCachedMgrClearData;
- (void)onCachedMgrTerminate;
- (void)_saveEncryTidCached:(id)a0;
- (BOOL)hadCacheNotifyUUID:(id)a0;
- (void)cacheNotifyUUID:(id)a0;
- (BOOL)hadCacheLbsLifeSyncNotifyUUID:(id)a0;
- (void)cacheLbsLifeSyncNotifyUUID:(id)a0;
- (void)updateVideoPlayReportInfo:(id)a0 withFeedID:(id)a1 commentScene:(unsigned long long)a2;
- (id)getVideoPlayReportInfoWithTid:(id)a0 commentScene:(unsigned long long)a1;
- (void)updateFeedClientInfoWithFeedID:(id)a0 commentScene:(unsigned long long)a1 reportInfo:(id)a2;
- (id)getFeedClientInfoWithFeedID:(id)a0 commentScene:(unsigned long long)a1;
- (id)getKeyWithTid:(id)a0 commentScene:(unsigned long long)a1;
- (void)saveProfilePreFetchTimestampWithUsername:(id)a0;
- (BOOL)canProfilePreFetchWithUsername:(id)a0 interval:(long long)a1;
- (id)feedIdWithEncryptedFeedID:(id)a0;
- (void)removeCachedFeedIDWithEncryptedFeedID:(id)a0;
- (void)updateFeedId:(id)a0 withEncryptedFeedID:(id)a1;
- (void)setAutoPlayNextFeedSwitch:(BOOL)a0 forKey:(id)a1;
- (BOOL)getAutoPlayNextFeedSwitchForKey:(id)a0;
- (void)updateSyncConfig:(id)a0;
- (id)syncConfig;
- (void)commonLogForSyncConfigUpdateWithConfig:(id)a0 logIdentifier:(id)a1;
- (void)updateLbsLifeSyncConfig:(id)a0;
- (id)lbsLifeSyncConfig;
- (void)cacheFansProfileUsername:(id)a0 username:(id)a1;
- (id)getFansProfileCacheName:(id)a0;
- (BOOL)hasEnterTimelineTab:(long long)a0;
- (void)markEnterTimelineTab:(long long)a0;
- (BOOL)hasJumpToTimelineTabFromLeadToCard:(long long)a0;
- (void)markJumpToTimelineTabFromLeadToCard:(long long)a0;
- (void)clearAllEnterTimelineTabRecord;
- (void)setShareListRemindFeedCache:(id)a0 shareFeedKey:(id)a1;
- (void)removeShareListRemindFeedCacheWithShareFeedKey:(id)a0;
- (id)getShareListRemindFeedCacheForKey:(id)a0;
- (void).cxx_destruct;

@end
