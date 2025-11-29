@class NSString, WCPayDigitalCertManageViewController, WCPayPaySecurityCgi, PaySecurityResp;
@protocol WCPaySecuritySettingViewControllerDelegate;

@interface WCPaySecuritySettingViewController : WCPayBaseViewController <WCPayWalletEntranceStateViewControllerDelegate, MMTipsViewControllerDelegate, WCPayPaySecurityCgiDelegate, WCPayDigitalCertManageViewControllerDelegate, WCPayWalletLockSettingLogicDelegate, MMUseCaseCallback, SetWCPayWebLogicStateExt>

@property (retain, nonatomic) WCPayPaySecurityCgi *cgi;
@property (retain, nonatomic) PaySecurityResp *response;
@property (retain, nonatomic) WCPayDigitalCertManageViewController *digitalCertVC;
@property (nonatomic) unsigned int entryScene;
@property (weak) id<WCPaySecuritySettingViewControllerDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)useTransparentNavibar;
- (BOOL)useBlackStatusbar;
- (void)viewDidLoad;
- (void)viewDidBePoped:(BOOL)a0;
- (void)viewDidBeDismissed:(BOOL)a0;
- (void)showSecurityTips;
- (void)viewDidLayoutSubviews;
- (void)getData;
- (void)setupNavigationBar;
- (double)calCellHeightWithTitle:(id)a0 desc:(id)a1 status:(id)a2;
- (void)reloadTableView;
- (id)tableHeaderView;
- (void)setCell:(id)a0 title:(id)a1 desc:(id)a2 image:(id)a3 imageUrl:(id)a4 status:(id)a5;
- (void)makeDigitalCertCell:(id)a0 cellInfo:(id)a1;
- (void)makeWalletLockCell:(id)a0 cellInfo:(id)a1;
- (void)makeInsuranceCell:(id)a0 cellInfo:(id)a1;
- (void)makeBalancePrivacy:(id)a0 cellInfo:(id)a1;
- (void)clickBasicInfo;
- (void)clickDigitalCertCell:(id)a0;
- (void)clickWalletLockCell:(id)a0;
- (void)clickBalancePrivacyCell:(id)a0;
- (void)clickInsuranceCell:(id)a0;
- (void)clickPaySecurityDialog;
- (void)updateBackward;
- (void)paySecurityCgi:(id)a0 didGetResponse:(id)a1;
- (void)paySecurityCgi:(id)a0 didFailWithError:(id)a1;
- (void)onWCPayDigitalCertManageViewControllerCallRefresh;
- (void)updateDigitalCert;
- (void)walletLockDidClose:(id)a0;
- (void)touchLockDidSetup:(id)a0;
- (void)patternLockDidSetup:(id)a0;
- (void)setWCPayWebLogicStateJsapi:(id)a0 didGetInfo:(id)a1;
- (void)onClickTipsBtn:(id)a0 Index:(long long)a1 tipTag:(long long)a2;
- (void)onClickDialogBtn:(id)a0;
- (void)onWCPayWalletEntranceStateViewControllerCallRefresh;
- (void)call:(id)a0;
- (void).cxx_destruct;

@end
