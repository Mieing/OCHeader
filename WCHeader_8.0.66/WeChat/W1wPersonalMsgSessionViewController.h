@class MMTableView, NSString, W1wPersonalMsgSessionViewModel;

@interface W1wPersonalMsgSessionViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource, W1wPersonalMsgSessionViewModelDelegate>

@property (retain, nonatomic) W1wPersonalMsgSessionViewModel *viewModel;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSString *pageId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewModel:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidBePushed:(BOOL)a0;
- (void)setupUI;
- (void)setupTableView;
- (void)setupNavigationBarItems;
- (void)setupViewModel;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 msgCellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (BOOL)tableView:(id)a0 canEditRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 commitEditingStyle:(long long)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)onW1wSessionUpdated;
- (void)openW1wPersonalMsgLogicController:(id)a0;
- (void).cxx_destruct;

@end
