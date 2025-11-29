@class UIViewController, NSString, NSMutableArray, UITableView;

@interface AmoebaPageDebugInfoViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (weak, nonatomic) UIViewController *debugViewController;
@property (retain, nonatomic) NSMutableArray *debugPageParams;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithVC:(id)a0;
- (void)initDebugInfo;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void).cxx_destruct;

@end
