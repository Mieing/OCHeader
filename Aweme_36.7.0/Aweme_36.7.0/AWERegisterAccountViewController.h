@class NSArray, NSString, UITableView;

@interface AWERegisterAccountViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *listData;
@property (copy, nonatomic) id /* block */ addAccountAction;
@property (copy, nonatomic) id /* block */ createAccountAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backAction:(id)a0;
- (id)initWithAddAccountAction:(id /* block */)a0 createAccountAction:(id /* block */)a1;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupData;

@end
