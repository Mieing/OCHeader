@class NSArray, BDPAlertSpringAnimator, NSString, NSError, BDPUniqueID, BDPDetentionHelper;

@interface BDPIdentityAuthenticationAlertViewController : UIViewController <BDPIdentityAuthenticationAlertViewDelegate, BDPGuardianResultViewDelegate, BDPGuardianVerifyViewDelegate, BDPGuardianConfirmViewDelegate> {
    BOOL _isShown;
    BOOL _fromDetention;
    unsigned long long _alertType;
    id /* block */ _dismissCallBack;
    BDPDetentionHelper *_detentionHelper;
    NSError *_lastRequestError;
    NSString *_name;
    NSString *_idNumber;
    NSString *_guardianName;
}

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (retain, nonatomic) BDPAlertSpringAnimator *animator;
@property (nonatomic) BOOL isShowGiftPackage;
@property (retain, nonatomic) NSArray *giftImageInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didDisagree:(id)a0;
- (void)didAgree:(id)a0;
- (void)didCheckChildPrivacy:(id)a0;
- (void)didHaveKnow:(id)a0;
- (void)didExitGame:(id)a0;
- (void)didConfirmForGuardianVerifyView:(id)a0 withName:(id)a1 identityCard:(id)a2;
- (void)didCancelForGuardianVerifyView:(id)a0;
- (void)didCheckAuthentication:(id)a0;
- (void)didCheckService:(id)a0;
- (void)didCheckPrivacy:(id)a0;
- (void)alertViewDidCheckFAQ:(id)a0;
- (void)alertViewDidConfirm:(id)a0 withName:(id)a1 identityCard:(id)a2;
- (void)_showAgreementWebViewWithURL:(id)a0;
- (id)initWithUniqueID:(id)a0 alertType:(unsigned long long)a1 fromDetention:(BOOL)a2 dismissCallBack:(id /* block */)a3;
- (void)showFromParentController:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (BOOL)shouldAutorotate;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (BOOL)navigationBarHidden;
- (void)_setupUI;
- (void)alertViewDidCancel:(id)a0;

@end
