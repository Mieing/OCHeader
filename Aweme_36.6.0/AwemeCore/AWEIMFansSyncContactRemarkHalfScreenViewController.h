@class UIView, NSString, AWEIMFansSyncContactRemarkViewModel, AWEIMFansSyncContactRemarkHeader, UIButton, UITableView, NSMutableArray, YYLabel, UIViewController, UILabel;
@protocol AFDHalfScreenHostViewControllerProtocol;

@interface AWEIMFansSyncContactRemarkHalfScreenViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AFDHalfScreenPresentationProtocol>

@property (retain, nonatomic) NSMutableArray *chooseUsers;
@property (retain, nonatomic) NSMutableArray *users;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleBar;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWEIMFansSyncContactRemarkViewModel *viewModel;
@property (retain, nonatomic) UIButton *syncButton;
@property (retain, nonatomic) AWEIMFansSyncContactRemarkHeader *headerView;
@property (nonatomic) long long chooseCount;
@property (retain, nonatomic) YYLabel *limitedContactGuide;
@property (weak, nonatomic) UIViewController<AFDHalfScreenHostViewControllerProtocol> *halfScreenHostViewController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateButtonTitle:(id)a0;
- (void)themeDidChangeNoti:(id)a0;
- (void)setupBinds;
- (BOOL)wantsDimmingView;
- (void)closeHalfVC;
- (void)chooseUser:(id)a0 checked:(BOOL)a1;
- (void)clickSyncButton;
- (void)configViewModel:(id)a0;
- (void).cxx_destruct;
- (id)tableView:(id)a0 viewForHeaderInSection:(long long)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (double)tableView:(id)a0 heightForHeaderInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;

@end
