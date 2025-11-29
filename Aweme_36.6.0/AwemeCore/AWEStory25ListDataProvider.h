@class NSString, NSMutableDictionary;

@interface AWEStory25ListDataProvider : AWESocialRelationDataProvider <AWEUserMessage, AWEStory25DraftMessage, AWEStory25ListDataProvider> {
    struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } _rwLock;
}

@property (retain, nonatomic) NSMutableDictionary *memoryCache;
@property (nonatomic) BOOL cacheHasLoaded;
@property (nonatomic) BOOL isDataProcessing;
@property (nonatomic) BOOL isDuringPublish;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)interceptor_write:(id)a0 completion:(id /* block */)a1;
- (id)interceptor_readFromMemory:(id)a0;
- (void)didFinishLogoutWithUid:(id)a0;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didChangePrivateRelationWithUser:(id)a0 relationType:(long long)a1 relationValue:(long long)a2;
- (id)readFromMemory:(id)a0;
- (void)updateStoryFromSkyLight:(id)a0;
- (void)updateStoryWithUser:(id)a0 action:(id)a1;
- (void)updateStoryReadStatus:(id)a0 authorID:(id)a1 shouldSyncUC:(BOOL)a2;
- (void)removeStoryWithItemID:(id)a0 authorID:(id)a1;
- (void)replaceStoryItemIDWithMap:(id)a0 authorID:(id)a1;
- (id)readAllMemoryData;
- (void)localDataCenterDidUpdate:(id)a0;
- (void)syncReadFromStorage;
- (void)story25PublishTask:(id)a0 didBeginPublishWithInfo:(id)a1;
- (void)story25PublishTask:(id)a0 didEndPublishWithError:(id)a1;
- (void)tableDataIsPrepared:(id)a0;
- (void)updateWhenDeleteStory:(id)a0;
- (void)overwriteMemoryWithModels:(id)a0 fromSync:(BOOL)a1 version:(double)a2;
- (void)updateMemoryWithModels:(id)a0 deleteUids:(id)a1 fromSync:(BOOL)a2 version:(double)a3;
- (id)readMemoryDataWithUid:(id)a0;
- (void)updateMemoryWithUid:(id)a0 updateModels:(id)a1 version:(double)a2;
- (BOOL)enableLocalModifyAction:(id)a0;
- (id)sortedStoryDictionaryWithUpdateModels:(id)a0 version:(double)a1;
- (void)updateMemoryDataWithUid:(id)a0 model:(id)a1;
- (void)p_notifyChangeWithAuthorID:(id)a0 changeModel:(id)a1 changeType:(long long)a2;
- (id)readMemoryDataWithUids:(id)a0 readScene:(id)a1;
- (id)sortedStoryListArray:(id)a0;
- (id)sortStoryList:(id)a0 readScene:(id)a1;
- (BOOL)story25TableIsPrepared;
- (void)overwriteMemoryData:(id)a0;
- (double)validTimeWithScene:(id)a0 isUnread:(BOOL)a1;
- (void)removeAllMemoryData;
- (void)removeMemoryDataWithUid:(id)a0 fromSync:(BOOL)a1;
- (void)deleteDataWithUserID:(id)a0 action:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)identifier;
- (void)dealloc;
- (void)write:(id)a0 completion:(id /* block */)a1;

@end
