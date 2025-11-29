@class NSMutableDictionary, DelaySwitchSettingLogic, WCOpLog, MMTableViewInfo;

@interface SettingPrivateConfigViewController : MMUIViewController {
    NSMutableDictionary *m_changesOnExitMap;
    BOOL m_applySettingNow;
    MMTableViewInfo *m_tableViewInfo;
    WCOpLog *m_wcOpLog;
    BOOL m_strangerRightOpen;
    BOOL m_contactVerifySwitchOpen;
    BOOL m_recommendQQOpen;
    BOOL m_recommendPhoneOpen;
    unsigned int m_contactVerifyIndex;
    BOOL m_finderLiveIsHoverSnsTimelineSwitchOpen;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
}

@property (nonatomic) unsigned int wcNotificationCellIndex;
@property (nonatomic) BOOL m_bIsShowPhoneSectionIndexAtFirst;
@property (nonatomic) BOOL m_bIsShowContactVerifySectionIndexAtFirst;

- (id)getHeaderView:(id)a0;
- (id)init;
- (void)showBlackListView;
- (void)showSocialListView;
- (void)showAppAuthManagementView;
- (void)reloadTableData;
- (void)reloadTableDataWithReloadFooterView:(BOOL)a0;
- (void)reloadTableContactAuthorityManageData;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willAppear;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidBePushed:(BOOL)a0;
- (void)dealloc;
- (void)startCoverContactVerify;
- (void)hideCoverView;
- (void)removeCoverView;
- (BOOL)setChangeOnExitForSelector:(SEL)a0 withControl:(id)a1;
- (void)applyUnSavedChanges;
- (void)updateWcStateAndReloadTableView;
- (void)showAddMeWaysVC;
- (void)doSetPrivateConfig:(unsigned int)a0 on:(BOOL)a1 bitset:(unsigned int)a2;
- (void)recommendPhoneChanged:(id)a0;
- (void)contactVerifySwitchChanged:(id)a0;
- (void)showSocialBlackAuthManageView;
- (void)showSnsAuthManageView;
- (void)showFinderAuthManageView;
- (void)showWowAuthManageView;
- (void)showWeRunBlackAuthManageView;
- (void)setupDeepLinkConfig;
- (void)registerYReportSdk;
- (void).cxx_destruct;

@end
