@class AWELVideoLibraryPageContext, NSArray, NSString, DUXVacantView, UITableView;

@interface AWELVideoFilterChildViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) DUXVacantView *errorView;
@property (nonatomic) BOOL isHiddenTopCategory;
@property (nonatomic) double lastWidth;
@property (copy, nonatomic) NSArray *categories;
@property (retain, nonatomic) AWELVideoLibraryPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)showErrorView:(BOOL)a0;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
