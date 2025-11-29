@class NSString, AWELeftSideBarManager;

@interface AWELeftSideBarEntranceAbilityManager : NSObject <AWELeftSideBarMessageReachBussinessDelegate>

@property (weak, nonatomic) AWELeftSideBarManager *leftSideBarManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)p_canReuseComponentForShowTrackWithCurrentTask:(id)a0 newTask:(id)a1;
- (id)initWithLeftSideBarManager:(id)a0;
- (BOOL)checkBussinessManagerInvalid:(id)a0;
- (BOOL)shouldConsumeDotBadgeWithBusinessID:(id)a0;
- (void)p_showLeftSideBarBusinessEntranceBadgeWithPresenter:(id)a0 withModel:(id)a1 showCallBack:(id /* block */)a2 hideCallBack:(id /* block */)a3 downgradeCallBack:(id /* block */)a4;
- (void)hideLeftSideBarBusinessEntranceBadgeWithPresenter:(id)a0 withHideType:(long long)a1 withIsNumerical:(BOOL)a2 withCompletion:(id /* block */)a3;
- (void)p_leftSideBarBusinessEntranceTryResumeBadgeAndCheckResult:(unsigned long long)a0 withBusinessId:(id)a1 componentID:(id)a2 badgeCallContext:(id)a3;
- (BOOL)p_canReUseComponentWithCurTask:(id)a0 newTask:(id)a1;
- (void)showLeftSideBarBusinessEntranceBadgeWithPresenter:(id)a0 withModel:(id)a1 showCallBack:(id /* block */)a2 hideCallBack:(id /* block */)a3 downgradeCallBack:(id /* block */)a4;
- (void)hideLeftSideBarBusinessEntranceBadgeWithPresenter:(id)a0 withHideType:(long long)a1 withCompletion:(id /* block */)a2;
- (void)consumeLeftSideBarEntranceViewAllBusinessInfo;
- (void)consumeBadgeWithIdentification:(id)a0;
- (void)clearLeftSideBarEntranceViewAllBusinessInfo;
- (void)reloadLeftSideBarEntranceViewAllBusinessInfo;
- (void)clearLeftSideBarEntranceViewAllRedDot;
- (void)clearDotBadgeWithIdentification:(id)a0;
- (void)forceRemoveSelf:(id)a0;
- (void)updateLeftSideBarEntranceBadgeIfNeed;
- (void)hideLeftSideBarBusinessEntranceBadgeWithPresenter:(id)a0 withIsNumerical:(BOOL)a1 withCompletion:(id /* block */)a2;
- (void).cxx_destruct;

@end
