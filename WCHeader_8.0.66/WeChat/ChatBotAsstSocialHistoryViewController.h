@class MMUILabel, NSString, ChatBotAsstSocialHistoryDataController, MMUIButton, MMTableView;

@interface ChatBotAsstSocialHistoryViewController : MMUIViewController <ChatBotAsstSocialHistoryVCDelegate>

@property (retain, nonatomic) MMUIButton *backBtn;
@property (retain, nonatomic) MMTableView *tableView;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (weak, nonatomic) ChatBotAsstSocialHistoryDataController *dataController;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillPopOrDismiss:(BOOL)a0;
- (void)viewWillBePushOrPresent:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)layoutTitleLabel;
- (void)layoutBackBtn;
- (void)layoutTableView;
- (void)exitPage;
- (void).cxx_destruct;

@end
