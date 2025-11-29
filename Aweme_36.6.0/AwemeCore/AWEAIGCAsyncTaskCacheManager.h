@class NSString;

@interface AWEAIGCAsyncTaskCacheManager : NSObject <AWEAIGCAsyncTaskCacheManagerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)storeSucceedTaskId:(id)a0 withDraftId:(id)a1;
+ (id)queryDraftBySucceedTaskId:(id)a0;
+ (void)moveDeletedTaskToExpiredRecordIfNeeded:(id)a0;
+ (void)storeExpiredTaskId:(id)a0 withDraftId:(id)a1;
+ (void)storeTasks:(id)a0 taskIds:(id)a1;
+ (void)retrieveCacheWithInjectingMessenger:(id)a0 completion:(id /* block */)a1;
+ (void)removeExpiredTaskIdIfNeededWithDraftId:(id)a0;
+ (BOOL)isDraftExpiredWithDraftId:(id)a0;
+ (void)removeSucceedTaskIdToDraftIdMappingWithTaskId:(id)a0;
+ (void)removeSucceedTaskIdToDraftIdMappingWithDraftId:(id)a0;


@end
