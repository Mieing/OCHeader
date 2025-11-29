@class LSIMTipView, NSString, LSIMChatListVM;

@interface LSIMChatListVC : LSListVC <LSIMChatListNaviBarDelegate, LSIMEmptyViewDelegate>

@property (retain, nonatomic) LSIMChatListVM *listVM;
@property (retain, nonatomic) LSIMTipView *tipView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)fetchListData;
- (void)closePage;
- (id)initWithRouterParams:(id)a0;
- (void)setupTopView;
- (void)bindModel;
- (void)setupStatusView;
- (void)emptyView:(id)a0 click:(long long)a1;
- (void)listVM:(id)a0 action:(id)a1;
- (void)chatListNaviBar:(id)a0 click:(long long)a1;
- (void)setupNavibar;
- (void)updatePlatformServiceInfo;
- (void)updateTipInfo;
- (void).cxx_destruct;
- (void)applicationDidBecomeActive:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (void)setupUI;

@end
