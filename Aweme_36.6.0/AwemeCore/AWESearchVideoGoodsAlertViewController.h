@class UIStackView, UIImageView, UIView, UILabel, UIButton;

@interface AWESearchVideoGoodsAlertViewController : UIViewController

@property (retain, nonatomic) UIImageView *headerImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIStackView *stackView;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) UIButton *rightButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *contentLabel;
@property (nonatomic) BOOL authorizationState;

- (void)configUI;
- (void)closeAuthorization:(id)a0;
- (void)closeButtonDidClick:(id)a0;
- (void)openAuthorization:(id)a0;
- (void)closeViewByMethod:(id)a0;
- (void)setupMaskLayer;
- (void)removeButtonCallback;
- (void)setupConstraints;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)setupView;
- (void)updateUI;
- (void)tapGestureHandler:(id)a0;

@end
