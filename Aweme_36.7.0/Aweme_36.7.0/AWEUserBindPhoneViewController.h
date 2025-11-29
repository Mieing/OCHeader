@class DYASecurityTicketModel, UIImageView, DUXButton, UILabel, NSDictionary, BDXBridgeEventSubscriber;

@interface AWEUserBindPhoneViewController : UIViewController

@property (retain, nonatomic) UIImageView *avatar;
@property (retain, nonatomic) UILabel *nickNameLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) DUXButton *confirmBtn;
@property (retain, nonatomic) DUXButton *closeBtn;
@property (retain, nonatomic) DYASecurityTicketModel *ticket;
@property (copy, nonatomic) NSDictionary *authInfo;
@property (retain, nonatomic) BDXBridgeEventSubscriber *bindConflictSubscriber;

- (void)trackEvent:(id)a0 withParams:(id)a1;
- (void)clickClose;
- (void)setupNav;
- (void)bindAciton;
- (void)clickNotLogin;
- (id)initWithTicket:(id)a0 authInfo:(id)a1;
- (void).cxx_destruct;
- (void)closeAction;
- (void)viewDidLoad;
- (void)dealloc;
- (void)setupUI;

@end
