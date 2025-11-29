@class AWEShareSaveAlertViewModel, NSString, AWEAwemeModel, NSMutableArray, UITableView;

@interface AWEShareSaveViewController : UIViewController <UITableViewDataSource, UITableViewDelegate, AWEIMHalfScreenContainerScrollProtocol, AWEShareSavePanelTableViewCellDelegate, AWEIMHalfScreenContainerVCDelegate, AWEShareSaveTableViewCellDelegate>

@property (retain, nonatomic) AWEShareSaveAlertViewModel *viewModel;
@property (retain, nonatomic) AWEAwemeModel *model;
@property (retain, nonatomic) NSMutableArray *dataSource;
@property (retain, nonatomic) UITableView *tableView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)instanceWithViewModel:(id)a0 awemeModel:(id)a1 completion:(id /* block */)a2;
+ (void)trackClickMoreEventForAwemeModel:(id)a0;
+ (void)transferToCreateChatForAwemeModel:(id)a0 context:(id)a1;
+ (void)shareToUser:(id)a0 awemeModel:(id)a1 context:(id)a2 dismiss:(id /* block */)a3 completion:(id /* block */)a4;
+ (void)trackShareVideoToChatWithAwemeModel:(id)a0 toUser:(id)a1 context:(id)a2;
+ (void)trackShareVideoWithAwemeModel:(id)a0 toUser:(id)a1 context:(id)a2;
+ (void)trackShareVideoSuccessWithAwemeModel:(id)a0 toUser:(id)a1 context:(id)a2;

- (void)halfScreenContainerVCWillDismiss:(id)a0;
- (void)p_applicationWillEnterForeground;
- (void)p_dismissWithCompletion:(id /* block */)a0;
- (void)p_sendMessageWithModel:(id)a0;
- (void)p_sharePrivacyToShareList:(id)a0 completion:(id /* block */)a1;
- (void)p_shareWithTableView:(id)a0 indexPath:(id)a1;
- (void)shareSaveIMTableViewCellDidClickSendButton:(id)a0;
- (void)didTapActionWithButtonType:(unsigned long long)a0;
- (void)tappedMoreFriends;
- (void).cxx_destruct;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (id)init;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)scrollView;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)dealloc;
- (void)p_applicationDidEnterBackground:(id)a0;
- (void)p_registerNotifications;

@end
