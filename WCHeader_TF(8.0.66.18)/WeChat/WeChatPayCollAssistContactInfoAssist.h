@class WCPayGetCollAssistMenuCgi, NSString, WCPayGetCollAssistPluginCgi, GetReceiptAssisPluginResponse;

@interface WeChatPayCollAssistContactInfoAssist : BrandBasedPluginContactInfoAssist <WCActionSheetDelegate, WCPayGetCollAssistPluginCgiDelegate, WCPayGetCollAssistMenuCgiDelegate>

@property (nonatomic) BOOL bHasGetPluginSectionData;
@property (retain, nonatomic) WCPayGetCollAssistPluginCgi *getPluginCgi;
@property (retain, nonatomic) GetReceiptAssisPluginResponse *collAssistPluginResp;
@property (retain, nonatomic) WCPayGetCollAssistMenuCgi *getCollAssistMenuCgi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getPluginIntro;
- (void)reloadInstalledTableViewData;
- (void)enterContactSession;
- (void)handleTopSwitchChange:(id)a0;
- (void)handleMuteSwitchChange:(id)a0;
- (void)enterHelpCenter;
- (void)installPlugin;
- (void)handleOnAddContactOk:(id)a0;
- (void)uninstallPlugin;
- (void)clearPluginMessage;
- (void)onClickSvrRetCell:(id)a0;
- (void)getCollAssistPluginSectionFromSvr;
- (void)onGetCollAssistPluginResponse:(id)a0;
- (void)reportLocalEntryClickWithScene:(unsigned int)a0;
- (void)reportSvrEntryClickWithName:(id)a0;
- (void)updateCollAssistMenuFromSvr;
- (void)onGetCollAssistMenuCgiResponse:(id)a0;
- (void).cxx_destruct;

@end
