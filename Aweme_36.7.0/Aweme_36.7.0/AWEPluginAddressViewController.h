@class UITableView, NSArray, NSString, UIButton;
@protocol AWEAddressDelegate;

@interface AWEPluginAddressViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWEAddressTableViewCellDelegate>

@property (nonatomic) long long selectedRow;
@property (retain, nonatomic) UIButton *doneButton;
@property (retain, nonatomic) UITableView *addressTableView;
@property (copy, nonatomic) NSArray *addressDataSource;
@property (weak, nonatomic) id<AWEAddressDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)cell:(id)a0 didSelectWithType:(long long)a1;
- (void)doneButtonClick;
- (void)addButtonClick;
- (void)actionBack:(id)a0;
- (void)reloadAddressData;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)shouldAutorotate;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)viewWillDisappear:(BOOL)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (long long)tableView:(id)a0 editingStyleForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)a1;

@end
