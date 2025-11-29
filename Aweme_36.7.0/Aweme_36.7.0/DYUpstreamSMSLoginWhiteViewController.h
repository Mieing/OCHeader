@class UIView, NSString, DYPhoneNumberModel, AWEUITextLoadingView, DYUserProtocolView, UIButton, DYRouterModel, UILabel;

@interface DYUpstreamSMSLoginWhiteViewController : UIViewController

@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UILabel *firstTipNameLabel;
@property (retain, nonatomic) UILabel *firstTipValueLabel;
@property (retain, nonatomic) UIView *firstTipLine;
@property (retain, nonatomic) UILabel *secondTipNameLabel;
@property (retain, nonatomic) UIView *secondTipLine;
@property (retain, nonatomic) UIButton *secondTipValueLabel;
@property (retain, nonatomic) DYUserProtocolView *protocolView;
@property (retain, nonatomic) UIButton *submitBtn;
@property (retain, nonatomic) UIButton *editSMSBtn;
@property (retain, nonatomic) UILabel *tipLabel;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *targetPhoneNumber;
@property (copy, nonatomic) DYPhoneNumberModel *curPhoneNumber;
@property (copy, nonatomic) NSString *verifyTicket;
@property (nonatomic) unsigned long long countdown;
@property (retain, nonatomic) AWEUITextLoadingView *loadingView;
@property (nonatomic) BOOL forBindLogin;
@property (copy, nonatomic) NSString *profileKey;
@property (nonatomic) unsigned long long targetPlaform;
@property (nonatomic) unsigned long long clickMsgDoneCount;
@property (nonatomic) double lastClickMsgDoneTime;
@property (retain, nonatomic) DYRouterModel *routerModel;
@property (copy, nonatomic) NSString *enterUrl;

+ (Class)aAWEUserModuleConfigCommonAdapterClass;

- (void)countDown:(id)a0;
- (void)backAction:(id)a0;
- (id)aAWEUserModuleConfigCommonAdapter;
- (void)helpAction;
- (void)submitAction:(id)a0;
- (void)updateSubmitButtonWithCountdown:(unsigned long long)a0;
- (BOOL)copyPhoneNumberToClipboard;
- (void)editSMSAction:(id)a0;
- (id)initForBindLoginWithSMSContent:(id)a0 curPhoneNumber:(id)a1 platform:(unsigned long long)a2 targetPhoneNumber:(id)a3 verifyTicket:(id)a4 profileKey:(id)a5 contextModel:(id)a6;
- (id)initForCommonLoginWithSMSContent:(id)a0 curPhoneNumber:(id)a1 targetPhoneNumber:(id)a2 verifyTicket:(id)a3 contextModel:(id)a4;
- (id)initWithSMSContent:(id)a0 curPhoneNumber:(id)a1 targetPhoneNumber:(id)a2 verifyTicket:(id)a3 contextModel:(id)a4;
- (void)receiveNoteDidEnterBackground;
- (void)realSubmitActionWithCount:(unsigned long long)a0 completion:(id /* block */)a1;
- (BOOL)checkIsConfirmed;
- (void).cxx_destruct;
- (long long)preferredStatusBarStyle;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupNotifications;

@end
