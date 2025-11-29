@class NSString, AWEHPProfileSideBarManager, AWELeftSideBarBasePresenter;

@interface AWEHPProfileSideBarEntranceViewAbilityImpl : NSObject <AWELeftSideBarEntranceViewAbility>

@property (weak, nonatomic) AWELeftSideBarBasePresenter *presenter;
@property (weak, nonatomic) AWEHPProfileSideBarManager *manager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)closeLeftSideBar;
- (long long)sideBarStatus;
- (id)initWithPresenter:(id)a0 withManager:(id)a1;
- (void)showCaptionViewWithParameterModel:(id)a0 completion:(id /* block */)a1 clickBlock:(id /* block */)a2 dismissBlock:(id /* block */)a3;
- (void)hideEntranceCaptionBubbleViewWithComponentID:(id)a0 completion:(id /* block */)a1;
- (void)addLeftSideBarEntranceView:(id)a0 completion:(id /* block */)a1;
- (void)removeLeftSideBarBussinessEntranceView;
- (BOOL)leftSideBarBussinessEntranceViewIsShow;
- (void)showLeftSideBarEntrancePopView:(id)a0 completion:(id /* block */)a1 clickBlock:(id /* block */)a2 dismissBlock:(id /* block */)a3;
- (void)showLeftSideBarBussinessEntranceRedDot;
- (void)hideLeftSideBarBussinessEntranceRedDot;
- (void)showLeftSideBarBussinessEntranceRedDotWithCount:(long long)a0;
- (void)hideLeftSideBarBussinessEntranceCountRedDot;
- (BOOL)openLeftSideBar;
- (BOOL)leftSideBarIsOpen;
- (BOOL)canCurrentSideBarShowEntranceBadge;
- (void).cxx_destruct;

@end
