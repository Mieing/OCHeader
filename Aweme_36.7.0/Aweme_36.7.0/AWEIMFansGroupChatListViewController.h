@class NSString, AWEIMChatListViewController, UIView, AWEIMFansGroupChatListViewModel;

@interface AWEIMFansGroupChatListViewController : UIViewController <AWEIMFansGroupChatListRefreshDelegate, AWEIMChatListViewControllerDelegate>

@property (retain, nonatomic) AWEIMFansGroupChatListViewModel *viewModel;
@property (retain, nonatomic) AWEIMChatListViewController *chatListVC;
@property (retain, nonatomic) UIView *emptyView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)backBtnClicked:(id)a0;
- (void)p_fetchData;
- (void)didTransferToChat:(id)a0 entryType:(long long)a1 isPushByFromVC:(BOOL)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (id)initWithConvIDs:(id)a0;
- (void)chatListDidReload;
- (void)chatListDidReloadChat:(id)a0;
- (void)chatListDidRemoveChat:(id)a0;
- (void)chatListDidInsertChat:(id)a0;
- (void)chatListDidAddNewMessage;
- (void)chatListDidInsertChatListAtIndex:(long long)a0;
- (void)chatListDidMoveNewMessageToNewIndex:(unsigned long long)a0 fromOldIndex:(unsigned long long)a1;
- (void)chatListDidReloadChatListAtIndex:(long long)a0;
- (void)willDeleteChat:(id)a0 completion:(id /* block */)a1;
- (void)willNotDisPlayChat:(id)a0 completion:(id /* block */)a1;
- (void)reloadWhenFirstAppear;
- (void)didBecomeEmpty:(BOOL)a0;
- (BOOL)canEditRowAtIndexPath:(id)a0 actionType:(unsigned long long)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (BOOL)prefersStatusBarHidden;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (void)dismissNavigationViewController;

@end
