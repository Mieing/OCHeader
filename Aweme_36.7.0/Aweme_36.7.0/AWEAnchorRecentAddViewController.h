@class AWEAnchorRecentAddNavigationBar, NSArray, AWEAnchorRecentAddViewModel, NSString, UITableView;
@protocol AWEAnchorRecentAddViewControllerDelegate;

@interface AWEAnchorRecentAddViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (copy, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (nonatomic) long long anchorType;
@property (nonatomic) BOOL isEditMode;
@property (retain, nonatomic) AWEAnchorRecentAddViewModel *viewModel;
@property (retain, nonatomic) AWEAnchorRecentAddNavigationBar *fakeNavigationBar;
@property (weak, nonatomic) id<AWEAnchorRecentAddViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupBind;
- (id)initWithDataSource:(id)a0 anchorType:(long long)a1;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
