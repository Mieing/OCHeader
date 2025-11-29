@class NSNumber, NSString, AWEButton, AWERelationFollowGroupMemberViewModel, UIView, AWEUILoadingView, UITableView;

@interface AWERelationFollowGroupMemberViewController : UIViewController <AWEViewControllerProtocol, UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UIView *lineView;
@property (retain, nonatomic) AWEButton *addMemberButton;
@property (copy, nonatomic) NSString *groupTitle;
@property (retain, nonatomic) NSNumber *groupID;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *followGroupType;
@property (nonatomic) long long groupType;
@property (copy, nonatomic) NSString *followGroupName;
@property (copy, nonatomic) NSString *refreString;
@property (retain, nonatomic) NSNumber *groupOrder;
@property (nonatomic) BOOL showAddMemberBig;
@property (retain, nonatomic) AWERelationFollowGroupMemberViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (BOOL)configWithRouterParamDict:(id)a0;
- (BOOL)transition_shouldStartInteractiveTranstionToVC:(id)a0;
- (void)backBtnClicked:(id)a0;
- (void)setupBinding;
- (void)fetchData:(BOOL)a0;
- (void)__setupNavUI;
- (void)__setupTableView;
- (BOOL)_isSpecialGroup;
- (void)__setupFootUI;
- (void)moreBtnClicked:(id)a0;
- (void)showAddMemberViewIfNeed;
- (void)trackEditGroupEvent:(id)a0 actionType:(id)a1;
- (void)__groupActionWithActionGroup:(id)a0;
- (void)transferToMemberSelectionPage;
- (BOOL)_isCommerceGroup;
- (BOOL)shouldShowMoreBtn;
- (void)__moreOptionButtonTapped:(id)a0 user:(id)a1;
- (id)groupMemberCommonTrackParams;
- (void)addMemberButtonClicked:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)isSystemType;
- (void)setupUI;
- (void)showLoadingView;
- (double)footerInset;
- (void)hideLoadingView;

@end
