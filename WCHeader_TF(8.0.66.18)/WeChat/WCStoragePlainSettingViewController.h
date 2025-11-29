@class MMTableViewInfo;

@interface WCStoragePlainSettingViewController : MMUIViewController

@property (retain, nonatomic) MMTableViewInfo *tableViewInfo;
@property (nonatomic) unsigned long long maxChatLogSize;

- (void)viewDidLoad;
- (void)reloadTableData;
- (void)viewDidLayoutSubviews;
- (void)onManageResourceClick;
- (void)onManageChatLogClick;
- (void).cxx_destruct;

@end
