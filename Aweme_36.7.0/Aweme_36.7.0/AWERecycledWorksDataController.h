@class NSString, NSMutableArray;

@interface AWERecycledWorksDataController : AWEListDataController

@property (retain, nonatomic) NSString *nextCursor;
@property (nonatomic) long long totalCount;
@property (nonatomic) long long deleteModelsCount;
@property (nonatomic) BOOL innerDataSourceChanged;
@property (nonatomic) BOOL outerDataSourceChanged;
@property (retain, nonatomic) NSMutableArray *recoveredModels;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)fetchAwemeListWithCompletion:(id /* block */)a0;
- (id)filterDuplicatedDatasourceWithArray:(id)a0;
- (void)trackViewEventStatus:(long long)a0 error:(id)a1 duration:(long long)a2;
- (void)trackActionEventStatus:(long long)a0 error:(id)a1 actionScene:(id)a2 duration:(long long)a3 awemeIDs:(id)a4 action:(long long)a5;
- (void)removeAwemeWithIDs:(id)a0 failedAwemeIDs:(id)a1;
- (void)updateTotalCountWithAwemeIDs:(id)a0 failedAwemeIDs:(id)a1;
- (void)deleteRecycledWorksWithAwemeIDs:(id)a0 needDelete:(BOOL)a1 actionScene:(id)a2 completion:(id /* block */)a3;
- (void)recoverRecycledWorksWithAwemeIDs:(id)a0 needDelete:(BOOL)a1 actionScene:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (long long)count;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
