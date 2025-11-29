@class NSString, NSLock;

@interface TTDownloadSqliteStorage : NSObject <TTDownloadStorageProtocol> {
    struct sqlite3 { } *sqlite;
    NSLock *sqliteLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)covertEscapeChar:(id)a0;

- (BOOL)insertOrUpdateClearCacheRule:(id)a0 error:(id *)a1;
- (BOOL)deleteClearCacheRule:(id)a0 error:(id *)a1;
- (BOOL)updateParametersTable:(id)a0 error:(id *)a1;
- (BOOL)deleteSubSliceInfo:(id)a0 error:(id *)a1;
- (BOOL)updateExtendConfigSync:(id)a0 error:(id *)a1;
- (BOOL)insertOrUpdateSubSliceInfo:(id)a0 error:(id *)a1;
- (void)createTable;
- (BOOL)queryDownloadTaskConfigWithUrlSync:(id)a0 downloadTaskResultBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)queryAllDownloadTaskConfigSync:(id /* block */)a0 isTriggerClean:(BOOL *)a1 error:(id *)a2;
- (BOOL)queryAllDownloadTrackModelSync:(id /* block */)a0 error:(id *)a1;
- (BOOL)insertDownloadTrackModelSync:(id)a0 error:(id *)a1;
- (BOOL)insertDownloadTaskConfigSync:(id)a0 error:(id *)a1;
- (BOOL)deleteDownloadTaskConfigSync:(id)a0 error:(id *)a1;
- (BOOL)deleteDownloadTrackModelWithUrlMd5Sync:(id)a0 error:(id *)a1;
- (BOOL)updateDownloadTaskConfigSync:(id)a0 error:(id *)a1;
- (BOOL)queryDownloadTrackModelWithUrlMd5Sync:(id)a0 downloadTrackResultBlock:(id /* block */)a1 error:(id *)a2;
- (BOOL)updateSliceConfig:(id)a0 sliceConfig:(id)a1 error:(id *)a2;
- (id)getAllClearCacheRule:(id *)a0;
- (void)openDataBase;
- (BOOL)executeSQL:(id)a0 error:(id *)a1 isDisableLock:(BOOL)a2;
- (BOOL)inTransaction:(id /* block */)a0 error:(id *)a1 isDisableLock:(BOOL)a2;
- (id)makeErrorInfo:(id)a0 result:(int)a1;
- (id)getStringColumn:(struct sqlite3_stmt { } *)a0 index:(int)a1;
- (id)queryDownloadTaskConfigImpl:(id)a0 queryDSTC:(id)a1 querySubSliceInfo:(id)a2 parameters:(id)a3 querySingleDTC:(BOOL)a4 isTriggerClean:(BOOL *)a5 error:(id *)a6;
- (unsigned int)getCacheCapacityMax;
- (unsigned int)getCacheClearOnceCount;
- (BOOL)deleteDownloadTaskConfigSyncOnSingleThread:(id)a0 error:(id *)a1;
- (int)queryItemCount:(id)a0;
- (void)clearInvalidCache:(id)a0 taskConfigDic:(id)a1 isTriggerClean:(BOOL *)a2;
- (BOOL)updateParametersTableExtendColumnSync:(id)a0 columnName:(id)a1 error:(id *)a2;
- (BOOL)updateDownloadSliceTaskConfig:(id)a0 downloadTaskConfig:(id)a1 error:(id *)a2;
- (id)queryDownloadTrackModelImpl:(id)a0 error:(id *)a1;
- (BOOL)updateDownloadTrackModelSync:(id)a0 error:(id *)a1;
- (BOOL)deleteDownloadTrackModelSync:(id)a0 error:(id *)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
