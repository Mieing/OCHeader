@class CMessageWrap, MMTableViewInfo, NSString, UIButton, MMLimitedModeAuthorizeRequestLogic, MMAcceptAgreementCommonHeadView, CContact, MMTableView;
@protocol MMLimitedModeAuthorizeRequestViewControllerLogicDelegate;

@interface MMLimitedModeAuthorizeRequestViewController : MMAcceptAgreementBaseViewController <MMLimitedModeAuthorizeRequestLogicDelegate> {
    UIButton *m_closeButton;
    CContact *m_guardianContact;
    BOOL m_needReload;
    double m_tableCellHeight;
    MMLimitedModeAuthorizeRequestLogic *m_authorizeRequestLogic;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
}

@property (weak, nonatomic) id<MMLimitedModeAuthorizeRequestViewControllerLogicDelegate> m_delegate;
@property (retain, nonatomic) NSString *m_accessTitle;
@property (retain, nonatomic) NSString *m_accessDesc;
@property (retain, nonatomic) CMessageWrap *m_accessMessage;
@property (retain, nonatomic) NSString *m_bizKey;
@property (nonatomic) long long m_bizType;
@property (nonatomic) BOOL m_onlyIntercept;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)initData;
- (id)getAuthorizeRequestLogic;
- (void)layoutCloseButton;
- (void)reloadTableData;
- (void)reloadFootView;
- (id)genHeaderView;
- (void)checkVerifyPassword;
- (void)didAskAccess;
- (void)doClickCloseButton;
- (void)didClickLeftCloseBarButton;
- (void)onVerifyPasswordSuccessTicket:(id)a0;
- (void)OnForwardMessageSendSuccess;
- (id)navigationBarBackgroundColor;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)a0;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)a0;
- (id)m_tableView;
- (void)setM_tableView:(id)a0;
- (void).cxx_destruct;

@end
