@class NSString, UIImageView, UIView, UILabel, UIButton;

@interface AWEQRCodeLoginCoreViewController : UIViewController

@property (nonatomic) long long qrcodeState;
@property (copy, nonatomic) NSString *token;
@property (nonatomic) BOOL isLoginSuccess;
@property (retain, nonatomic) UIView *qrBorderView;
@property (retain, nonatomic) UIImageView *qrCodeImageView;
@property (retain, nonatomic) UIImageView *stateIconView;
@property (retain, nonatomic) UILabel *stateLabel;
@property (retain, nonatomic) UIButton *refreshBtn;

- (void)checkQRConnect;
- (void)loadRQCodeImage;
- (void)monitorQRLoginResult:(unsigned long long)a0;
- (void)monitorGetQRImage:(id)a0 error:(id)a1 invalidImage:(int)a2;
- (void)updateStateText:(id)a0 icon:(id)a1;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)dealloc;

@end
