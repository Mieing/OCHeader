@class UIView, AWESearchEmptyView, NSString, NSArray, AWEPublishCoProduceSearchManager, UIImageView, AWEUILoadingView, UIButton, DUXNavigationBar, AWEPublishCoproduceSearchView, UITableView, AWEPublishCoCreatorSettingsRoleModel;
@protocol AWEPublishCoproduceSearchViewControllerDelegate;

@interface AWEPublishCoproduceSearchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate>

@property (retain, nonatomic) UIView *topBar;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) AWEPublishCoproduceSearchView *searchView;
@property (retain, nonatomic) UIImageView *emptyImageView;
@property (retain, nonatomic) AWESearchEmptyView *searchEmptyView;
@property (retain, nonatomic) AWEPublishCoProduceSearchManager *searchManager;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (copy, nonatomic) NSString *keyword;
@property (copy, nonatomic) NSArray *localContacts;
@property (copy, nonatomic) NSArray *localSearchResults;
@property (copy, nonatomic) NSArray *remoteSearchResults;
@property (copy, nonatomic) NSArray *searchResults;
@property (nonatomic) double textFieldDidChangeInterval;
@property (retain, nonatomic) DUXNavigationBar *duxNavigationBar;
@property (copy, nonatomic) id /* block */ addCoProduceBlock;
@property (copy, nonatomic) id /* block */ openIdentitySelectPageBlock;
@property (retain, nonatomic) UITableView *tableView;
@property (weak, nonatomic) id<AWEPublishCoproduceSearchViewControllerDelegate> delegate;
@property (retain, nonatomic) AWEPublishCoCreatorSettingsRoleModel *defaultRole;
@property (nonatomic) BOOL canAddEnterprise;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)p_loadMoreData;
- (void)p_dismissLoadingWithAnimated:(BOOL)a0;
- (void)p_search:(id)a0;
- (void)setupNotifaction;
- (void)p_beginSearch:(id)a0;
- (id)checkAndRemoveCurrentUser:(id)a0;
- (void)updateWithRemoteSearchResults:(id)a0;
- (void)updateSearchResults;
- (void)configFilterCoProduceList:(id)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)keyboardWillHide:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (BOOL)textFieldShouldClear:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)textFieldDidChange:(id)a0;
- (void)cancelButtonTapped;

@end
