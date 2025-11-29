@class NSArray;

@interface XPlayDebugViewController : UITableViewController

@property (retain, nonatomic) NSArray *data;

- (void)closeButtonClick:(id)a0;
- (void)enableButtonClick:(id)a0;
- (void)cellLongPress:(id)a0;
- (void)showInputAlertControllerWithTitle:(id)a0 initialText:(id)a1 keyboardType:(long long)a2 confirmCallback:(id /* block */)a3;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;

@end
