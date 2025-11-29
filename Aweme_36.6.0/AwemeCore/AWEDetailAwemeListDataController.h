@class NSString, AWEDetailAwemeResponse, NSDictionary, NSNumber;

@interface AWEDetailAwemeListDataController : AWEListDataController {
    BOOL _loadmoreHasMore;
}

@property (retain, nonatomic) NSNumber *cursor;
@property (retain, nonatomic) NSNumber *musicBackupCursor;
@property (retain, nonatomic) Class responseModelClass;
@property (retain, nonatomic) AWEDetailAwemeResponse *fetchResponse;
@property (copy, nonatomic) NSString *requestURL;
@property (nonatomic) long long fetchCount;
@property (nonatomic) unsigned long long networkCacheStrategy;
@property (nonatomic) double networkCacheExpireTime;
@property (nonatomic) unsigned long long networkCombineStrategy;
@property (copy, nonatomic) NSDictionary *additionalRequestParams;
@property (nonatomic) BOOL useWrapperModel;
@property (nonatomic) BOOL forceHideDiggView;

- (void)setLoadmoreHasMore:(BOOL)a0;
- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (void)initFetchWithCompletion:(id /* block */)a0;
- (void)loadMoreWithFilteredCompletion:(id /* block */)a0;
- (void)p_fetchAwemeListWithCompletion:(id /* block */)a0;
- (id)p_validateRequestParams;
- (id)p_commonRequestParams;
- (void)loadMoreWithNetworkCacheCompletion:(id /* block */)a0;
- (void)updateFetchResponse:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)refreshWithCompletion:(id /* block */)a0;

@end
