@class NSArray, NSString, WAContact, WAAppAuthRespData, UIView, NSMutableArray, MMTableViewInfo;
@protocol WAAppAuthorizationDelegate;

@interface WAAppAuthorizationViewController : MMUIViewController <WAAppDetailInfoManagerExtension, MMTipsViewControllerDelegate, WAAppAuthorizationDetailViewControllerDelegate, IMMTemplateMsgAuthServiceExt, IWADeviceVoipAuthServiceExt> {
    NSString *m_appid;
    NSMutableArray *m_authorationList;
    BOOL m_isAuthInfoChanged;
    BOOL m_isBluetoothInfoChanged;
    UIView *m_emptyView;
    MMTableViewInfo *m_tableViewInfo;
    BOOL m_userChangedLocationOptionState;
    unsigned int m_userSelectedLocationOptionState;
    BOOL m_userChangedFuzzyLocationOptionState;
    unsigned int m_userSelectedFuzzyLocationOptionState;
    BOOL m_userChangedBluetoothOptionState;
    unsigned int m_userSelectedBluetoothOptionState;
    BOOL _hasTemplateMsgAuthCell;
    NSArray *_deviceVoipAuthDeviceList;
    BOOL _isEmployeeRelationAuthCancelled;
}

@property (retain, nonatomic) WAContact *contact;
@property (retain, nonatomic) WAAppAuthRespData *authData;
@property (weak, nonatomic) id<WAAppAuthorizationDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)transferScopeCacheToSubscriptionModel:(id)a0;

- (id)init;
- (id)initWithContact:(id)a0;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)a0;
- (void)initCustomNavigationBar;
- (void)onReturn;
- (void)initTableViewInfo;
- (void)reloadTableViewInfo;
- (id)getTemplateMsgAuthCellTips;
- (id)getDenyOptionItem;
- (id)getWhenInUseOptionItem;
- (id)getAlwaysAllowOptionItem;
- (id)getThreeStateAuthDisplayStringWithForegroundAllow:(BOOL)a0 backgroundAllow:(BOOL)a1;
- (id)getFuzzyLocationAuthDisplayStringWithAllow:(BOOL)a0;
- (id)getLocationDisplayStringForUserSelectedOptionState:(unsigned int)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)onPayCell:(id)a0;
- (void)onLocationCell:(id)a0;
- (void)onFuzzyLocationCell:(id)a0;
- (void)onBluetoothCell:(id)a0;
- (void)onSubscriptionMessageSettingsCell:(id)a0;
- (void)onB2CEmployeeRelationCell;
- (void)onMangerAuthCell:(id)a0;
- (void)onDeviceSyncAuthCell:(id)a0;
- (void)onPrivacyUsageDetailCell:(id)a0;
- (void)onDeviceVoipAuthCell:(id)a0;
- (id)makeHeaderView;
- (void)initEmptyView;
- (double)cellLeftDetailMaxWidth;
- (void)requestAuthorazitionInfo;
- (void)onThreeStateAuthInfoChanged:(id)a0 backgroundScope:(id)a1;
- (void)onFuzzyLocationAuthInfoChanged;
- (void)onClickAccountCell:(id)a0;
- (void)onAuthInfoChangeed:(id)a0 CellInfo:(id)a1;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 withText:(id)a2 withTipsVC:(id)a3;
- (void)syncSetAuthState:(id)a0;
- (void)onAppAuthInfoListModifyEnd:(BOOL)a0 AuthDataList:(id)a1;
- (void)onAppAuthInfoListModifyFailedWithRiskControlInfo:(id)a0;
- (void)onGetAppAuthInfo:(id)a0 appid:(id)a1 errorCode:(int)a2;
- (BOOL)isAppRegisteredBackgroundModeForKey:(id)a0;
- (id)getBluetoothPermissionString;
- (void)didSelectAuthorizationOptionItem:(id)a0 forAuthType:(unsigned long long)a1;
- (void)onFetchShowInSettingScopeList:(id)a0 forUser:(id)a1 hasSettingEntry:(BOOL)a2;
- (void)onUpdateScopeGlobalRecv:(BOOL)a0 forUser:(id)a1;
- (void)onFetchVoipDeviceList:(id)a0;
- (void).cxx_destruct;

@end
