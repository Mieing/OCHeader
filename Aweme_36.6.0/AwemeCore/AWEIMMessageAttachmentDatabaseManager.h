@class HMDThreadSafeArray, NSString, YYMemoryCache;

@interface AWEIMMessageAttachmentDatabaseManager : NSObject <IESIMChatDataManagerDelegate>

@property (retain, nonatomic) YYMemoryCache *memoryCache;
@property (retain, nonatomic) HMDThreadSafeArray *deleteFailedFileIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)deleteErrorStorageKey;
+ (id)sharedInstance;

- (void)iesim_onConversationDataSourceConversationsDeleted:(id)a0;
- (void)insertOrUpdateFile:(id)a0 complete:(id /* block */)a1;
- (BOOL)updateFile:(id)a0 optionalTask:(id /* block */)a1;
- (void)buildDatabaseIfNeed;
- (void)deleteFileWithFileID:(id)a0 complete:(id /* block */)a1;
- (BOOL)insertFile:(id)a0 optionalTask:(id /* block */)a1;
- (BOOL)deleteFileWithFileID:(id)a0;
- (void)queryFileWithFileID:(id)a0 complete:(id /* block */)a1;
- (id)queryFilesWithFilePath:(id)a0;
- (void)queryFilesWithFilePath:(id)a0 complete:(id /* block */)a1;
- (id)queryFilesHasPathAndNilModTimeLimit:(long long)a0;
- (id)queryFilesHasPathAndModTimeBefore:(double)a0 limit:(long long)a1;
- (id)queryFilesWithPageSize:(long long)a0 offset:(long long)a1;
- (BOOL)deleteFileWithFileIDs:(id)a0;
- (void)queryTotalFileLengthWithTypes:(id)a0 completion:(id /* block */)a1;
- (void)queryVideoImageFileSizeGroupByConWithCompletion:(id /* block */)a0;
- (void)deleteRowsWithFilePaths:(id)a0 completion:(id /* block */)a1;
- (id)queryFileWithFileID:(id)a0;
- (void)batchDeleteFileWithFileIDArray:(id)a0 complete:(id /* block */)a1;
- (void)queryFilesWithPageSize:(long long)a0 offset:(long long)a1 complete:(id /* block */)a2;
- (void)batchDeleteFilesWithMessageID:(id)a0 complete:(id /* block */)a1;
- (void)batchDeleteFilesWithConversationID:(id)a0 complete:(id /* block */)a1;
- (void)queryFilesHasPathAndNilModTimeLimit:(long long)a0 complete:(id /* block */)a1;
- (void)queryFilesHasPathAndModTimeBefore:(double)a0 limit:(long long)a1 complete:(id /* block */)a2;
- (void)queryFileWithConversatinID:(id)a0 complete:(id /* block */)a1;
- (void)queryFileWithMessageID:(id)a0 complete:(id /* block */)a1;
- (void)queryNoDBRefrencedFilePathes:(id)a0 complete:(id /* block */)a1;
- (void)deleteAllFilesWithOptionalTask:(id /* block */)a0;
- (id)queryUnusedFilepathFromModels:(id)a0;
- (BOOL)deleteFilesWithMessageID:(id)a0 optionalTask:(id /* block */)a1;
- (BOOL)deleteFilesWithConversationID:(id)a0 optionalTask:(id /* block */)a1;
- (void)queryFilePathsWithCids:(id)a0 fileTypes:(id)a1 completion:(id /* block */)a2;
- (void)queryUnusedFilePathFromModels:(id)a0 complete:(id /* block */)a1;
- (void)deleteAllAttachmentsWithMessageID:(id)a0 complete:(id /* block */)a1;
- (void)deleteAllAttachmentsWithConversationID:(id)a0 complete:(id /* block */)a1;
- (void).cxx_destruct;

@end
