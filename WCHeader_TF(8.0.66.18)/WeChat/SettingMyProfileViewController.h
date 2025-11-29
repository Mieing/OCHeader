@class SettingMyAccountExtInfoLogic, NSString, GetWecoinBalanceResponse, MMHeadImageView, NameEditorViewController, WCTableViewManager, RingToneSettingCellHandler;

@interface SettingMyProfileViewController : MMUIViewController <HDHeadImageViewDelegate, settingMyAccountExtInfoLogicDelegate, IOplogExt, IMyInvoiceLogicMgrExt> {
    MMHeadImageView *m_headImage;
    NameEditorViewController *m_CurrentVC;
    NSString *m_nsTempNickName;
    BOOL m_bHaveInvoiceInfo;
    WCTableViewManager *m_tableViewMgr;
}

@property (retain, nonatomic) RingToneSettingCellHandler *ringToneSettingCellHandler;
@property (retain, nonatomic) GetWecoinBalanceResponse *wecoinBalanceResponse;
@property (retain, nonatomic) SettingMyAccountExtInfoLogic *m_infoLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isNeedShowWCPay;
- (void)showModifyUserNameProtocol;
- (void)updateTableCell;
- (id)getSettingHeadImage;
- (void)updateHead:(id)a0;
- (void)onChangeImg:(id)a0;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willAppear;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)viewDidBePoped:(BOOL)a0;
- (BOOL)shouldRestrictContentViewSize;
- (void)fetchData;
- (id)wccoinCellRightView;
- (void)makeChangeImg;
- (id)createNameEditorViewController;
- (id)makeBindPhoneView;
- (void)showBindPhone;
- (void)showModifyNickName;
- (void)showModifyNickName:(id)a0;
- (void)showModifyPatpatSuffix;
- (void)showModifyPatpatSuffixWithScene:(unsigned long long)a0;
- (void)showQRInfoView;
- (void)showMyAddressInfoView;
- (void)showInvoiceView;
- (void)showWCCoinView;
- (void)dealloc;
- (void)preLoadGlobalRing;
- (void)OnGetInvoiceRet:(BOOL)a0 andResult:(id)a1 fromScene:(unsigned int)a2;
- (void)onInfoChange;
- (void)onModifyNickName:(id)a0 vc:(id)a1;
- (void)oplogRet:(int)a0 errMsg:(id)a1 eventID:(unsigned int)a2 cgiWrap:(id)a3;
- (void)setupDeepLinkConfig;
- (void)viewDidTransitionToNewSize;
- (void)didPatSuffixModified;
- (void)onFinderSvrExptConfigHitChanged:(int)a0;
- (void)onOpenService:(unsigned long long)a0 config:(id)a1 error:(id)a2;
- (void)bindPhoneReturn;
- (void)registerYReportSdk;
- (void)Save;
- (id)makeSignView;
- (id)getSexString;
- (id)getAddressString;
- (void)onModifySex:(id)a0;
- (void)saveNewSign:(id)a0;
- (void)MMRegionPickerDidChoosRegion:(id)a0;
- (void)showModifySexView;
- (void)showModifyAddressView;
- (void)showModifySignView;
- (void).cxx_destruct;

@end
