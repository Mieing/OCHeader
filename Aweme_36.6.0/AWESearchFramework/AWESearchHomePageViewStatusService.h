@protocol CachalotRenderPipelineComponentViewModel;

@interface AWESearchHomePageViewStatusService : AWESearchHomePageBaseService

@property (weak, nonatomic) id<CachalotRenderPipelineComponentViewModel> target;

- (void)feedDidScroll:(id)a0;
- (void)searchHome_willPullRefresh;
- (void)searchHome_receiveDCFromAIStream:(id)a0;
- (void)searchHome_loadmoreResponse:(id)a0 rootModel:(id)a1;
- (void)searchHome_willSetViewStatus:(long long)a0;
- (void)searchHome_quitSearchWithReason:(long long)a0;
- (void)searchHome_backFromMultiTurns;
- (void)searchHome_rightPan;
- (void)searchHome_tipsViewClose;
- (void)searchHome_searchBarClose;
- (void)searchHome_requestTimeout;
- (void)checkTargetShow;
- (BOOL)enableSwitchRecommendWhenAskInDetail;
- (void)updateQuitSearchTarget:(id)a0;
- (BOOL)mostPartAppeared:(id)a0;
- (void).cxx_destruct;

@end
