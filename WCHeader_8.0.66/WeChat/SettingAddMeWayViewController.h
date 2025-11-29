@class DelaySwitchSettingLogic, MMTableViewInfo;

@interface SettingAddMeWayViewController : MMUIViewController {
    BOOL m_allowFindMeByPhoneSwitchOpen;
    BOOL m_allowFindMeByContactConfigSwitchOpen;
    BOOL m_bAllowFindByQQOpen;
    BOOL m_allowFindMeByGoogleSwitchOpen;
    BOOL m_addMeByGroupSwitchOpen;
    BOOL m_addMeByQRCodeSwitchOpen;
    BOOL m_addMeByCardSwitchOpen;
    MMTableViewInfo *m_tableViewInfo;
    unsigned int m_phoneSection;
    BOOL m_allowFindMeByOtherSwitchOpen;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
}

@property (nonatomic) BOOL m_bIsShowPhoneSectionIndexAtFirst;

- (id)init;
- (void)reloadTableData;
- (void)viewDidLoad;
- (void)viewWillDisappear:(BOOL)a0;
- (void)allowFindMeByPhoneSwitchChanged:(id)a0;
- (void)allowFindMeByContactConfigSwitchChanged:(id)a0;
- (void)allowQQFriendFindMeSwitchChanged:(id)a0;
- (void)allowAddMeByGroupSwitchChanged:(id)a0;
- (void)allowAddMeByQRCodeSwitchChanged:(id)a0;
- (void)allowAddMeByCardSwitchChanged:(id)a0;
- (void)allowAddMeByOtherSwitchChanged:(id)a0;
- (void)startCoverAnimOnPhone;
- (void)hideCoverView;
- (void)removeCoverView;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
