@class AWEFeedEcomQueryCardTriggerPlayConfig, NSMutableDictionary, NSString, AWEAwemeModel, AWEFeedEcomQueryCardTriggerRefreshConfig;
@protocol AWESpecialCardContextProtocol, AWESpecialCardDelegate;

@interface AWEFeedEcomQueryCardController : AWEBaseController <AWEFeedControllerProtocol, AWESpecialCardControllerProtocol>

@property (retain, nonatomic) NSMutableDictionary *insertedModels;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (nonatomic) BOOL queryRan;
@property (nonatomic) long long feedRecommendRequestIndex;
@property (retain, nonatomic) AWEFeedEcomQueryCardTriggerPlayConfig *playConfig;
@property (retain, nonatomic) AWEFeedEcomQueryCardTriggerRefreshConfig *refreshConfig;
@property (retain, nonatomic) NSMutableDictionary *signParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<AWESpecialCardDelegate> cardDelegate;
@property (weak, nonatomic) id<AWESpecialCardContextProtocol> cardContext;

- (id)getSettings;
- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (void)videoPlayer:(id)a0 updatePlayTime:(double)a1 totalTime:(double)a2;
- (void)cardWillDisplay:(id)a0 withAweme:(id)a1;
- (void)cardDidEndDisplaying:(id)a0 withAweme:(id)a1;
- (void)cardDidAppear:(id)a0 withAweme:(id)a1;
- (void)cardDidDisappear:(id)a0 withAweme:(id)a1;
- (BOOL)shouldCancelInsertCard:(id)a0 withAweme:(id)a1 isFromFeed:(BOOL)a2 willInsertForRowAtIndexPath:(id)a3;
- (void)registerPitayaService;
- (void)triggerWithMethod:(id)a0 params:(id)a1;
- (BOOL)shouldBlockSpecialCardShowForVirtualWords:(id)a0;
- (id)inProgressByType:(long long)a0 progress:(long long)a1 params:(id)a2;
- (id)processServerData:(id)a0 businessInfo:(id)a1;
- (id)runPiyataTaskSync:(id)a0 params:(id)a1 extra:(id)a2;
- (void)requsetInsertCard:(id)a0 index:(long long)a1 extraParam:(id)a2;
- (void)deleteCard:(id)a0 transTypes:(id)a1;
- (id)runSearchQueryTask;
- (long long)getOffset;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)dealloc;

@end
