@class NSString, NSArray, NSIndexPath, MMTableView;
@protocol WCPaySingleSelectedTableViewControllerDelegate;

@interface WCPaySingleSelectTableViewController : WCPayBaseViewController <UITableViewDelegate, UITableViewDataSource>

@property (weak, nonatomic) id<WCPaySingleSelectedTableViewControllerDelegate> delegate;
@property (retain, nonatomic) NSString *viewControllerTitle;
@property (retain, nonatomic) NSArray *displayData;
@property (retain, nonatomic) NSIndexPath *selectedIndexPath;
@property (retain, nonatomic) MMTableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 title:(id)a1 displayData:(id)a2;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)OnCancel;
- (void)onDone;
- (void)setupContentView;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
