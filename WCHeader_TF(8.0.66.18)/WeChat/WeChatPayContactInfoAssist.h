@class NSString, SettingPayEntranceViewController, WCPayGetPluginCgi, PayPluginResponse, UIButton;

@interface WeChatPayContactInfoAssist : BrandBasedPluginContactInfoAssist <WCActionSheetDelegate, WCPayGetPluginCgiDelegate>

@property (retain, nonatomic) UIButton *payEntryButton;
@property (retain, nonatomic) SettingPayEntranceViewController *payEntryViewController;
@property (nonatomic) BOOL bHasGetPluginSectionData;
@property (retain, nonatomic) WCPayGetPluginCgi *getPluginCgi;
@property (retain, nonatomic) PayPluginResponse *payPluginResp;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithContact:(id)a0 delegate:(id)a1;
- (void)viewDidLayoutSubviews;
- (void)updatePayEntryButton;
- (id)getPluginIntro;
- (void)reloadInstalledTableViewData;
- (void)handleTopSwitchChange:(id)a0;
- (void)handleMuteSwitchChange:(id)a0;
- (void)enterHelpCenter;
- (void)enterCustomerSupport;
- (void)callServicePhone;
- (void)installPlugin;
- (void)handleOnAddContactOk:(id)a0;
- (void)uninstallPlugin;
- (void)clearPluginMessage;
- (void)reportEntryClick:(unsigned int)a0;
- (void)onClickSvrRetCell:(id)a0;
- (void)getPayPluginSectionFromSvr;
- (void)onGetPayPluginResponse:(id)a0;
- (void)onClickPayEntryButton;
- (void)realShowEntryCloseView;
- (void).cxx_destruct;

@end
