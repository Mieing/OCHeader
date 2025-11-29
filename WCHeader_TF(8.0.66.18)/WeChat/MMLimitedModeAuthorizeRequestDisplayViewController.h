@class CMessageWrap, NSString, UIImage, MMTableViewInfo, MMLimitedModeAuthorizationUtilLogic, MMTableView, UIButton, MMAcceptAgreementCommonHeadView, CContact, MMLimitedModeGuardianLogic, UIColor;

@interface MMLimitedModeAuthorizeRequestDisplayViewController : MMAcceptAgreementBaseViewController <MMLimitedModeGuardianLogicDelegate> {
    UIButton *m_operateButton;
    CContact *m_guardianContact;
    BOOL m_needReload;
    MMLimitedModeGuardianLogic *m_guardianLogic;
    MMLimitedModeAuthorizationUtilLogic *m_authorizationUtilLogic;
    MMAcceptAgreementCommonHeadView *m_commonHeadView;
    MMTableViewInfo *m_tableViewInfo;
    MMTableView *m_tableView;
}

@property (retain, nonatomic) CMessageWrap *m_authorizeRequestMessageWrap;
@property (retain, nonatomic) UIImage *m_svgImage;
@property (retain, nonatomic) NSString *m_nsTitle;
@property (retain, nonatomic) NSString *m_nsDesc;
@property (retain, nonatomic) NSString *m_nsSessionFootTitle;
@property (nonatomic) BOOL m_bAcceptOperate;
@property (nonatomic) BOOL m_bCanAccessory;
@property (nonatomic) BOOL m_bHiddenOperateButton;
@property (copy, nonatomic) id /* block */ m_resultActionBlock;
@property (retain, nonatomic) UIColor *m_navigationBarBackgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)initData;
- (void)layoutOperateButton;
- (double)getCellHeight;
- (void)reloadTableData;
- (void)reloadFootView;
- (void)reloadForwardPreview;
- (BOOL)canAccessory;
- (id)genHeaderView;
- (void)makeAuthorizeRequestDisplayCell:(id)a0;
- (void)tapAuthorizeRequestDisplayCell;
- (void)didOperateButton;
- (void)didClickLeftCloseBarButton;
- (void)onAgreeTeenagerModeAuthorization:(id)a0 businessType:(unsigned int)a1 success:(BOOL)a2 errMsg:(id)a3;
- (id)navigationBarBackgroundColor;
- (id)m_commonHeadView;
- (void)setM_commonHeadView:(id)a0;
- (id)m_tableViewInfo;
- (void)setM_tableViewInfo:(id)a0;
- (id)m_tableView;
- (void)setM_tableView:(id)a0;
- (void).cxx_destruct;

@end
