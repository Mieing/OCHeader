@class NSString, MMUIViewController, CMessageWrap, MMLimitedModeAuthorizeRequestLogic;
@protocol MMLimitedModeAuthorizationUtilLogicDelegate;

@interface MMLimitedModeAuthorizationUtilLogic : NSObject <MMLimitedModeAuthorizeRequestViewControllerLogicDelegate, MMLimitedModeIndependentVerifyViewControllerDelegate, MMLimitedModeAuthorizeRequestLogicDelegate> {
    NSString *m_bizKey;
    long long m_bizType;
    CMessageWrap *m_accessMessage;
    NSString *m_accessTitle;
    NSString *m_accessDesc;
    BOOL m_isLoading;
    long long m_verifyType;
    MMLimitedModeAuthorizeRequestLogic *m_authorizeRequestLogic;
}

@property (weak, nonatomic) MMUIViewController *vc;
@property (weak, nonatomic) id<MMLimitedModeAuthorizationUtilLogicDelegate> m_delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)getAccessAuthorizationVerifyInfo;

- (BOOL)checkAccessAuthorizationHadApproveWithBizKey:(id)a0 bizType:(long long)a1;
- (void)startQuestAccessAuthorizationWithBizKey:(id)a0 bizType:(long long)a1 inView:(id)a2;
- (void)startQuestAccessAuthorizationWithBizKey:(id)a0 bizType:(long long)a1 accessTitle:(id)a2 accessDesc:(id)a3 accessMessage:(id)a4 inView:(id)a5;
- (void)onTapAccessAuthorizationVerifyWithVerifyType:(long long)a0 bizKey:(id)a1 bizType:(long long)a2 accessTitle:(id)a3 accessDesc:(id)a4 accessMessage:(id)a5 inView:(id)a6;
- (id)getAuthorizeRequestLogic;
- (void)verifyPasswordSuccessSaveAgreenAuthorizationInfo;
- (void)onVerifyPasswordSuccessTicket:(id)a0;
- (void)OnForwardMessageSendSuccess;
- (void)onAuthorizeRequestVerifyPasswordSuccessTicket:(id)a0;
- (void)onAuthorizeRequestVerifyPasswordSuccessAndAnimationEndedWithTicket:(id)a0;
- (void)onAuthorizeRequestForwardMessageSendSuccess;
- (void)onAuthorizeRequestVerifyCancel;
- (void)makeDefaultAuthorizeRequestDisplayCellForBusiness:(id)a0 cellLeftImageUrl:(id)a1 cellLeftImage:(id)a2 cellTitle:(id)a3 needRoundIcon:(BOOL)a4;
- (void)makePlayAuthorizeRequestDisplayCellForBusiness:(id)a0 cellLeftImageUrl:(id)a1 cellLeftImage:(id)a2 cellTitle:(id)a3 canAccessory:(BOOL)a4;
- (void)makeLiveAuthorizeRequestDisplayCellForBusiness:(id)a0 cellLeftImageUrl:(id)a1 bareCellLeftImageUrl:(id)a2 cellLeftImage:(id)a3 cellTitle:(id)a4 canAccessory:(BOOL)a5;
- (void)makeNotSupportCell:(id)a0;
- (BOOL)isShowAuthorizeRequestDisplayCell:(long long)a0;
- (void)makeAuthorizeRequestDisplayCellForBusiness:(id)a0 authorizeRequestMessage:(id)a1;
- (void)tapAuthorizeRequestDisplayCellForBusinessWithAuthorizeRequestMessage:(id)a0;
- (void)openWebView:(id)a0 businessMessage:(id)a1;
- (void)openWeApp:(id)a0;
- (void).cxx_destruct;

@end
