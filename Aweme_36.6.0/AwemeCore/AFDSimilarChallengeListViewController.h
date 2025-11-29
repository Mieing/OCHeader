@class AFDSimilarChallengeListViewModel, UITableView, NSString, NSMutableSet, UILabel, UIButton;

@interface AFDSimilarChallengeListViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWETabListItemViewControllerProtocol>

@property (retain, nonatomic) AFDSimilarChallengeListViewModel *viewModel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UIButton *retryButton;
@property (retain, nonatomic) UILabel *emptyLabel;
@property (copy, nonatomic) NSString *trackPageIdentifier;
@property (retain, nonatomic) NSMutableSet *displayedIndexPaths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)tabContentScrollView;
- (void)setupBinding;
- (id)titleForSegmentedControl;
- (void)refreshTrackPageIdentifier;
- (void)trackHashTagCellShowWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
