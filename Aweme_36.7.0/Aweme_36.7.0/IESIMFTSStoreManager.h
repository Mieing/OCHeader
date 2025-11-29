@class WCTDatabase, IESIMStorage;

@interface IESIMFTSStoreManager : NSObject

@property (retain, nonatomic) WCTDatabase *database;
@property BOOL hasClosed;
@property BOOL appWillTerminate;
@property (retain, nonatomic) IESIMStorage *kvStorage;
@property (nonatomic) BOOL enableDropDirtyData;

- (id)getTransaction;
- (void)executeCheckpointWithCompletion:(id /* block */)a0;
- (void)handleAppWillTerminateNotification:(id)a0;
- (void)p_trackLanchIO:(unsigned long long)a0;
- (void)insertOrUpdateFTSDataList:(id)a0;
- (void)deleteFTSData:(id)a0;
- (void)deleteFTSDataWithGroupid:(id)a0 type:(long long)a1;
- (void)deleteFTSDataWithBusid:(id)a0 type:(long long)a1;
- (void)deleteFTSDataWithBusids:(id)a0 types:(id)a1 contentTypes:(id)a2;
- (void)deleteFTSDataWithType:(long long)a0;
- (id)queryWithKeywords:(id)a0;
- (id)queryWithKeywords:(id)a0 types:(id)a1 inConversation:(id)a2;
- (id)queryWithKeywords:(id)a0 types:(id)a1;
- (id)queryWithKeywords:(id)a0 types:(id)a1 inConversation:(id)a2 contentTypes:(id)a3;
- (long long)queryLatestFTSDataUpdateTimeOfType:(long long)a0 extTypes:(id)a1;
- (void)p_setupDBWithConfig:(id)a0;
- (void)p_insertOrUpdateFTSData:(id)a0 inTransaction:(id)a1;
- (BOOL)p_canMakeDBOperation;
- (id)insertFailKeyOfFTSData:(id)a0;
- (void)p_deleteFTSDataWithCondition:(const void *)a0;
- (struct WCTExpr { struct basic_string<char, std::char_traits<char>, std::allocator<char>> { union __rep { struct __short { char x0[23]; unsigned char x1 : 7; unsigned char x2 : 1; } x0; struct __long { char *x0; unsigned long long x1; unsigned long x2 : 63; unsigned char x3 : 1; } x1; } x0; } x0; Class x1; struct shared_ptr<WCTColumnBinding> { struct WCTColumnBinding *x0; struct __shared_weak_count *x1; } x2; Class x3; })p_conditionOfKeywords:(id)a0;
- (id)p_queryWithCondition:(const void *)a0;
- (id)p_getCipherKeyWihtUid:(id)a0;
- (void)p_setupTableOfDatabase:(id)a0 withError:(id *)a1;
- (void)p_setCheckPoint:(id)a0;
- (BOOL)p_isCorruptedError:(id)a0;
- (void)insertOrUpdateFTSData:(id)a0;
- (double)p_dbFileSize:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
