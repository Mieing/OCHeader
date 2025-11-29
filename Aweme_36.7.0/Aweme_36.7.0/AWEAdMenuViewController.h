@class AWEMenu, NSArray, NSString, AWEMenuTopBar, NSIndexPath;

@interface AWEAdMenuViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UIViewControllerTransitioningDelegate>

@property (retain, nonatomic) AWEMenuTopBar *topBar;
@property (copy, nonatomic) NSArray *tableViews;
@property (copy, nonatomic) NSArray *separatorLines;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) NSIndexPath *preselectedMenuIndexPath;
@property (readonly, nonatomic) AWEMenu *menu;
@property (copy, nonatomic) id /* block */ didFinishPicking;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cancelButtonAction:(id)a0;
- (id)initWithMenu:(id)a0 preselectedMenuIndexPath:(id)a1;
- (id)currentlySelectedMenuIndexPath;
- (id)menuForTableView:(id)a0;
- (id)selectedIndexPathAheadOfTableView:(id)a0;
- (void)generateSelectionFeedback;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)doneButtonAction:(id)a0;

@end
