@class UINavigationController, NSString, MMUIViewController, CMessageWrap, ForwardMessageLogicController, MMLimitedModeVerifyPasswordLogic;
@protocol MMLimitedModeAuthorizeRequestLogicDelegate;

@interface MMLimitedModeAuthorizeRequestLogic : NSObject <MMLimitedModeVerifyPasswordLogicDelegate, MMLimitedModeIndependentVerifyViewControllerDelegate, ForwardMessageLogicDelegate> {
    ForwardMessageLogicController *m_forwardMsgLogic;
    MMLimitedModeVerifyPasswordLogic *m_limitedModeVerifyPasswordLogic;
    CMessageWrap *m_authorizeRequestMessageWrap;
}

@property (weak, nonatomic) UINavigationController *m_navigationController;
@property (weak, nonatomic) id<MMLimitedModeAuthorizeRequestLogicDelegate> m_delegate;
@property (retain, nonatomic) NSString *m_accessTitle;
@property (retain, nonatomic) NSString *m_accessDesc;
@property (retain, nonatomic) CMessageWrap *m_accessMessage;
@property (retain, nonatomic) NSString *m_bizKey;
@property (nonatomic) long long m_bizType;
@property (weak, nonatomic) MMUIViewController *vc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)checkLimitedModeVerifyPassword;
- (void)checkLoginPassWord;
- (void)checkIndependentPassWord;
- (void)forMessage:(id)a0;
- (void)forMessage:(id)a0 useNewMsgType:(BOOL)a1;
- (void)onCheckPasswordExist:(BOOL)a0 isNeverUse:(BOOL)a1 success:(BOOL)a2 errMsg:(id)a3;
- (id)getCurrentViewController;
- (void)OnForwardMessageSend:(id)a0;
- (void)OnForwardMessageCancel:(id)a0;
- (void)OnForwardMessageException:(id)a0;
- (void)onVerifyPasswordSuccessTicket:(id)a0;
- (void).cxx_destruct;

@end
