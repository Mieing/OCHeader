@class WCPayHKGetPluginCgi, NSString, SettingPayEntranceViewController, HKPayPluginResponse, UIButton;

@interface WeChatPayHKContactInfoAssist : BrandBasedPluginContactInfoAssist <WCPayHKGetPluginCgiDelegate>

@property (retain, nonatomic) UIButton *payEntryButton;
@property (retain, nonatomic) SettingPayEntranceViewController *payEntryViewController;
@property (nonatomic) BOOL hasPushedUninstallVC;
@property (nonatomic) BOOL hasRequestedPluginData;
@property (retain, nonatomic) WCPayHKGetPluginCgi *getPluginCgi;
@property (retain, nonatomic) HKPayPluginResponse *payPluginResp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0 delegate:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)updatePayEntryButton;
- (id)getPluginIntro;
- (void)addSection:(id /* block */)a0;
- (void)reloadInstalledTableViewData;
- (void)promptUninstall:(id)a0;
- (void)doUninstall;
- (void)enterHelpCenter;
- (void)enterContactSession;
- (void)handleTopSwitchChange:(id)a0;
- (void)handleMuteSwitchChange:(id)a0;
- (void)onClickClearMessage:(id)a0;
- (void)onClickSvrRetCell:(id)a0;
- (void)viewDidPopOrDismiss:(BOOL)a0;
- (void)requestPluginDataFromSvrIfNeeded;
- (void)onGetHKPayPluginResponse:(id)a0;
- (void)onClickPayEntryButton;
- (void)realShowEntryCloseView;
- (void).cxx_destruct;

@end
