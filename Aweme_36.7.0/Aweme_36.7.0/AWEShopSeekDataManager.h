@class NSNumber, NSString;
@protocol AWEHttpTask;

@interface AWEShopSeekDataManager : AWEListDataController

@property (retain, nonatomic) NSNumber *cursor;
@property (copy, nonatomic) NSString *POIId;
@property (copy, nonatomic) NSString *secUserID;
@property (copy, nonatomic) NSString *userID;
@property (retain, nonatomic) id<AWEHttpTask> currentFilteringTask;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)removeWithItemID:(id)a0;
- (void)constructDataSourceWithResponseModel:(id)a0 error:(id)a1 isLoadMore:(BOOL)a2;
- (id)p_fetchIsLoadMore:(BOOL)a0 completion:(id /* block */)a1;
- (id)paramsIsLoadMore:(BOOL)a0;
- (id)initWithPOIId:(id)a0 secUserID:(id)a1 userID:(id)a2;
- (void)refreshPOIId:(id)a0 secUserID:(id)a1 userID:(id)a2;
- (void).cxx_destruct;
- (void)removeAll;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
