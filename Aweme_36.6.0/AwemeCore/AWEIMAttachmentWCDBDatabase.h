@class NSString, IESWCDatabase, NSObject, AWEIMMessageAttachmentCleaner;
@protocol OS_dispatch_queue;

@interface AWEIMAttachmentWCDBDatabase : NSObject <AWEUserMessage>

@property (retain, nonatomic) AWEIMMessageAttachmentCleaner *messageAttachmentCleaner;
@property (nonatomic) BOOL isIniting;
@property (copy, nonatomic) NSString *dbFilePath;
@property (retain, nonatomic) IESWCDatabase *database;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *oprate_queue;
@property (nonatomic) BOOL isWCDBToTwo;
@property (nonatomic) BOOL enableTraceOpt;
@property (nonatomic) BOOL enableWCDBCrashOpt;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *callback_queue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)didFinishLoginWithUid:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)insertOrUpdateFile:(id)a0 complete:(id /* block */)a1;
- (BOOL)p_createTableWithError:(id *)a0;
- (BOOL)dbInitForWCDBTwo;
- (id)p_initDBWithPath:(id)a0;
- (void)deleteFileWithFileID:(id)a0 complete:(id /* block */)a1;
- (BOOL)deleteFileWithFileID:(id)a0;
- (void)queryFileWithFileID:(id)a0 complete:(id /* block */)a1;
- (id)queryFilesWithFilePath:(id)a0;
- (void)queryFilesWithFilePath:(id)a0 complete:(id /* block */)a1;
- (void)rebuildDatabaseIfNeedComplete:(id /* block */)a0;
- (void)setupDatabaseForWCDBTwo:(id)a0;
- (void)setupDatabaseForWCDBOne:(id)a0;
- (void)p_addAutomaticCleaner;
- (BOOL)p_DBisCorrupted:(id)a0;
- (void)asyncDispatch:(id /* block */)a0;
- (void)createAndSetupDatabaseIfNeeded;
- (void)syncDispatch:(id /* block */)a0;
- (void)p_checkAndFixModel:(id)a0;
- (id)p_zeroReferenceFilePathsInCandidates:(id)a0;
- (void)asyncCallBackDispatch:(id /* block */)a0;
- (void)removeAllDBFilesAndCleanDB;
- (id)queryFilesHasPathAndNilModTimeLimit:(long long)a0;
- (id)queryFilesHasPathAndModTimeBefore:(double)a0 limit:(long long)a1;
- (id)queryFilesWithPageSize:(long long)a0 offset:(long long)a1;
- (BOOL)insertOrUpdateFile:(id)a0;
- (void)deleteAllDataComplete:(id /* block */)a0;
- (BOOL)deleteFileWithFileIDs:(id)a0;
- (BOOL)deleteFilesWithMessageID:(id)a0 complete:(id /* block */)a1;
- (void)queryTotalFileLengthWithTypes:(id)a0 completion:(id /* block */)a1;
- (void)queryVideoImageFileSizeGroupByConWithCompletion:(id /* block */)a0;
- (void)queryFilePathsWithCids:(id)a0 fileTypes:(id)a1 clipOtherConFile:(BOOL)a2 completion:(id /* block */)a3;
- (void)deleteFilesWithCids:(id)a0 fileTypes:(id)a1 completion:(id /* block */)a2;
- (void)deleteRowsWithFilePaths:(id)a0 completion:(id /* block */)a1;
- (BOOL)deleteFilesWithConversationID:(id)a0 complete:(id /* block */)a1;
- (id)queryFileWithFileID:(id)a0;
- (id)queryOtherRefrencedFilepathFromModels:(id)a0;
- (void)batchDeleteFileWithFileIDArray:(id)a0 complete:(id /* block */)a1;
- (void)queryFilesWithPageSize:(long long)a0 offset:(long long)a1 complete:(id /* block */)a2;
- (void)batchDeleteFilesWithMessageID:(id)a0 complete:(id /* block */)a1;
- (void)batchDeleteFilesWithConversationID:(id)a0 complete:(id /* block */)a1;
- (void)queryFilesHasPathAndNilModTimeLimit:(long long)a0 complete:(id /* block */)a1;
- (void)queryFilesHasPathAndModTimeBefore:(double)a0 limit:(long long)a1 complete:(id /* block */)a2;
- (void)queryOtherRefrencedFilePathFromModels:(id)a0 complete:(id /* block */)a1;
- (void)deleteAllFilesComplete:(id /* block */)a0;
- (void)queryFileWithConversatinID:(id)a0 complete:(id /* block */)a1;
- (void)queryFileWithMessageID:(id)a0 complete:(id /* block */)a1;
- (void)queryNoDBRefrencedFilePathes:(id)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
