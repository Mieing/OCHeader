@class NSString, UIView, DYCreateSubAccountBeforeRegisterModel;
@protocol AWECreateSubAccountViewProtocol;

@interface AWECreateSubAccountViewController : AWEHalfScreenBaseViewController <AWECreateSubAccountViewDelegate, AWEUserMessage>

@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) id /* block */ deallocAction;
@property (copy, nonatomic) id /* block */ addAccountAction;
@property (retain, nonatomic) DYCreateSubAccountBeforeRegisterModel *beforeRegisterModel;
@property (retain, nonatomic) UIView<AWECreateSubAccountViewProtocol> *createSubAccountView;
@property (nonatomic) long long createSubAccountViewStyle;
@property (retain, nonatomic) NSString *source;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)tryCreateSubAccountWith:(id /* block */)a0 checkCantRegisterReason:(BOOL)a1 viewStyle:(long long)a2;
+ (void)tryCreateSubAccountWith:(id /* block */)a0 checkCantRegisterReason:(BOOL)a1 viewStyle:(long long)a2 source:(id)a3;
+ (id)showLoadingOnView:(id)a0;
+ (Class)aAWEUserModuleServiceCommonAdapterClass;
+ (BOOL)checkCreateSubAccount;
+ (void)showAlertDialogWithReason:(id)a0 primary:(id)a1 primaryAction:(id /* block */)a2 secondary:(id)a3 secondaryAction:(id /* block */)a4;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)didFinishLoginWithUid:(id)a0;
- (id)panelType;
- (BOOL)disablePanGes;
- (BOOL)onlyTopCornerClips;
- (void)addAccountWithType:(id)a0;
- (void)createAccount;
- (void)closeAccountView;
- (id)initWithEnterFrom:(id)a0 deallocAction:(id /* block */)a1 addAccountAction:(id /* block */)a2 beforeRegisterModel:(id)a3 viewStyle:(long long)a4 source:(id)a5;
- (void)createAccountAction;
- (void)createAccountNext:(id)a0;
- (void)createAccountErrorShowVerifyAlertWithStartTime:(double)a0 networkFinishedTime:(double)a1 error:(id)a2;
- (void)pushToDetailControllerWithTicket:(id)a0 startTime:(double)a1 networkFinishedTime:(double)a2 error:(id)a3 shouldSendTrack:(BOOL)a4;
- (void)trackUcMobileUsableCheckClickWithClickType:(id)a0;
- (void)trackUcMobileUsableCheckShow;
- (id)aAWEUserModuleServiceCommonAdapter;
- (void)refreshBeforeRegisterModel;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (unsigned long long)viewStyle;
- (double)cornerRadius;
- (long long)layoutStyle;
- (unsigned long long)animationStyle;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;
- (void)dismiss:(id /* block */)a0;
- (double)containerHeight;
- (double)containerWidth;

@end
