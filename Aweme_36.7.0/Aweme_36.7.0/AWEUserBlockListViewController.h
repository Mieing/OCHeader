@class UILabel, NSString, AWEUILoadingView, AWEUserBlockListDataController, UIView, UITableView;

@interface AWEUserBlockListViewController : UIViewController <AWEUserMessage, UITableViewDelegate, UITableViewDataSource>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEUserBlockListDataController *dataController;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *emptyViewDescription;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)didFinishHideMyPostFromUser:(id)a0 status:(long long)a1;
- (void)didFinishShowMyPostToUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (void)didChangePrivateRelationWithUser:(id)a0 relationType:(long long)a1 relationValue:(long long)a2;
- (void)showPanel:(id)a0;
- (void)dismissLoadingView;
- (void)backBtnClicked:(id)a0;
- (void)loadMoreData;
- (void)endRefreshingWithError:(id)a0;
- (void)addThemeChangeObserver;
- (void)p_didThemeChanged;
- (void)configWithListType;
- (BOOL)isUserBlockStatusBlockedOrIsTeenModeEnable:(id)a0;
- (void)__refreshRowWithIndex:(long long)a0;
- (void)__refreshUserRemarkWithUser:(id)a0;
- (void)announceAccessibility:(id)a0 delay:(double)a1;
- (id)descTextForType:(id)a0;
- (void)__refreshUserWithID:(id)a0 updateType:(long long)a1 toNewStatus:(long long)a2;
- (BOOL)awemeEnable:(id)a0;
- (BOOL)storyEnable:(id)a0;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)fetchData;
- (void)viewDidLoad;
- (void)dealloc;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)setupUI;

@end
