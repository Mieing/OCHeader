@protocol AWERecordInspirationDataProviderProtocol;

@interface AWERecordInspirationInnerFeedDataController : AWEListDataController

@property (retain, nonatomic) id<AWERecordInspirationDataProviderProtocol> dataProvider;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)initFetchWithRefresh:(BOOL)a0 completion:(id /* block */)a1;
- (void)dealWithFetchedDataList:(id)a0 error:(id)a1 completion:(id /* block */)a2;
- (id)initWithDataProvider:(id)a0;
- (void).cxx_destruct;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
