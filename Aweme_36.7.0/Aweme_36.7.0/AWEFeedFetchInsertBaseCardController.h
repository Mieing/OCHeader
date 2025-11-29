@class NSString, AWEAwemeModel;
@protocol AWESpecialCardContextProtocol, AWEFeedFetchInsertCardManagerProtocol, AWESpecialCardDelegate;

@interface AWEFeedFetchInsertBaseCardController : AWEBaseController <AWEFeedControllerProtocol, AWESpecialCardControllerProtocol, AFDSpecialCardPanelTrackDelegate>

@property (retain, nonatomic) AWEAwemeModel *nextAvailableModel;
@property (nonatomic) long long currentFetchCount;
@property (nonatomic) BOOL needsFetchCardAfterDisplayingCard;
@property (nonatomic) BOOL hasConfiguredNextAvailableModel;
@property (weak, nonatomic) id<AWEFeedFetchInsertCardManagerProtocol> manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;

- (void)willRefresh;
- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)willInitialFetch;
- (void)cardWillDisplay:(id)a0 withAweme:(id)a1;
- (void)cardDidEndDisplaying:(id)a0 withAweme:(id)a1;
- (BOOL)canHandleLeftSlideGesture:(id)a0 model:(id)a1;
- (id)leftSlideViewController:(id)a0;
- (void)leftSlideViewControllerWillEnter:(id)a0;
- (void)leftSlideViewControllerDidEnter:(id)a0;
- (id)panelViewControllerForModel:(id)a0;
- (void)p_fetchCardIfNeeded;
- (void)p_insertCardToListIfNeeded:(id)a0;
- (void)trackClickCard:(id)a0 enterMethod:(id)a1;
- (void)trackDislikeCard:(id)a0 enterMethod:(id)a1;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
