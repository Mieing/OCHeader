@class NSString, UIImageView, UIView, UILabel, UIButton;

@interface IESGCPNoticeViewController : UIViewController

@property (copy, nonatomic) NSString *imageName;
@property (copy, nonatomic) NSString *titleText;
@property (copy, nonatomic) NSString *descriptionText;
@property (retain, nonatomic) UIView *backgroundMaskView;
@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *descriptionLabel;
@property (retain, nonatomic) UIView *separatorView;
@property (retain, nonatomic) UIButton *confirmButton;
@property (copy, nonatomic) id /* block */ confirmCallback;

+ (id)noticeViewControllerWithImageName:(id)a0 title:(id)a1 description:(id)a2;
+ (id)noticeViewControllerWithImageName:(id)a0 title:(id)a1 description:(id)a2 confirmCallback:(id /* block */)a3;

- (id)initWithImageName:(id)a0 title:(id)a1 description:(id)a2 confirmCallback:(id /* block */)a3;
- (void)handleConfirmAction;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)setupUI;
- (void)setupContent;
- (void)layoutUI;

@end
