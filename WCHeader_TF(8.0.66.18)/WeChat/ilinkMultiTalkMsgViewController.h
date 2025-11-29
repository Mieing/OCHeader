@class NSString, NSMutableArray, MMTableView;

@interface ilinkMultiTalkMsgViewController : MMUIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) NSMutableArray *members;
@property (nonatomic) unsigned long long roomID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithMembers:(id)a0;
- (void)viewDidLoad;
- (void)configView;
- (void)onBack;
- (void)layoutSubviews;
- (id)navigationBarBackgroundColor;
- (BOOL)showNavigationBarSepLine;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
