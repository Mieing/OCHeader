@class UITableView, DUXNavigationBar, NSString, AWENavigationBarView, NSMutableDictionary, NSMutableArray, AWEUserModel;

@interface AWECompanyChanllengeSecondViewController : UIViewController <UITableViewDelegate, UITableViewDataSource>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEUserModel *user;
@property (retain, nonatomic) NSMutableArray *challengeList;
@property (retain, nonatomic) AWENavigationBarView *navigationBar;
@property (retain, nonatomic) DUXNavigationBar *duxNavigationBar;
@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSMutableDictionary *trackDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleBack;
- (void)configChallengeWithModel:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)setupUI;

@end
