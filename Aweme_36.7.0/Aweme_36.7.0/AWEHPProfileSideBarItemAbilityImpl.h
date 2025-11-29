@class NSString, AWEHPProfileSideBarManager, AWELeftSideBarBasePresenter;

@interface AWEHPProfileSideBarItemAbilityImpl : NSObject <AWELeftSideBarItemAbility>

@property (weak, nonatomic) AWELeftSideBarBasePresenter *presenter;
@property (weak, nonatomic) AWEHPProfileSideBarManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)redDotDidShowWithModel:(id)a0;
- (id)createLeftSideBarListCellViewWithModuleType:(id)a0 cellModel:(id)a1;
- (void)subtitleDidShowWithModel:(id)a0;
- (void)leftSideBarCellClickWithNeedLogin:(BOOL)a0 schema:(id)a1;
- (void)dynamicReloadModule;
- (void)dynamicInsertModule;
- (void)subEntranceClickWithModel:(id)a0;
- (id)initWithPresenter:(id)a0 withManager:(id)a1;
- (id)getleftSideBarTrackContext;
- (void)forceRemoveSelfWithAnimation:(BOOL)a0;
- (void)p_cellClickWithNeedLogin:(BOOL)a0 schema:(id)a1 extraLoginTrackParams:(id)a2 jumpSchemaEndLogin:(BOOL)a3 finalBlock:(id /* block */)a4;
- (void)p_cellClickWithSchema:(id)a0 finalBlock:(id /* block */)a1;
- (void)showLeftSideBarPopView:(id)a0 completion:(id /* block */)a1 clickBlock:(id /* block */)a2 dismissBlock:(id /* block */)a3;
- (void)leftSideBarCellClickWithNeedLogin:(BOOL)a0 schema:(id)a1 jumpSchemaEndLogin:(BOOL)a2;
- (void)leftSideBarCellClickWithNeedLogin:(BOOL)a0 schema:(id)a1 extraLoginTrackParams:(id)a2 finalBlock:(id /* block */)a3;
- (id)createLeftSideBarTopTitleCellViewWithModuleType:(id)a0;
- (void)forceRequestDynamicData;
- (id)getLeftSideBarTrackParamsForBusiness:(id)a0;
- (long long)leftSideBarCellViewPositionAtModule;
- (void)subEntranceShowWithModel:(id)a0;
- (void)showLeftSideBarSubEntranceBadge;
- (void)hideLeftSideBarSubEntranceBadge;
- (void)leftSideBarCellClickWithNeedLogin:(BOOL)a0 schema:(id)a1 extraLoginTrackParams:(id)a2 customTransitionType:(id)a3 finalBlock:(id /* block */)a4;
- (void).cxx_destruct;

@end
