@class NSString, UIImageView, UIImage, UILabel, UIView, UIButton;

@interface IESLiveScreencastAPNSAlertController : UIViewController

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descLabel;
@property (retain, nonatomic) UIImageView *descImageView;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UIView *horizontalLine;
@property (retain, nonatomic) UIView *verticalLine;
@property (copy, nonatomic) id /* block */ leftAction;
@property (copy, nonatomic) id /* block */ rightAction;
@property (copy, nonatomic) NSString *titleStr;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic) NSString *leftTitle;
@property (copy, nonatomic) NSString *rightTitle;
@property (retain, nonatomic) UIImage *image;
@property (nonatomic) BOOL isAdaption;

+ (id)showWithTitle:(id)a0 message:(id)a1 image:(id)a2 leftTitle:(id)a3 rightTitle:(id)a4 leftAction:(id /* block */)a5 rightAction:(id /* block */)a6;
+ (id)showScreenShotGuideAlertWithTitle:(id)a0 message:(id)a1 image:(id)a2 leftTitle:(id)a3 rightTitle:(id)a4 leftAction:(id /* block */)a5 rightAction:(id /* block */)a6 animation:(BOOL)a7;

- (id)initWithTitle:(id)a0 message:(id)a1 image:(id)a2 leftTitle:(id)a3 rightTitle:(id)a4 leftAction:(id /* block */)a5 rightAction:(id /* block */)a6;
- (void)clickedLeftButton:(id)a0;
- (void)clickedRightButton:(id)a0;
- (id)createSparator;
- (void)dismissAlertWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupViews;

@end
