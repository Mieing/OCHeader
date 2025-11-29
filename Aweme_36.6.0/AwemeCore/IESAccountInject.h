@protocol IESAccountNetworkInjectDelegate, IESAccountABInjectDelegate, IESAccountUIDelegate, IESAccountDataDelegate, IESAccountTrackDelegate, IESAccountThirdPlatformDelegate, IESAccountCertDelegate, IESAccountCommonConfigDelegate, IESAccountSwitchAccountDelegate, IESAccountLoginStatusDelegate, IESAccountBindPhoneDelegate;

@interface IESAccountInject : NSObject

@property (retain, nonatomic) id<IESAccountCommonConfigDelegate> commonDelegate;
@property (retain, nonatomic) id<IESAccountNetworkInjectDelegate> networkDelegate;
@property (retain, nonatomic) id<IESAccountABInjectDelegate> abDelegate;
@property (retain, nonatomic) id<IESAccountTrackDelegate> trackDelegate;
@property (retain, nonatomic) id<IESAccountLoginStatusDelegate> loginStatusDelegate;
@property (retain, nonatomic) id<IESAccountUIDelegate> uiDelegate;
@property (retain, nonatomic) id<IESAccountDataDelegate> dataDelegate;
@property (retain, nonatomic) id<IESAccountThirdPlatformDelegate> thirdDelegate;
@property (retain, nonatomic) id<IESAccountCertDelegate> certDelegate;
@property (retain, nonatomic) id<IESAccountSwitchAccountDelegate> switchAccountDelegate;
@property (retain, nonatomic) id<IESAccountBindPhoneDelegate> bindPhoneDelegate;

+ (void)thirdPartyAuth:(id)a0 handler:(id /* block */)a1;
+ (void)alp_disableLocalizations:(id)a0;
+ (BOOL)injectHandleWebEventWithParams:(id)a0 completion:(id /* block */)a1;
+ (id)accountLastLoginUser;
+ (void)accountSetJSBStorageItem:(id)a0 biz:(id)a1 forKey:(id)a2;
+ (void)logoutWillStart:(id /* block */)a0 input:(id)a1;
+ (void)logoutDidFinished:(id)a0;
+ (id)injectRequestParamsForURL:(id)a0;
+ (id)injectHeaderParamsForURL:(id)a0;
+ (id)injectDomain;
+ (void)injectProcessMiddleCheck:(id)a0 completion:(id /* block */)a1;
+ (void)willHandleError:(id)a0;
+ (void)didHandleError:(id)a0 isHandledInSaaS:(BOOL)a1;
+ (BOOL)switchOnKYCNetworkInterceptor;
+ (void)thirdBindAuthForPlatform:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)routerOpenWithSchema:(id)a0 params:(id)a1 completion:(id /* block */)a2;
+ (void)openSMSVerificationPage:(id)a0;
+ (void)showAlertWithTitle:(id)a0 message:(id)a1 actions:(id)a2 defaultCompletion:(id /* block */)a3;
+ (void)showKickAlertWithTitle:(id)a0 message:(id)a1 showLoginBtn:(BOOL)a2 action:(id)a3 defaultCompletion:(id /* block */)a4;
+ (id)sharedInstance;
+ (BOOL)isLightTheme;

- (void).cxx_destruct;

@end
