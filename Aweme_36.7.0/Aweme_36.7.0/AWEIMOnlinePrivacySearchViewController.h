@class UITableView, NSOrderedSet, UILabel, NSString, AWEUILoadingView, UIView, AWEIMOnlinePrivacyDataManager;
@protocol IESIMSearchEngineProtocol;

@interface AWEIMOnlinePrivacySearchViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *searchTableView;
@property (retain, nonatomic) AWEUILoadingView *loadingView;
@property (retain, nonatomic) AWEIMOnlinePrivacyDataManager *dataManager;
@property (retain, nonatomic) id<IESIMSearchEngineProtocol> searchEngine;
@property (copy, nonatomic) NSOrderedSet *searchResults;
@property (retain, nonatomic) UIView *emptyPageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *informativeLabel;
@property (copy, nonatomic) id /* block */ didSelectUserBlock;
@property (copy, nonatomic) id /* block */ resignKeyboard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupSearchEngine;
- (void)showEmptyPage:(BOOL)a0;
- (void)p_createTableView;
- (void)p_initEmptyView;
- (void)emptyPageTapped;
- (void)updateSearchResultsWithUsers:(id)a0;
- (void)searchUserWithKeyWord:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)initWithManager:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewWillAppear:(BOOL)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)setupUI;

@end
