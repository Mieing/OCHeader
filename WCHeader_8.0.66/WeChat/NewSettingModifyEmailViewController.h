@class NSString, UIViewController;
@protocol NewSettingModifyEmailViewControllerDelegate;

@interface NewSettingModifyEmailViewController : MMUIViewController <SettingModifyEmailLogicDelegate, IUpdateProfileMgrExt>

@property (retain, nonatomic) NSString *lastEmail;
@property (retain, nonatomic) UIViewController *currentVC;
@property (nonatomic) int displayType;
@property (weak, nonatomic) id<NewSettingModifyEmailViewControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)showEmailVC:(id)a0 fromVC:(id)a1;
+ (BOOL)isVerify;
+ (int)getDisplayType;

- (id)initWithDisplayType:(int)a0;
- (void)viewDidLoad;
- (void)viewWillBePresented:(BOOL)a0;
- (void)viewDidBePopedOrDismissed:(BOOL)a0;
- (id)navigationBarBackgroundColor;
- (void)onCloseButtonClicked;
- (id)getDisplayVC;
- (id)getDisplayVC:(int)a0;
- (id)getEditEmailViewController;
- (id)getVerifyEmailViewController;
- (id)getBindEmailViewController;
- (void)changeToVerifyEmail;
- (void)changeToEditEmail;
- (void)replaceController:(id)a0 newController:(id)a1;
- (id)getViewController;
- (void)onProfileChange;
- (void).cxx_destruct;

@end
