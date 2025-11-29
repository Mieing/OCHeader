@class AWEIMFoldBoxChatListViewModel, NSString, AWEIMChatListViewController, AWEIMFoldBoxContext, UIView;
@protocol IESIMVacantViewProtocol;

@interface AWEIMFoldBoxViewController : AWEIMComponentViewController <AWEIMChatListViewControllerDelegate, AWEIMFoldBoxChatListRefreshDelegate, AWEIMComponentManagerDependency, AWEIMNavigationUnreadViewDelegate>

@property (retain, nonatomic) AWEIMFoldBoxContext *componentContext;
@property (retain, nonatomic) AWEIMFoldBoxChatListViewModel *viewModel;
@property (retain, nonatomic) AWEIMChatListViewController *chatListVC;
@property (retain, nonatomic) UIView *emptyView;
@property (retain, nonatomic) UIView *emptyContainerView;
@property (retain, nonatomic) UIView<IESIMVacantViewProtocol> *vacantView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)configWithRouterParamDict:(id)a0;
- (id)componentsNameArrayWithContext:(id)a0;
- (void)__setupUI;
- (void)backBtnClicked:(id)a0;
- (void)didTransferToChat:(id)a0 entryType:(long long)a1 isPushByFromVC:(BOOL)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)__loadMoreData;
- (long long)filterUnreadCoundInCurrentConversation:(long long)a0;
- (void)willDeleteChat:(id)a0 completion:(id /* block */)a1;
- (void)willNotDisPlayChat:(id)a0 completion:(id /* block */)a1;
- (void)reloadWhenFirstAppear;
- (void)cellLongPressPopupGestureDidTrigeredWithIndexPath:(id)a0 cell:(id)a1 point:(struct CGPoint { double x0; double x1; })a2 chat:(id)a3;
- (void)didBecomeEmpty:(BOOL)a0;
- (void)refreshChatList;
- (void)__reloadChatList;
- (void)__addNavigationBarUnreadViewIfNeeded;
- (void)p_showEmptyPageWithPageState:(unsigned long long)a0;
- (void)p_layoutEmptyViewIfNeeded;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (id)init;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)loadView;
- (void)dismissNavigationViewController;

@end
