@class MMUIViewController, NSString, UIScreenEdgePanGestureRecognizer, UINavigationController, UserIdAuthorizePageInfo, NSMutableDictionary, WAAuthorizeUserIdPageSheet, NSMutableArray, WAMenuPopInteractiveTransition, WXAPhoneInfo;

@interface SecurityInfoAuthrizeLogic : MMObject <AuthorizeUserIdSMSConfirmDelegate, WCPayJSApiVerifyDelegate, UIViewControllerTransitioningDelegate, WAPopInteractiveTransitionDelegate, PhoneAuthManagePhoneLogicDelegate, PhoneAuthManagePhoneviewControllerDelegate, PhoneAuthManagePhoneViewControllerDataSource, PBMessageObserverDelegate> {
    id /* block */ _completion;
}

@property (copy, nonatomic) NSString *appid;
@property (weak, nonatomic) MMUIViewController *vc;
@property (retain, nonatomic) NSMutableDictionary *payParams;
@property (nonatomic) unsigned long long step;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSString *payToken;
@property (retain, nonatomic) WAAuthorizeUserIdPageSheet *pageSheet;
@property (retain, nonatomic) UINavigationController *nextNav;
@property (retain, nonatomic) WAMenuPopInteractiveTransition *interactiveTransition;
@property (retain, nonatomic) UIScreenEdgePanGestureRecognizer *popBackGesture;
@property (retain, nonatomic) UserIdAuthorizePageInfo *pageInfo;
@property (retain, nonatomic) WXAPhoneInfo *selectedPhoneInfo;
@property (retain, nonatomic) NSMutableArray *categoryId;
@property (nonatomic) unsigned int authType;
@property (copy, nonatomic) NSString *customAuthTitle;
@property (copy, nonatomic) NSString *customRealnameWording;
@property (copy, nonatomic) NSString *customPrivacyUrl;
@property (nonatomic) BOOL forbidShowPrivacyInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithAppId:(id)a0 vc:(id)a1;
- (void)getUserIdTokenWithCompletion:(id /* block */)a0;
- (void)onCgiResponse:(id)a0 forEvent:(unsigned int)a1;
- (void)enablePopGesture:(BOOL)a0;
- (void)processErrCode:(int)a0 errMsg:(id)a1;
- (id)parseUserIdPageInfoFromResponse:(id)a0;
- (id)parseSMSPageInfoFromResponse:(id)a0;
- (void)showAlarmBoxWithTitle:(id)a0 desc:(id)a1;
- (void)showToast:(id)a0;
- (void)onConfirmAuthorizeInfo;
- (void)onConfirmWithPayToken:(id)a0;
- (void)onConfirmWithAuthToken:(id)a0;
- (void)onCancelVerifySMS;
- (void)onConfirmPageBePoped;
- (void)onCancel;
- (void)sendRequest:(id)a0;
- (void)onVerifyResult:(id)a0;
- (id)getParam;
- (id)getCurrentURL;
- (void)constructPayParams:(id)a0;
- (void)_pushNewPageViewController:(id)a0;
- (void)_presentNewPageViewController:(id)a0;
- (id)animationControllerForPresentedController:(id)a0 presentingController:(id)a1 sourceController:(id)a2;
- (id)animationControllerForDismissedController:(id)a0;
- (id)interactionControllerForDismissal:(id)a0;
- (void)onPopBackInteractiveTransitionBegin:(id)a0;
- (void)showAuthorizeInfo:(id)a0 withHeight:(double)a1;
- (void)didAddNewPhoneInfo:(id)a0;
- (void)didDeletePhone:(id)a0;
- (void)startDeletePhoneRequest:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (id)phoneInfos;
- (id)fromAppid;
- (id)fromUrlString;
- (void)didDeletePhoneInfo:(id)a0;
- (void).cxx_destruct;

@end
