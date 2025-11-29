@class AWECodeGenDouyinContentPayChargePermissionResponse, NSArray, NSString, BDXBridgeEventSubscriber, AWEVideoPublishViewModel, UITableView;

@interface AWEPublishAdvanceSettingChangePaidModeViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, DUXBasicSheetProtocol>

@property (weak, nonatomic) UITableView *tableView;
@property (copy, nonatomic) NSArray *items;
@property (retain, nonatomic) BDXBridgeEventSubscriber *vipEnableVideoSubscriber;
@property (nonatomic) BOOL hasVIPVideoPrivilege;
@property (weak, nonatomic) AWEVideoPublishViewModel *publishViewModel;
@property (weak, nonatomic) AWECodeGenDouyinContentPayChargePermissionResponse *permissionModel;
@property (copy, nonatomic) id /* block */ changePaidModeBlock;
@property (nonatomic) unsigned long long initialPaidMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dux_titleForColoseButton;
- (void)configItem;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;

@end
