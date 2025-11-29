@class WCPayDeleteDigitalCertCgi, NSString, WCBizLoadingView, UIImageView, WCPayUserInfo, UIButton, TenpayCertificate, WCPayDigitalCertPayManageResp, UILabel;
@protocol WCPayDigitalCertManageViewControllerDelegate;

@interface WCPayDigitalCertManageViewController : WCPayBaseViewController <WCActionSheetDelegate, WCPayDigitalCertInstallViewControllerDelegate, WCPayDeleteDigitalCertCgiDelegate>

@property (retain, nonatomic) UIImageView *m_iconView;
@property (retain, nonatomic) UILabel *m_iconDescLabel;
@property (retain, nonatomic) UILabel *m_contentLabel;
@property (retain, nonatomic) UILabel *m_contentLabelDesc1;
@property (retain, nonatomic) UILabel *m_contentLabelDesc2;
@property (retain, nonatomic) UIButton *m_manageButton;
@property (retain, nonatomic) WCBizLoadingView *m_bizLoadingView;
@property (retain, nonatomic) WCPayDigitalCertPayManageResp *m_manageInfo;
@property (retain, nonatomic) WCPayUserInfo *m_userInfo;
@property (retain, nonatomic) WCPayDeleteDigitalCertCgi *m_deleteCgi;
@property (retain, nonatomic) TenpayCertificate *m_certControl;
@property (retain, nonatomic) NSString *m_currentDeviceCertNo;
@property (weak, nonatomic) id<WCPayDigitalCertManageViewControllerDelegate> m_delegate;
@property (nonatomic) unsigned int entryScene;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithManageInfo:(id)a0 userInfo:(id)a1 delegate:(id)a2;
- (id)navigationBarBackgroundColor;
- (void)viewDidLoad;
- (void)viewDidLayoutSubviews;
- (void)updateBizLoadingView;
- (void)startBizLoadingBlocked;
- (void)stopBizLoading;
- (void)didReceiveMemoryWarning;
- (void)reloadTableView;
- (void)updateCertCell;
- (void)makeInfoCell:(id)a0 cellInfo:(id)a1;
- (void)updateHeaderView;
- (void)updateIconViewWithSuperView:(id)a0;
- (void)updateIconDescLabelWithSuperView:(id)a0;
- (void)updateContentLabelWithSuperView:(id)a0;
- (void)updateContentLabelDesc1WithSuperView:(id)a0;
- (void)updateContentLabelDesc2WithSuperView:(id)a0;
- (id)genSectionHeaderView;
- (void)onClickInstallButton;
- (void)onClickDeleteButton;
- (void)updateManageButtonWithSuperView:(id)a0;
- (void)sendDeleteCgiWithCrtNo:(id)a0;
- (void)reloadData;
- (void)callDelegate;
- (void)updateWithData:(id)a0;
- (BOOL)hasOtherDeviceCertCount;
- (void)onWCPayDeleteDigitalCertCgiWithResp:(id)a0;
- (void)onWCPayDigitalCertInstallViewControllerOk;
- (void)deleteOtherDeviceCertClick:(id)a0;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
