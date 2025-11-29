@class NSNumber, NSString;

@interface AWERNInfinteVideosListDataController : AWEListDataController

@property (retain, nonatomic) NSNumber *totalCount;
@property (copy, nonatomic) NSString *baseUrl;
@property (nonatomic) long long size;
@property (nonatomic) long long initArrayCount;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *reactId;
@property (nonatomic) long long currentPage;
@property (nonatomic) long long previousPage;
@property (nonatomic) unsigned long long previousCount;
@property (nonatomic) BOOL fetchAwemeFromRN;

- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadPreviousWithCompletion:(id /* block */)a0;
- (void)requestNextPageWithCompletion:(id /* block */)a0;
- (void)fetchAwemeListWithParameters:(id)a0 completion:(id /* block */)a1;
- (long long)listDataCount;
- (void)updateAwemeInfoWithParams:(id)a0;
- (void)p_fetchAwemeListWithPage:(long long)a0 size:(long long)a1 completion:(id /* block */)a2;
- (void)requestPreviousPageWithCompletion:(id /* block */)a0;
- (void)fetchAwemeListWithPage:(long long)a0 size:(long long)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)initWithParams:(id)a0;
- (void)reset;
- (void)refreshWithCompletion:(id /* block */)a0;
- (void)resetDataSource;

@end
