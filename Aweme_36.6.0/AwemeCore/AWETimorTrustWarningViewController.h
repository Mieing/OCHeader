@class NSString, UIImageView, UILabel, UIView, UIButton;

@interface AWETimorTrustWarningViewController : UIViewController

@property (retain, nonatomic) UILabel *title1;
@property (retain, nonatomic) UILabel *title2;
@property (retain, nonatomic) NSString *title1Detail;
@property (retain, nonatomic) NSString *title2Detail;
@property (retain, nonatomic) NSString *contentDetail;
@property (retain, nonatomic) UILabel *content;
@property (retain, nonatomic) UIView *warningView;
@property (retain, nonatomic) UIImageView *warningImage;
@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UIButton *continueBtn;
@property (retain, nonatomic) UIButton *closeBtn;
@property (retain, nonatomic) NSString *appName;
@property (nonatomic) long long trustLevel;
@property (copy, nonatomic) id /* block */ completion;

- (id)initWithAppName:(id)a0 trustLevel:(long long)a1 title1:(id)a2 title2:(id)a3 content:(id)a4;
- (void)continueBtnOnClicked;
- (void)closeBtnOnClicked;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)createUI;

@end
