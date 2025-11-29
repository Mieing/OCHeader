@class MMLiveBizArticleMoreView, NSString, MMLiveBizArticleListViewModel, MMTableView;
@protocol MMLiveBizArticleSearchViewControllerDelegate;

@interface MMLiveBizArticleSearchViewController : WCSearchViewController <UITableViewDataSource, UITableViewDelegate, MMTableViewDelegate, UITextFieldDelegate, MMLiveBizArticleListViewModelDelegate>

@property (retain, nonatomic) MMLiveBizArticleListViewModel *viewModel;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMLiveBizArticleMoreView *moreView;
@property (weak, nonatomic) id<MMLiveBizArticleSearchViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)viewDidLoad;
- (void)loadTableView;
- (void)searchAndRequestFirstPage:(id)a0;
- (void)resignSearchBar;
- (void)requestNextPageIfNeeded;
- (void)scrollViewDidScroll:(id)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)mmTableView:(id)a0 touchesBegan:(id)a1 withEvent:(id)a2;
- (void)textFieldDidEndEditing:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)liveBrandArticleListViewModelDidUpdateArticleList:(id)a0;
- (void)liveBrandArticleListViewModelDidUpdateLoadStatus:(id)a0;
- (void).cxx_destruct;

@end
