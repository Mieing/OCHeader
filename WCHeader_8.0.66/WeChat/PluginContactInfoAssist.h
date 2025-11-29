@class DelaySwitchSettingLogic, UILabel, MMTableViewInfo, UIButton;

@interface PluginContactInfoAssist : CBaseContactInfoAssist {
    MMTableViewInfo *m_tableViewInfo;
    long long m_pluginType;
    unsigned int m_uOpType;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
    UIButton *m_installBtn;
    UIButton *m_uninstallBtn;
    UILabel *m_statusLabel;
}

@property (retain, nonatomic) UILabel *introLabel;

- (id)initWithContact:(id)a0 delegate:(id)a1;
- (void)dealloc;
- (id)GetTableView;
- (void)initTableView;
- (void)reloadInstalledTableViewData;
- (void)reloadUninstalledTableViewData;
- (void)reloadTableView;
- (void)reloadTableViewData;
- (void)addBrandUserSignatureSection;
- (void)makeContactIntroCell:(id)a0 CellInfo:(id)a1;
- (id)getPluginIntro;
- (id)getUnInstallTip;
- (id)getUnInstallBtnTitle;
- (void)clearPluginData;
- (void)doUninstall;
- (void)promptUninstall:(id)a0;
- (void)updateInstallView;
- (void)initFooterView;
- (void)updateInstallStateAndReloadTableView;
- (void)setDelaySettingType:(long long)a0 andValue:(BOOL)a1;
- (void)onSwitchViewOn;
- (void)onSwitchViewOff;
- (void)installPlugin;
- (void)uninstallPlugin;
- (void)initInstallView;
- (void)initHeadImage;
- (void)initHeaderView;
- (BOOL)forbidShowInstallOrUninstall;
- (void)onNewMsg;
- (void)clearPluginMessage;
- (void)onClickClearMessage:(id)a0;
- (void)onSwitchValueChange:(id)a0;
- (id)getLoadingText;
- (id)navigationBarBackgroundColor;
- (void).cxx_destruct;

@end
