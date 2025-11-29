@class CMessageWrap, NSString, MMUIViewController, CContactVerifyLogic, SendVerifyMsgViewController, CardImgItemInfo, CContact, CContactVerifyPreCheckBusinessLogic;
@protocol contactVerifyLogicDelegate, SendVerifyMsgViewControllerDelegate;

@interface SendVerifyMsgLogicController : NSObject <ContactVerifyPreCheckBusinessLogicDelegate, contactVerifyLogicDelegate> {
    MMUIViewController *m_parentVC;
    BOOL canOnCancel;
    CContactVerifyPreCheckBusinessLogic *m_verifyPreCheckBusinessLogic;
    SendVerifyMsgViewController *m_vc;
    CContactVerifyLogic *m_oContactVerifyLogic;
}

@property (retain, nonatomic) CContact *m_oVerifyContact;
@property (weak, nonatomic) id<SendVerifyMsgViewControllerDelegate> m_delegate;
@property (weak, nonatomic) id<contactVerifyLogicDelegate> m_sendRequestDelegate;
@property (nonatomic) BOOL m_bVerifyToMe;
@property (retain, nonatomic) CContact *m_oChatContact;
@property (retain, nonatomic) CMessageWrap *m_oSourceMsg;
@property (nonatomic) unsigned long long m_qrCodeAddFriendScene;
@property (nonatomic) BOOL m_needAnimationPopAfterOK;
@property (retain, nonatomic) NSString *verifyContent;
@property (nonatomic) unsigned int m_uiOpCode;
@property (nonatomic) long long contactInfoViewSource;
@property (nonatomic) BOOL m_needVerifyPreCheck;
@property (retain, nonatomic) CardImgItemInfo *businessCardItem;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithParentVC:(id)a0;
- (void)startLogic;
- (void)doStartLogic;
- (void)onCancel;
- (void)onDismiss;
- (void)onContactVerifyLimitFail:(id)a0;
- (void)onContactVerifyFail;
- (void)contactSendRequestOk:(id)a0;
- (void)contactAddContactOk:(id)a0;
- (void)disableUserPop;
- (void)onContactSendOrVerifyOk:(id)a0 opCode:(unsigned int)a1;
- (void)onContactSendOrVerifyFail:(id)a0 opCode:(unsigned int)a1 returnCode:(int)a2;
- (void)onContactVerifyPreCheckBusinessSuccess:(id)a0 opcode:(unsigned int)a1;
- (id)getVerifyPreCheckBusinessLogic;
- (id)getViewController;
- (void).cxx_destruct;

@end
