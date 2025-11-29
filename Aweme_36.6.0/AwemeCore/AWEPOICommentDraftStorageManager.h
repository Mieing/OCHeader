@class NSString, NSFileManager, AWEStorage, NSLock;
@protocol AWEPOICommentDraftCacheStrategy;

@interface AWEPOICommentDraftStorageManager : NSObject

@property (readonly, copy, nonatomic) NSString *defaultDirectory;
@property (readonly, copy, nonatomic) NSString *cachesDirectory;
@property (readonly, copy, nonatomic) NSString *defaultDirectoryName;
@property (readonly, copy, nonatomic) NSString *queueKey;
@property (readonly, copy, nonatomic) NSString *cacheKey;
@property (readonly, nonatomic) NSFileManager *fileManager;
@property (readonly, nonatomic) AWEStorage *sharedStorage;
@property (retain, nonatomic) NSLock *storageLock;
@property (weak, nonatomic) id<AWEPOICommentDraftCacheStrategy> cacheStrategy;

+ (id)sharedManager;

- (void)deleteDraftTempIfNecessary;
- (void)deleteAllDraft;
- (id)directoryWithCommentID:(id)a0;
- (BOOL)createOrReplaceDirectoryAtPath:(id)a0;
- (id)musicKeyWithCommentID:(id)a0;
- (void)restoreDraftCacheWithCommentID:(id)a0;
- (void)deleteDraftCacheWithCommentID:(id)a0;
- (void)trackDraftQueueActionWithStatus:(BOOL)a0 type:(id)a1 queueLength:(long long)a2;
- (void)deleteCommentDraftByCommentID:(id)a0 complete:(id /* block */)a1;
- (void)trackDraftCacheDeleteActionWithStatus:(BOOL)a0 commentCount:(long long)a1 cacheStrategy:(long long)a2;
- (void)saveCommentDraft:(id)a0 musicName:(id)a1 musicID:(id)a2 toCommentID:(id)a3 complete:(id /* block */)a4;
- (void)saveCommentDraftMaterial:(id)a0 musicName:(id)a1 musicID:(id)a2 toCommentID:(id)a3 complete:(id /* block */)a4;
- (void)getCommentDraftImagesByCommentID:(id)a0 complete:(id /* block */)a1;
- (void)getCommentDraftMaterialByCommentID:(id)a0 complete:(id /* block */)a1;
- (void)getCommentDraftQueueString:(id /* block */)a0;
- (void)saveCommentDraftQueueWithQueueString:(id)a0 complete:(id /* block */)a1;
- (void)deleteAllDraftWithExcept:(id)a0;
- (void)deleteDraftCacheIfNecessary;
- (id)createTempFilePath:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)tempDirectory;

@end
