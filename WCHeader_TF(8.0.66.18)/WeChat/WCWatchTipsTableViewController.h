@class NSArray, NSTimer, NSString, MMTableView;

@interface WCWatchTipsTableViewController : MMUIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) NSArray *tips;
@property (retain, nonatomic) NSTimer *animationTimer;
@property (retain, nonatomic) MMTableView *mainTableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)layoutUI;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)setupCell:(id)a0 withTitle:(id)a1 andSubTitle:(id)a2 andContent:(id)a3;
- (void)setupWatchFace:(id)a0 atRow:(long long)a1;
- (void)starPageSwithAnimation:(id)a0;
- (long long)caculateCellHeightWithTitle:(id)a0 andSubTitle:(id)a1 andContent:(id)a2;
- (void).cxx_destruct;

@end
