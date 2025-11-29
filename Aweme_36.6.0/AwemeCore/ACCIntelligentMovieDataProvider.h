@class WCTDatabase, NSObject;
@protocol OS_dispatch_queue;

@interface ACCIntelligentMovieDataProvider : NSObject

@property (retain, nonatomic) WCTDatabase *libraryDatabase;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue;

+ (id)createTableQueue;

- (void)prepareDatabase;
- (void)loadAllBIMResultsWithWithCompletion:(id /* block */)a0;
- (void)updateBIMResult:(id)a0 completion:(id /* block */)a1;
- (void)updateAssetResult:(id)a0 scanDate:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)cleanPrepareAssetsWithCompletion:(id /* block */)a0;
- (void)loadPrepareAssetsWithLimit:(long long)a0 pageIndex:(long long)a1 resultBlock:(id /* block */)a2;
- (void)loadBIMWithLocalIdentifiers:(id)a0 resultBlock:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
