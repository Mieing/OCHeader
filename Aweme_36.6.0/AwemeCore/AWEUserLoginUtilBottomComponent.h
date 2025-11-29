@class NSString, AWEUserLoginTextUtilBottomView, DUXActionSheet, AWEUserLoginUtilBottomView, AWEUITextLoadingView, AWEUserLoginBaseViewModel, NSMutableArray, AWEUserLoginOverseaBottomView, AWEUserLoginThirdLoginDataController;
@protocol AWEUserLoginViewModelSecondaryProtocol;

@interface AWEUserLoginUtilBottomComponent : NSObject <DUXActionSheetDelegate, AWEUserLoginDataControllerDelegate, HTSAccountMessage, AWEUserLoginUtilBottomComponentProtocol>

@property (retain, nonatomic) AWEUserLoginBaseViewModel<AWEUserLoginViewModelSecondaryProtocol> *viewModel;
@property (retain, nonatomic) AWEUserLoginUtilBottomView *iconBottomView;
@property (retain, nonatomic) AWEUserLoginTextUtilBottomView *textBottomView;
@property (retain, nonatomic) AWEUserLoginOverseaBottomView *overseaBottomView;
@property (retain, nonatomic) DUXActionSheet *otherLoginActionSheet;
@property (retain, nonatomic) NSMutableArray *trackThirdForms;
@property (retain, nonatomic) AWEUserLoginThirdLoginDataController *thirdDataController;
@property (retain, nonatomic) AWEUITextLoadingView *thirdLoginLoadingView;
@property (nonatomic) BOOL needRecoverThirdLoginLoading;
@property (nonatomic) BOOL isThirdLoginRequesting;
@property (nonatomic) BOOL hasHandledThirdOpenUrl;
@property (nonatomic) BOOL isShowActionSheet;
@property (nonatomic) BOOL isOverseaLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ otherClickAction;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (void)actionSheetDidClickCancelButton:(id)a0;
- (void)actionSheetDidClickMaskArea:(id)a0;
- (void)willActionSheetDismiss:(id)a0;
- (void)handleThirdLoginOpenURL;
- (void)handleThirdLoginInAppAuth;
- (void)setupComponentView;
- (id)initWithLoginViewModel:(id)a0;
- (void)dataControllerTrackLoginEvent:(long long)a0;
- (void)dataControllerTrackLoginEvent:(long long)a0 error:(id)a1;
- (void)dataControllerUpdateLoginRequestStatus:(long long)a0;
- (void)dataControllerUpdateNextPushVC:(id)a0;
- (void)showOtherLoginActionSheet;
- (id)onShowThirdPlatforms;
- (void)showThirdLoginLoadingIfNeed;
- (void)dismissThirdLoginLoadingIfNeed;
- (void)setupOverseaComponentView;
- (BOOL)useTextBottomUtil;
- (void)setupTextComponentView;
- (void)setupIconComponentView;
- (BOOL)isInEmailStyleLogin;
- (void)handleAddViewAction:(long long)a0;
- (void)clickLoginWithPlatform:(unsigned long long)a0;
- (void)pushToEmailCodeLoginPage;
- (void)thirdLoginViewRequestLoginWithPlatform:(unsigned long long)a0;
- (void)clickEmailLogin;
- (void)clickEmailCodeLogin;
- (void)checkPlatform:(unsigned long long)a0;
- (void)pushToEmailLoginPage;
- (id)createEmailViewController;
- (void)startThirdLogin;
- (void)endThirdLogin;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)appWillResignActive:(id)a0;
- (unsigned long long)componentType;
- (void)dealloc;
- (void)appDidBecomeActive:(id)a0;
- (id)componentView;
- (void)viewDidDisappear;

@end
