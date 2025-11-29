@class GraphicVerifyWindow, NSString, BaseResponseErrMsg, NSData;
@protocol PasswordLogicDelegate;

@interface PasswordLogic : MMObject <PBMessageObserverDelegate, UITextFieldDelegate, GraphicVerifyWindowDelegate> {
    BOOL m_bVerify_Pwd_Use_Old_WTBuf;
}

@property (weak, nonatomic) id<PasswordLogicDelegate> m_delegate;
@property (nonatomic) unsigned int m_opCode;
@property (nonatomic) unsigned int m_uiScene;
@property (retain, nonatomic) NSString *m_nsTitle;
@property (retain, nonatomic) NSString *m_nsMessage;
@property (retain, nonatomic) NSString *m_nsPwd;
@property (retain, nonatomic) NSString *m_nsPwdMd5;
@property (retain, nonatomic) NSString *m_nsPwd2;
@property (retain, nonatomic) NSData *m_dtVerifyImg;
@property (retain, nonatomic) GraphicVerifyWindow *m_winVerifyImg;
@property (retain, nonatomic) NSString *m_nsImgEncryptKey;
@property (retain, nonatomic) NSData *m_dtKSid;
@property (nonatomic) unsigned int m_uiVerfyPwdScene;
@property (nonatomic) BOOL m_bCan_Verify_Pwd_Use_Old_WTBuf;
@property (retain, nonatomic) id m_oUserData;
@property (retain, nonatomic) BaseResponseErrMsg *m_errInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)topMostController;
- (void)hashPasswordFromText:(id)a0;
- (void)doVerifyCode:(id)a0;
- (void)doVerifyPwd;
- (void)doGetVerifyImg;
- (void)onGraphicVerifyWithVerifyCode:(id)a0;
- (void)onGraphicVerifyBack;
- (void)onGraphicVerifyChangeImage;
- (void)updateVerifyImg;
- (void)showPasswordAlert;
- (void)showVerifyAlert;
- (void)showFailAlert:(id)a0 message:(id)a1;
- (void)showVerifyPassFailAlert:(id)a0;
- (void)startVerifyPassword;
- (void)startVerifyPasswordWithoutAlert;
- (void)startCheckPassword:(unsigned int)a0;
- (void)startSetPassword:(id)a0 ticketType:(unsigned int)a1;
- (id)init;
- (void)dealloc;
- (void)MessageReturnSetPasswd:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturnCheckPasswd:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturnVerifyPasswd:(id)a0 Event:(unsigned int)a1;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
