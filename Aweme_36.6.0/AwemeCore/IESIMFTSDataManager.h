@class NSMapTable, IESIMFTSStoreManager, NSOperationQueue, NSObject;
@protocol OS_dispatch_semaphore;

@interface IESIMFTSDataManager : NSObject

@property (retain, nonatomic) IESIMFTSStoreManager *store;
@property (retain, nonatomic) NSOperationQueue *searchQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore;
@property (retain, nonatomic) NSMapTable *taskMap;
@property (nonatomic) BOOL enableDropDirtyData;

- (id)movePathIfNeeded:(id)a0;
- (void)executeCheckpointWithCompletion:(id /* block */)a0;
- (id)insertOrUpdateFTSDataList:(id)a0 completion:(id /* block */)a1;
- (id)queryLatestFTSDataUpdateTimeOfType:(long long)a0 extTypes:(id)a1 completion:(id /* block */)a2;
- (id)deleteFTSDatasWithBusids:(id)a0 types:(id)a1 contentTypes:(id)a2 completion:(id /* block */)a3;
- (id)deleteFTSDatasWithBusids:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (id)deleteFTSDataWithType:(long long)a0 completion:(id /* block */)a1;
- (id)deleteFTSDatasWithGroupids:(id)a0 type:(long long)a1 completion:(id /* block */)a2;
- (long long)latestFTSDataUpdateTimeOfType:(long long)a0 extTypes:(id)a1;
- (id)p_pathOfCurrentUser:(id)a0;
- (id)p_ftsPathOfCurrentUser:(id)a0;
- (id)p_newDocumentFTSPathOfCurrentUser:(id)a0;
- (id)p_oldDirectoryPath;
- (id)p_newDirectoryPath;
- (id)batchInsertOrUpdateFTSDataList:(id)a0 completion:(id /* block */)a1;
- (id)p_addOperationWithPriority:(long long)a0 block:(id /* block */)a1;
- (id)p_addOperationWithOperationBlock:(id /* block */)a0;
- (id)p_generateTaskId;
- (id)insertOrUpdateFTSData:(id)a0 completion:(id /* block */)a1;
- (id)deleteFTSData:(id)a0 completion:(id /* block */)a1;
- (id)queryWithKeywords:(id)a0 completion:(id /* block */)a1;
- (id)queryWithKeywords:(id)a0 types:(id)a1 inConversation:(id)a2 completion:(id /* block */)a3;
- (id)queryWithKeywords:(id)a0 types:(id)a1 completion:(id /* block */)a2;
- (id)queryWithKeywords:(id)a0 types:(id)a1 inConversation:(id)a2 contentTypes:(id)a3 completion:(id /* block */)a4;
- (BOOL)cancelTask:(id)a0;
- (void).cxx_destruct;
- (void)clear;
- (id)initWithConfig:(id)a0;

@end
