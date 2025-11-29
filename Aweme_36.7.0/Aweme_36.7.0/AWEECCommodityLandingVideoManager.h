@class NSString, NSNumber;

@interface AWEECCommodityLandingVideoManager : AWEListDataController {
    NSString *_keywordForSearch;
    NSNumber *_cursor;
    BOOL _isLoading;
    BOOL _hasMore;
}

- (BOOL)loadmoreHasMore;
- (void)loadMoreWithCompletion:(id /* block */)a0;
- (id)initWithKeyword:(id)a0;
- (void)requestVideoListWithCompletionHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end
