@class NSString, UIViewController;

@interface WCFinderUserBindPhoneAssist : NSObject <VerifyPhoneDelegate>

@property (weak, nonatomic) UIViewController *fromVC;
@property (copy, nonatomic) id /* block */ complete;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)checkWithUserPrepare:(id)a0 type:(long long)a1 isRegChain:(BOOL)a2 fromVC:(id)a3 complete:(id /* block */)a4;

- (void)showBindPhoneView:(id)a0 type:(long long)a1;
- (void)showAlertWithTitle:(id)a0 content:(id)a1;
- (void)cancelBindPhone;
- (void)continueBindPhone;
- (void)bindPhoneReturn;
- (void).cxx_destruct;

@end
