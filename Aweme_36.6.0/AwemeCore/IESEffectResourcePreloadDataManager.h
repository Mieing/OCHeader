@class NSMutableDictionary, NSMapTable, FMDatabaseQueue, NSString, NSObject;
@protocol OS_dispatch_queue;

@interface IESEffectResourcePreloadDataManager : NSObject

@property (retain, nonatomic) FMDatabaseQueue *dbQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) NSMutableDictionary *resourceMap;
@property (retain, nonatomic) NSMapTable *resourceNameMap;
@property (copy, nonatomic) NSString *resourceFolder;
@property (copy, nonatomic) NSString *dbPath;

- (void)createFolderIfNeedWithPath:(id)a0;
- (void)loadDataOrCreateDatabase;
- (void)loadPreloadResourceRecordList;
- (void)deletePreloadResourceWithResourceName:(id)a0 resourceURI:(id)a1;
- (id)makeRecordWithPreloadResource:(id)a0;
- (void)asyncRemovePreloadResourcesWithDeletedURIList:(id)a0;
- (void)deleteRecordForPreloadResourceWithBusinessKey:(id)a0 completion:(id /* block */)a1;
- (void)deleteRecordForPreloadResourceWithKey:(id)a0 businessKey:(id)a1 completion:(id /* block */)a2;
- (void)deleteAllExistPreloadResourceWithAfterCompletion:(id /* block */)a0;
- (id)validResourcePathWithRecord:(id)a0 resourceURI:(id)a1;
- (void)addOrUpdatePreloadResource:(id)a0 withBusinessKey:(id)a1 resourceSize:(unsigned long long)a2;
- (void)updatePreloadResourceRecordIfNeedWithKey:(id)a0 businessKey:(id)a1;
- (void)deletePreloadResourcesWithBusinessKeys:(id)a0;
- (void)deletePreloadResourceWithKey:(id)a0 businessKey:(id)a1;
- (void)deleteAllExistPreloadResource;
- (unsigned long long)totalPreloadResourceSize;
- (id)preloadResourcePathWithName:(id)a0 resourceURI:(id)a1;
- (id)preloadResourceRecordWithName:(id)a0;
- (id)getAllPreloadResourceRecord;
- (id)initWithPath:(id)a0;
- (void).cxx_destruct;

@end
