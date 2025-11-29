@class WCTDatabase, NSString, WCTTable;
@protocol BrandDatabaseNotifyDelegate;

@interface BrandDatabaseMgr : MMUserService <MMServiceProtocol>

@property (retain) WCTDatabase *db;
@property (retain) WCTTable *tableMPPageCacheItem;
@property (retain) WCTTable *tableMPPageReportItem;
@property (retain) WCTTable *tableBrandDigestInfo;
@property (retain, nonatomic) WCTDatabase *offlineCacheDB;
@property (retain, nonatomic) WCTTable *tableMPPageOfflineCacheItem;
@property (weak, nonatomic) id<BrandDatabaseNotifyDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)offlineCache_openDB;
- (void)offlineCache_closeDB;
- (id)offlineCache_DBPath;
- (id)offlineCache_setupTableWithName:(id)a0 tableClass:(Class)a1;
- (void)offlineCache_createTables;
- (id)offlineCache_mpPageCacheItemWithIdentity:(id)a0;
- (id)getExpiredCacheItems;
- (BOOL)offlineCache_addMPPageCacheItemList:(id)a0;
- (void)offlineCache_clearDataBase;
- (void)registerRecoverNotification;
- (void)removeRecoverNotification;
- (void)willRecoverDatabase;
- (void)didRecoverDatabase;
- (BOOL)deleteOfflineCacheItemWithIdentity:(id)a0;
- (void)onServiceInit;
- (void)onServiceClearData;
- (id)mpPageCacheItemWithIdentity:(id)a0;
- (unsigned long long)getMPPageCacheItemCount;
- (BOOL)addMPPageCacheItemList:(id)a0;
- (BOOL)deleteMPPageCacheItemWithUpdateTimeEarlierThanTime:(unsigned int)a0;
- (void)deleteAllMPPageCacheItems;
- (BOOL)addMPPageReportItemWithItem:(id)a0;
- (id)getMPPageReportItemListWithLimit:(unsigned int)a0;
- (unsigned int)getMPPageReportItemCountBeforeTime:(long long)a0;
- (BOOL)deleteMPPageReportItemInWithItemStartId:(unsigned int)a0 andEndId:(unsigned int)a1;
- (BOOL)deleteMPPageReportItemBeforeTime:(long long)a0;
- (BOOL)replaceOrInsertDigestInfo:(id)a0;
- (id)getLatestDigestInfo;
- (long long)getSavedDataId;
- (long long)genDataIdData:(id)a0;
- (BOOL)checkDigestInfoShouldUpdate:(id)a0;
- (id)getDigestInfoWithUsername:(id)a0;
- (void)deleteDigestInfoByUsername:(id)a0;
- (void)deleteUnSubscribeContactDigestInfoIfNeed;
- (BOOL)shouldDeleteUnSubscribeContactDigestInfo;
- (void)setHasDeleteUnSubscribeContactDigestInfo;
- (void)openDB;
- (void)closeDB;
- (id)dbPath;
- (void)createTables;
- (id)setupTableWithName:(id)a0 tableClass:(Class)a1;
- (void).cxx_destruct;

@end
