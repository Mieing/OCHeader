@class NSString, AWELeftSideBarBasePresenter;
@protocol AWELeftSideBarBussinessDelegate;

@interface AWELeftSideBarProxy : NSObject <AWELeftSideBarSectionProxyAbilityProtocol, AWELeftSideBarItemAbilityPrivateProtocol, AWELeftSideBarItemAbility>

@property (weak, nonatomic) AWELeftSideBarBasePresenter *presenter;
@property (weak, nonatomic) id<AWELeftSideBarBussinessDelegate> bussinessDelegate;
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
- (id)getleftSideBarTrackContext;
- (void)forceRemoveSelfWithAnimation:(BOOL)a0;
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
- (void)addSecondPageViewController:(id)a0 animated:(BOOL)a1;
- (void)removeSecondPageViewController:(id)a0 animated:(BOOL)a1;
- (id)initWithPresenter:(id)a0 leftSideBarBussinessDelegate:(id)a1;
- (void)leftSideBarCellClickWithNeedLogin:(BOOL)a0 schema:(id)a1 extraLoginTrackParams:(id)a2 jumpSchemaEndLogin:(BOOL)a3 finalBlock:(id /* block */)a4;
- (void)leftSideBarCellClickWithNeedLogin:(BOOL)a0 schema:(id)a1 extraLoginTrackParams:(id)a2 customTransitionType:(id)a3 finalBlock:(id /* block */)a4;
- (void).cxx_destruct;

@end
