@class MMLiveBizArticleMoreView, NSString, WCSearchBar, MMLiveBizArticleListViewModel, MMTableView;
@protocol MMLiveBizArticleListViewControllerDelegate;

@interface MMLiveBizArticleListViewController : MMCPUIViewController <UITableViewDataSource, UITableViewDelegate, MMTableViewDelegate, MMLiveBizArticleListViewModelDelegate, MMLiveBizArticleSearchViewControllerDelegate>

@property (retain, nonatomic) MMLiveBizArticleListViewModel *viewModel;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMLiveBizArticleMoreView *moreView;
@property (retain, nonatomic) WCSearchBar *searchBar;
@property (weak, nonatomic) id<MMLiveBizArticleListViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)loadNavigationItems;
- (void)leftBarButtonItemDidClick:(id)a0;
- (void)loadTableView;
- (void)loadSearchBar;
- (void)requestFirstPage;
- (void)requestNextPageIfNeeded;
- (void)scrollViewDidScroll:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)liveBrandArticleListViewModelDidUpdateArticleList:(id)a0;
- (void)liveBrandArticleListViewModelDidUpdateLoadStatus:(id)a0;
- (void)brandArticleSearchViewController:(id)a0 didSelectWithArticle:(id)a1;
- (void).cxx_destruct;

@end
