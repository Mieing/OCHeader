@class NSString, MMFinderLiveTaskId, FinderBizUserInfo, NSMutableArray, WCFinderLiveTransferCGI;
@protocol MMLiveBizArticleListViewModelDelegate;

@interface MMLiveBizArticleListViewModel : NSObject {
    WCFinderLiveTransferCGI *_requestingTransferCGI;
    BOOL _isRequestingNextPage;
    BOOL _hasNextPage;
    unsigned int _nextSeq;
    NSString *_lastContext;
}

@property (weak, nonatomic) id<MMLiveBizArticleListViewModelDelegate> delegate;
@property (readonly, nonatomic) MMFinderLiveTaskId *liveTaskId;
@property (readonly, nonatomic) FinderBizUserInfo *bizUserInfo;
@property (readonly, nonatomic) long long requestType;
@property (readonly, nonatomic) NSMutableArray *articleList;
@property (readonly, nonatomic) long long articleLoadStatus;
@property (copy, nonatomic) NSString *searchQuery;

- (id)initWithLiveTaskId:(id)a0 bizUserInfo:(id)a1 requestType:(long long)a2;
- (void)_resetRequestContext;
- (void)requestFirstPage;
- (void)requestNextPageIfNeeded;
- (void)_requestNextPage;
- (unsigned int)_getCGINumber;
- (id)_createRequestObject;
- (Class)_getResponseObjectClass;
- (void)_handleResponseObject:(id)a0;
- (void)_appendArticles:(id)a0;
- (void)_articlesDidUpdate;
- (void)_loadStatusDidUpdate;
- (void)loadTestArticlesIfNeeded;
- (void).cxx_destruct;

@end
