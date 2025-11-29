@class NSString, DelaySwitchSettingLogic, WCOpLog, MMTableViewInfo;

@interface SettingPrivateSecondConfigViewController : MMUIViewController <ILinkEventExt, WCFinderSvrExptConfigExt> {
    MMTableViewInfo *m_tableViewInfo;
    WCOpLog *m_wcOpLog;
    BOOL m_strangerRightOpen;
    BOOL m_finderLiveIsHoverSnsTimelineSwitchOpen;
    DelaySwitchSettingLogic *m_delaySwitchLogic;
}

@property (nonatomic) unsigned int wcNotificationCellIndex;
@property (nonatomic) BOOL finderShowLikeListInWeixinProfile;
@property (nonatomic) long long recentPrivacyPushScene;
@property (nonatomic) unsigned long long settingAuthManageFlag;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)a0;
- (void)willAppear;
- (void)viewWillDisappear:(BOOL)a0;
- (id)init;
- (void)reloadTableData;
- (void)reloadTableDataWithReloadFooterView:(BOOL)a0;
- (void)reloadTableAuthManageSnsData;
- (void)reloadTableAuthManageFinderData;
- (id)createShieldHisLikedFeedCell;
- (id)createShieldMyLikedFeedCell;
- (void)reloadTableAuthManageWowData;
- (id)getCurrentRecentString;
- (unsigned long long)getCurrentRecentType:(id)a0;
- (void)showRecentWCOptions;
- (void)onModifyRecentOption:(id)a0;
- (void)allowStrangerWC:(id)a0;
- (void)allowShowFinderLikeList:(id)a0;
- (void)showRecentWC:(id)a0;
- (void)finderLiveHoverOnSnsTimelineSwitchChanged:(id)a0;
- (void)showWCEditGroup;
- (void)showWCOutsiderView;
- (void)showWCBlackListView;
- (void)showFinderOutsideView;
- (void)showFinderBlackView;
- (void)showWowOutsideView;
- (void)showWowBlackView;
- (void)setupDeepLinkConfig;
- (void)onFinderSvrExptConfigHitChanged:(int)a0;
- (void).cxx_destruct;

@end
