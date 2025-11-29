@class FTSDB;

@interface FTSMessageDB : NSObject

@property (retain, nonatomic) FTSDB *database;
@property (nonatomic) BOOL isHandlingUsernameFailIdRetry;
@property (nonatomic) BOOL isHandlingAutoReparing;

- (BOOL)asyncCheckAndRepair:(id)a0 completion:(id /* block */)a1;
- (void)logFTSIndexStatus:(id)a0;
- (void)dealloc;
- (BOOL)initDB:(id)a0;
- (BOOL)createAllTable;
- (BOOL)dropAllTable;
- (void)preloadCacheUser;
- (BOOL)insertNewRowInUserNameIDTable:(id)a0 lastLocalId:(unsigned int)a1;
- (BOOL)batchInsertMsgToFTSTable:(id)a0 forbidLog:(BOOL)a1;
- (BOOL)updateUserNameInvalid:(id)a0;
- (BOOL)migrateToFTS5WithLimit:(int)a0 isFinish:(BOOL *)a1 cancelBlock:(id /* block */)a2;
- (id)queryText:(id)a0 limitUsrname:(id)a1 cancelBlock:(id /* block */)a2;
- (unsigned int)getNextCursorMesId:(id)a0;
- (unsigned int)getPreCursorMesId:(id)a0;
- (BOOL)hasInvalidRowsInChatTable;
- (BOOL)deleteInvalidRowsInChatTable:(unsigned int)a0 outUsr:(id *)a1 outRemains:(unsigned int *)a2 cancelBlock:(id /* block */)a3;
- (BOOL)updateToDeleteLocalIds:(id)a0 usr:(id)a1;
- (BOOL)deleteByRecordLimit:(unsigned int)a0 finish:(BOOL *)a1 operateCnt:(unsigned int *)a2 cancelBlock:(id /* block */)a3;
- (void)getAllSessions:(unsigned int *)a0 andAllIndexMsg:(unsigned int *)a1;
- (unsigned int)getIndexCountForUsr:(id)a0;
- (unsigned int)getIndexTableIdForSession:(id)a0 msgLocalId:(unsigned int)a1 content:(id *)a2;
- (void)getIndexProgressForSession:(id)a0 preCursor:(unsigned long long *)a1 nextCursor:(unsigned long long *)a2 fts5Migrated:(BOOL *)a3;
- (unsigned long long)calculateAllInvalidMsg;
- (void)addUserNameInvalidFail:(id)a0;
- (void)retrySetUserNameInvalid;
- (void).cxx_destruct;

@end
