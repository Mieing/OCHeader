@class AWETeenGeneralSettingViewModel, NSString, UILabel, UITableView;

@interface AWETeenGeneralSettingViewController : UIViewController <UITableViewDataSource, UITableViewDelegate>

@property (retain, nonatomic) UITableView *tableView;
@property (retain, nonatomic) AWETeenGeneralSettingViewModel *viewModel;
@property (nonatomic) long long colorStyle;
@property (retain, nonatomic) UILabel *versionLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)backBtnClick:(id)a0;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (long long)numberOfSectionsInTableView:(id)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;

@end
