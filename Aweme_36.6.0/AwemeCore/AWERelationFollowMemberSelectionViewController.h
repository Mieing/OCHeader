@class AWERelationGroupSelectionBaseViewModel, AWEContactListTableViewHeader, NSString, AWEUILoadingView, AWERelationSystemGroupTagView, UITableView;

@interface AWERelationFollowMemberSelectionViewController : UIViewController <AWEViewControllerProtocol, AWERouterViewControllerProtocol, UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, AWETableViewSectionIndexDelegate, AWECommonSearchBarDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEContactListTableViewHeader *searchView;
@property (retain, nonatomic) AWERelationSystemGroupTagView *groupView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) NSString *refreString;
@property (retain, nonatomic) AWERelationGroupSelectionBaseViewModel *viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })aweui_emptyPageEdgeInsets;
- (BOOL)configWithRouterParamDict:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })awe_indexViewGetFrame;
- (id)awe_indexViewGetIndexRelations;
- (void)backBtnClicked:(id)a0;
- (void)setupBinding;
- (void)setupNavUI;
- (void)setupContentUI;
- (void)__reloadData;
- (void)__updateHighlightSectionHeader;
- (double)__titleAlphaWithSection:(long long)a0;
- (void)changeUserState:(id)a0 currentState:(BOOL)a1;
- (void)enterProfile:(id)a0;
- (void)switchGroupWithNewGroupIndex:(long long)a0;
- (void).cxx_destruct;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (id)initWithViewModel:(id)a0;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)scrollViewWillBeginDragging:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)fetchData;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)scrollViewDidScroll:(id)a0;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (long long)tableView:(id)a0 sectionForSectionIndexTitle:(id)a1 atIndex:(long long)a2;
- (void)setupUI;
- (void)showLoadingView;
- (void)hideLoadingView;

@end
