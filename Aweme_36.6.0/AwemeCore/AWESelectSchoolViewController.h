@class UIView, AWESchoolNearestDataController, AWESchoolSearchDataController, NSString, UIButton, AWESchoolListDataController, UITextField, UITableView;

@interface AWESelectSchoolViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWECommonSearchBarDelegate, AFDSelectSchoolViewControllerProtocol>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UITableView *searchTableView;
@property (retain, nonatomic) UIView *loadingView;
@property (readonly, nonatomic) UITextField *searchBarTextField;
@property (retain, nonatomic) UIButton *notFoundBtn;
@property (retain, nonatomic) AWESchoolListDataController *schoolListDataController;
@property (retain, nonatomic) AWESchoolSearchDataController *schoolSearchDataController;
@property (retain, nonatomic) AWESchoolNearestDataController *schoolNearestDataController;
@property (nonatomic) BOOL isShowingSearch;
@property (nonatomic) BOOL isBecomeActiveFromLocationPermission;
@property (copy, nonatomic) id /* block */ selectSchoolBlock;
@property (nonatomic) BOOL isFromNearby;
@property (nonatomic) BOOL isFromSchoolStory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)aweui_emptyPageConfigForState:(unsigned long long)a0;
- (void)aweui_emptyPagePrimaryButtonTapped:(id)a0;
- (id)p_rotationAnimation;
- (void)backButtonClicked;
- (void)getClosestSchool:(id /* block */)a0;
- (void)p_loadMoreData;
- (void)p_showLoadingView;
- (void)_onApplicationDidBecomeActiveNotification:(id)a0;
- (void)p_hideLoadingView;
- (void)p_refreshData:(id)a0;
- (void)p_loadMoreDataForSearch;
- (void)p_createSearchRequest;
- (void)p_refreshDataForSearch;
- (void)p_setNavigationHeader;
- (void)notFoundBtnClicked;
- (void)p_configTableView:(id)a0;
- (void)p_requestSchoolList;
- (void)p_goToNotFoundPage;
- (void)p_getNearSchoolWithCompletion:(id /* block */)a0;
- (void)p_showSearchTableView;
- (void)p_showTableView;
- (BOOL)p_hasLocationPermission;
- (void)p_didSelectClearSchool;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)searchBar:(id)a0 textDidChange:(id)a1;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)viewDidLoad;
- (double)tableView:(id)a0 heightForFooterInSection:(long long)a1;
- (id)tableView:(id)a0 viewForFooterInSection:(long long)a1;

@end
