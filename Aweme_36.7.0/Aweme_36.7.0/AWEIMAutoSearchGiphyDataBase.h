@class NSString, YYMemoryCache, IESWCDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface AWEIMAutoSearchGiphyDataBase : NSObject <AWEIMAutoSearchGiphyCache>

@property (copy, nonatomic) NSString *userId;
@property (copy, nonatomic) NSString *dbPath;
@property (retain, nonatomic) IESWCDatabase *database;
@property (retain, nonatomic) YYMemoryCache *memoryCache;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) BOOL isWCDBToTwo;
@property (nonatomic) BOOL traceError;
@property (nonatomic) BOOL enableTraceOpt;
@property (nonatomic) BOOL enableWCDBCrashOpt;
@property BOOL appWillTerminate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)p_isCorrupted:(id)a0;
+ (BOOL)p_createTableWithDatabase:(id)a0 tableName:(id)a1 class:(Class)a2 error:(id *)a3;
+ (BOOL)p_createTablesWithDatabase:(id)a0;

- (id)initWithUserID:(id)a0;
- (void)handleAppWillTerminateNotification:(id)a0;
- (void)p_prepareDatabase;
- (void)p_prepareDatabaseForWCDBTwo;
- (void)p_prepareDatabaseForWCDBOne;
- (void)removeContentWithContext:(id)a0 completion:(id /* block */)a1;
- (void)saveContentWithContext:(id)a0 completion:(id /* block */)a1;
- (void)contentORMWithSearchKey:(id)a0 completion:(id /* block */)a1;
- (void)didClickWithSearchKey:(id)a0 completion:(id /* block */)a1;
- (void)mostRecentClickTimeWithCompletion:(id /* block */)a0;
- (void)invalidSearchKeysWithLimit:(long long)a0 cacheExpireInterval:(long long)a1 extraSearchKeysBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)deleteContentBeforeTimestamp:(double)a0;
- (void)deleteContentWithQueries:(id)a0 beforeTimestamp:(double)a1;
- (void)trimDataIfNeeded;
- (BOOL)p_insertObject:(id)a0 tableName:(id)a1 class:(Class)a2;
- (void)p_hanldeInvalidSearchKeysForWCDBTwoWithLimit:(long long)a0 cacheExpireInterval:(long long)a1 extraSearchKeysBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)p_hanldeInvalidSearchKeysForWCDBOneWithLimit:(long long)a0 cacheExpireInterval:(long long)a1 extraSearchKeysBlock:(id /* block */)a2 completion:(id /* block */)a3;
- (void)p_deleteObjectsFromTable:(id)a0 condition:(struct WCTExpr { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; Class x1; struct shared_ptr<WCTColumnBinding> { struct WCTColumnBinding *x0; struct __shared_weak_count *x1; } x2; Class x3; })a1 queries:(id)a2 beforeTimestamp:(double)a3;
- (void)p_trimData;
- (void)p_trimDataForWCDBTwo;
- (void)p_trimDataForWCDBOne;
- (BOOL)p_initDatabaseForWCDBTwo;
- (void).cxx_destruct;

@end
