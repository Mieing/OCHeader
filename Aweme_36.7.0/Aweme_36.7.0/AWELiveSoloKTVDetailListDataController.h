@class NSDictionary, AWELiveSoloKTVDetailApi;

@interface AWELiveSoloKTVDetailListDataController : AWEListDataController {
    BOOL _loadmoreHasMore;
}

@property (retain, nonatomic) AWELiveSoloKTVDetailApi *api;
@property (nonatomic) long long fetchTimes;
@property (nonatomic) long long fetchCount;
@property (copy, nonatomic) NSDictionary *additionalRequestParams;

- (void)setLoadmoreHasMore:(BOOL)a0;
- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadMoreWithFilteredCompletion:(id /* block */)a0;
- (id)commonRequestParams;
- (void)fetchAwemeListWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
