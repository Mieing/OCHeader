@class NSString, AWEAwemeModel;
@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate;

@interface AWEFeedEcomShopMomentCardController : AWEBaseController <AWEFeedControllerProtocol, AWESpecialCardControllerProtocol>

@property (nonatomic) BOOL isTargetAB;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long currentListCount;
@property (nonatomic) double lastRequestTime;
@property (nonatomic) BOOL hasInserted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)requestDataWithCompletion:(id /* block */)a0;
- (void)checkTimeoutCompletion:(id /* block */)a0;
- (void)insertCardIfNeeded;
- (void)cardWillDisplay:(id)a0 withAweme:(id)a1;
- (void)cardDidEndDisplaying:(id)a0 withAweme:(id)a1;
- (void)cardDidAppear:(id)a0 withAweme:(id)a1;
- (void)cardDidDisappear:(id)a0 withAweme:(id)a1;
- (void)cardFrequencyControl:(id)a0 withAweme:(id)a1 isFromFeed:(BOOL)a2 type:(long long)a3;
- (void)container:(id)a0 containerViewDidLoadFailedWithURL:(id)a1 error:(id)a2 aweme:(id)a3;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
