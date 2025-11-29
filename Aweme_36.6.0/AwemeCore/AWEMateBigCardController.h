@class NSString, NSMutableDictionary;
@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate;

@interface AWEMateBigCardController : AWEBaseController <AWEFeedControllerProtocol, AWESpecialCardControllerProtocol, AFDSpecialCardPanelTrackDelegate>

@property (retain, nonatomic) NSMutableDictionary *requestPostsInfoDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;

+ (BOOL)enableWithFeedType:(long long)a0;
+ (id)businessID;

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (id)cardDuplicateManager;
- (void)cardDidAppear:(id)a0 withAweme:(id)a1;
- (BOOL)shouldCancelInsertCard:(id)a0 withAweme:(id)a1 isFromFeed:(BOOL)a2 willInsertForRowAtIndexPath:(id)a3;
- (void)cardDidInsert:(id)a0 withAweme:(id)a1 isFromFeed:(BOOL)a2 forRowAtIndexPath:(id)a3;
- (void)cardFrequencyControl:(id)a0 withAweme:(id)a1 isFromFeed:(BOOL)a2 type:(long long)a3;
- (BOOL)canHandleLeftSlideGesture:(id)a0 model:(id)a1;
- (id)leftSlideViewController:(id)a0;
- (id)panelViewControllerForModel:(id)a0;
- (void)trackClickCard:(id)a0 enterMethod:(id)a1;
- (void)trackDislikeCard:(id)a0 enterMethod:(id)a1;
- (BOOL)basicConditionsInvalid;
- (void)configCanShowSlideUpHint;
- (id)requestPostsInfo:(id)a0 isSuccess:(BOOL)a1 isEmptyData:(BOOL)a2;
- (void)trackRecommendCardRequestPosts:(id)a0;
- (void).cxx_destruct;
- (long long)feedType;
- (void)viewDidLoad;

@end
