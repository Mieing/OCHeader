@interface AWEFeedEcommerceGoodsCardController : AWEBaseController

- (void)initialFetchCompletion:(id)a0 error:(id)a1;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)refreshCompletion:(id)a0 error:(id)a1 needAnimation:(BOOL)a2;
- (id)getCurrentDate;
- (void)onInsertGoodCardNotification:(id)a0;
- (void)onFeedGoodsCardShowNotification:(id)a0;
- (BOOL)checkCanInsertGoodsCard;
- (void)insertFeedGoodsCardWithModel:(id)a0;
- (void)trackCardRequestParams:(id)a0;
- (id)getRequestCommonParamsWithList:(id)a0;
- (void)requestAndInsertCardWithParams:(id)a0;
- (void)savePitayaNoneEffectiveInfoDate;
- (void)runPitayaTaskToGetParamsWithAwemeList:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkIfHasInserted;
- (BOOL)hasExceeded24Hours:(double)a0;
- (void)insertFeedGoodsCardAwemeModelWithList:(id)a0;
- (void)viewDidLoad;

@end
