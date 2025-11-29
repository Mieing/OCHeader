@class AWEHPSideBarMoreButtonDataModel, AWEHPProfileSideBarControllerManager, NSString, UIView;
@protocol AWEHPSideBarStencilViewProtocol, AWEHPProfileSecondLevelPageAbility;

@interface AWEHPProfileSideBarMoreButtonPresenter : AWELeftSideBarBasePresenter <AWEHPProfileSecondLevelPageItemUndertakeHostProtocol, AWEHPProfileSecondLevelPagePresenterProtocol>

@property (retain, nonatomic) UIView<AWEHPSideBarStencilViewProtocol> *containerView;
@property (retain, nonatomic) AWEHPSideBarMoreButtonDataModel *dataModel;
@property (retain, nonatomic) AWEHPProfileSideBarControllerManager *controllerManager;
@property (retain, nonatomic) id<AWEHPProfileSecondLevelPageAbility> pageAbility;
@property (nonatomic) BOOL isSecondPage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContext:(id)a0 extraData:(id)a1;
- (void)leftSideBarPresenterOnReloadWithContext:(id)a0 extraData:(id)a1;
- (id)onCreateCellView;
- (double)cellViewHeight;
- (void)leftSideBarThemeDidChange:(long long)a0;
- (void)leftSideBarCellClick;
- (void)onLeftSideBarWillOpen;
- (void)onLeftSideBarOpen;
- (void)onLeftSideBarClose;
- (void)leftSideBarViewDidAppear;
- (void)leftSideBarViewDidDisAppear;
- (BOOL)needLoadPresenter;
- (void)leftSideBarViewWillAppear;
- (void)leftSideBarViewWillDisAppear;
- (void)leftSideBarEntranceViewOnShowWithAmbienceIdentification:(id)a0;
- (void)leftSideBarEntranceViewOnHideWithAmbienceIdentification:(id)a0;
- (id)p_sideBarListCellDataModel:(id)a0;
- (void)setSecondLevelPageAbility:(id)a0;
- (void)p_loadControllerManager:(BOOL)a0;
- (void)p_hideBadgeUIWhileClick;
- (id)p_redDotVersionKeyWithBusinessId:(id)a0;
- (void)p_updateBadgeUIWithCompletion:(id /* block */)a0;
- (void)sidebarPresenter:(id)a0 showBadgeWithModel:(id)a1 withVersion:(id)a2 withRevealHierarchy:(long long)a3 completion:(id /* block */)a4;
- (void)sidebarHideBadgeWithPresenter:(id)a0;
- (long long)sidebarRedDotStyleWithPresenter:(id)a0;
- (void).cxx_destruct;

@end
