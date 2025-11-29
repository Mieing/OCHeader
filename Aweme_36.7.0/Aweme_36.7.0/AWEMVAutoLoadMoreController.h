@class NSString;

@interface AWEMVAutoLoadMoreController : AWEDCFeedBaseController <AWEMVAutoLoadMoreControllerProtocol>

@property (nonatomic) long long loadMoreRetryCount;
@property (nonatomic) BOOL isShowingCache;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onLoadPlaceholderDataEndWithResult:(unsigned long long)a0 placeholderData:(id)a1;
- (void)onLoadMoreListDataStartWithReason:(unsigned long long)a0;
- (void)bindEvents;
- (void)autoLoadMoreListDataWithType:(unsigned long long)a0;
- (id)getMVPageContext;
- (void)containerViewDidLoad;

@end
