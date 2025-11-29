@class NSString, AWEIMBlockListDataController, UITableView;

@interface AWEIMBlockListViewController : UIViewController <AWEUserMessage, UITableViewDelegate, UITableViewDataSource, AWERouterViewControllerProtocol, AWEIMBlockListViewControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMBlockListDataController *dataController;
@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *emptyViewDescription;
@property (copy, nonatomic) NSString *cellBtnAttentionTitle;
@property (copy, nonatomic) NSString *cellBtnNormalTitle;
@property (retain, nonatomic) NSString *enterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (void)didFinishFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishUnFollowUser:(id)a0 status:(long long)a1 error:(id)a2;
- (void)didFinishBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishUnBlockUser:(id)a0 status:(long long)a1;
- (void)didFinishHideMyPostFromUser:(id)a0 status:(long long)a1;
- (void)didFinishShowMyPostToUser:(id)a0 status:(long long)a1;
- (void)didFinishHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishUnHidePostFromHer:(id)a0 status:(long long)a1;
- (void)didFinishSetRemarkWithUser:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (void)didChangePrivateRelationWithUser:(id)a0 relationType:(long long)a1 relationValue:(long long)a2;
- (void)_endRefreshing;
- (void)backBtnClicked:(id)a0;
- (void)addThemeChangeObserver;
- (void)p_didThemeChanged;
- (void)configWithListType;
- (void)__configCellCornerType:(id)a0 index:(long long)a1;
- (void)blockBtnClickedWithUser:(id)a0 indexPath:(id)a1;
- (void)hideMyPostBtnClickedWithUser:(id)a0 indexPath:(id)a1;
- (void)hideHerPostBtnClickedWithUser:(id)a0 indexPath:(id)a1;
- (void)notShow24StoryBtnClickedWithUser:(id)a0 indexPath:(id)a1;
- (void)notSee24StoryBtnClickedWithUser:(id)a0 indexPath:(id)a1;
- (BOOL)isUserBlockStatusBlockedOrIsTeenModeEnable:(id)a0;
- (void)__refreshRowWithIndex:(long long)a0;
- (void)__deleteRowWithIndex:(long long)a0;
- (void)__refreshUserWithID:(id)a0 WithType:(long long)a1 ToNewStatus:(long long)a2;
- (void)__refreshUserRemarkWithUser:(id)a0;
- (void)__refreshUserFollowStatusWithUser:(id)a0 status:(long long)a1;
- (void)announceAccessibility:(id)a0 delay:(double)a1;
- (void)_loadMoreData;
- (void).cxx_destruct;
- (id)initWithType:(long long)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)tableView:(id)a0 willDisplayFooterView:(id)a1 forSection:(long long)a2;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;
- (void)_fetchData;
- (void)_setupUI;

@end
