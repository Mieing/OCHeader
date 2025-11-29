@class NSString, AWEPzRecordCache, IESWCDatabase;

@interface AWEPzRecordManager : NSObject

@property (class, readonly, nonatomic) IESWCDatabase *db;

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *comTblName;
@property (copy, nonatomic) NSString *journalTblName;
@property (copy, nonatomic) NSString *cTagTblName;
@property (copy, nonatomic) NSString *sTagTblName;
@property (nonatomic) BOOL tablesInitialized;
@property (retain, nonatomic) AWEPzRecordCache *cache;

+ (id)getSerialQueue;
+ (void)preloadDatabase;
+ (id)queryJournalRecordWithModel:(id)a0;
+ (id)queryWithScopes:(id)a0 excludedScopes:(id)a1 domain:(id)a2 date:(id)a3 limitCount:(long long)a4 secUid:(id)a5 consume:(id)a6;
+ (void)purgeJournalWithConfigs:(id)a0 defaultLimits:(id)a1 completion:(id /* block */)a2;
+ (id)queryJournalWithCacheConfig:(id)a0 callTrace:(id)a1;
+ (void)observeMemoryLevelIfNeeded;
+ (void)wcdb2_setupDB:(id)a0 fileSize:(long long)a1;
+ (void)setupDB:(id)a0 fileSize:(long long)a1;
+ (BOOL)p_purgeJournalWithConfigs:(id)a0 defaultLimits:(id)a1;
+ (BOOL)isFirstDbOperation;
+ (id)subqueryAllDomainInDB;
+ (BOOL)p_purgeJournalWithDomain:(id)a0 config:(id)a1;
+ (id)wcdb2_subqueryWithHandle:(id)a0 scopes:(id)a1 excludedScopes:(id)a2 domain:(id)a3 date:(id)a4 limitCount:(long long)a5 secUid:(id)a6 consume:(id)a7;
+ (id)subqueryWithScopes:(id)a0 excludedScopes:(id)a1 domain:(id)a2 date:(id)a3 limitCount:(long long)a4 secUid:(id)a5 consume:(id)a6;
+ (void)p_orConditionsFromScopes:(id)a0 domain:(id)a1 orConditions:(void *)a2 invalidScopesCount:(int *)a3;
+ (void)wcdb2_orConditionsWithHandle:(id)a0 scopes:(id)a1 domain:(id)a2 orConditions:(void *)a3 invalidScopesCount:(int *)a4;
+ (id)subqueryWithCTags:(id)a0 sTags:(id)a1 domain:(id)a2;
+ (id)wcdb2_subqueryWithHandle:(id)a0 cTags:(id)a1 sTags:(id)a2 domain:(id)a3;
+ (id)cache_queryJournalRecordWithModel:(id)a0;
+ (id)p_domain2ScopesMapFromScopes:(id)a0;
+ (id)p_convertQueryResultType:(long long)a0;
+ (void)p_handleMemoryNotification:(id)a0;
+ (void)loadCacheFromCallTrace:(id)a0 shouldReload:(id /* block */)a1;
+ (void)p_resumeCacheIfNeeded;
+ (void)p_clearCacheIfNeeded:(int)a0;
+ (void)clearCacheFromCallTrace:(id)a0 shouldClear:(id /* block */)a1;
+ (id)printAllRecordWithDomain:(id)a0;
+ (void)clearAllRecordWithDomain:(id)a0;
+ (id)journalCountMap;

- (id)queryComponentRecordWithModel:(id)a0;
- (void)logHideWithRecordModel:(id)a0 completion:(id /* block */)a1;
- (void)logConsumeWithRecordModel:(id)a0 completion:(id /* block */)a1;
- (void)logShowWithRecordModel:(id)a0 completion:(id /* block */)a1;
- (id)logWithRecordModel:(id)a0 date:(id)a1 secUid:(id)a2 comRoutine:(id /* block */)a3 journalRoutine:(id /* block */)a4;
- (void)asyncLogWithMethod:(id)a0 action:(id /* block */)a1 completion:(id /* block */)a2;
- (id)wcdb2_logWithRecordModel:(id)a0 date:(id)a1 secUid:(id)a2 comRoutine:(id /* block */)a3 journalRoutine:(id /* block */)a4;
- (id)wcdb1_logWithRecordModel:(id)a0 date:(id)a1 secUid:(id)a2 comRoutine:(id /* block */)a3 journalRoutine:(id /* block */)a4;
- (void).cxx_destruct;
- (id)initWithDomain:(id)a0;

@end
