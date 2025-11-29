@class UIButton, NSString, UITextField, NSData, MMLoadingView, UIViewController;
@protocol ReturnToSettingAccoutDelegate;

@interface SettingBindQQVerifyViewController : MMUIViewController {
    MMLoadingView *m_loadingView;
    unsigned int m_uiEventID;
    unsigned int m_uiOpCode;
}

@property (retain, nonatomic) NSString *m_nsUsrName;
@property (retain, nonatomic) NSString *m_nsPwd;
@property (retain, nonatomic) UITextField *m_tfVerifyCode;
@property (retain, nonatomic) NSData *m_dtImg;
@property (retain, nonatomic) UIViewController *m_vcAccount;
@property (weak, nonatomic) id<ReturnToSettingAccoutDelegate> m_delReturn;
@property (retain, nonatomic) UIButton *m_btVerify;
@property (retain, nonatomic) NSString *m_nsImgEncryptKey;

- (void)StartLoading;
- (void)StopLoading;
- (BOOL)CheckInputValid;
- (void)UpdateVerifyImg:(id)a0;
- (unsigned int)CreateBindQQEvent:(unsigned int)a0;
- (void)LogIn:(id)a0;
- (void)GetVerifyImg:(id)a0;
- (void)ReturnToBindView:(id)a0;
- (id)init;
- (void)viewDidLoad;
- (void)dealloc;
- (void)OnBindQQOK;
- (void)OnBindQQErrorReturn:(id)a0;
- (void).cxx_destruct;

@end
