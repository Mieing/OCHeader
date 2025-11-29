@class NSArray, UIImageView, NSString, UILabel, UITableView;

@interface AWETeenTimeLockSettingViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWERouterViewControllerProtocol, DUXActionSheetDelegate>

@property (copy, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) UIImageView *timeIconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *useTimeTitleLabel;
@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) UILabel *descLabel;
@property (copy, nonatomic) NSString *password;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)configWithRouterParamDict:(id)a0;
- (void)backBtnClicked:(id)a0;
- (void)p_setupData;
- (void)p_trackTimeLimitSettingPageShow;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;

@end
