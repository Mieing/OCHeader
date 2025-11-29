@class NSDictionary, NSArray, NSString, AWEIMPrivateChatManagementHelperViewModel, UIView, AWEUILoadingView, UITableView;

@interface AWEIMPrivateChatManagementHelperViewController : UIViewController <AWERouterViewControllerProtocol, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) AWEIMPrivateChatManagementHelperViewModel *viewModel;
@property (retain, nonatomic) NSArray *chatArr;
@property (nonatomic) unsigned long long selectType;
@property (retain, nonatomic) UIView *baseView;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) NSString *pageIdentifier;
@property (copy, nonatomic) NSDictionary *routerParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)__setupUI;
- (void)__showLoadingView;
- (void)__backBtnClicked;
- (void)__addKVO;
- (void)__updateNaviBar;
- (void)__hideLoadingViewIfNeeded;
- (void)__transferToConversationWithConversationID:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)title;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
