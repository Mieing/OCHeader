@class MMUINavigationBar, UITableView, NSString, UINavigationItem, NSMutableArray;

@interface WXGRoamChooseRangeViewController : MMWindowViewController <IRoamBackupPackageServiceExt, UITableViewDelegate, UITableViewDataSource> {
    double m_addButtonHeight;
}

@property (retain, nonatomic) UINavigationItem *customNavigationItem;
@property (retain, nonatomic) MMUINavigationBar *customNavigationBar;
@property (retain, nonatomic) NSMutableArray *cellHeightArr;
@property (retain, nonatomic) UITableView *sheetView;
@property (nonatomic) BOOL isUpadte;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)setupNavBar;
- (id)makeAddButtonCellWithWidth:(double)a0;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 estimatedHeightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)onCancel;
- (void)onCreate;
- (void)updateView;
- (void)onRoamBackupPackageServiceChooseRangeDetailComplete;
- (void).cxx_destruct;

@end
