@class NSString, NSDictionary, NSError, NSMutableArray;

@interface AFDSchoolStoryBaseDataController : AWEListDataController <AFDSchoolStoryContainerDataSource>

@property (nonatomic) BOOL feedListHasMoreData;
@property (nonatomic) unsigned long long feedListCursor;
@property (copy, nonatomic) NSString *schoolID;
@property (retain, nonatomic) NSDictionary *params;
@property (nonatomic) BOOL isRequestingBasicInfoTask;
@property (nonatomic) BOOL isRequestingFeedListTask;
@property (retain, nonatomic) NSError *commonError;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (id /* block */)isEqualBlock;
- (id)listDataController;
- (id)initWithSchoolID:(id)a0 params:(id)a1;
- (void)updateSchoolID:(id)a0;
- (void)fetchSchoolStoryBasicInfoWithCompletion:(id /* block */)a0;
- (void)fetchSchoolStoryFeedListWithType:(unsigned long long)a0 fetchType:(unsigned long long)a1 completion:(id /* block */)a2;
- (void)p_trackRequestDurationWithType:(long long)a0 key:(id)a1 error:(id)a2 extraDic:(id)a3;
- (void)forceRefreshSchoolStoryWithSchoolID:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
