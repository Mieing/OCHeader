@class UILabel, UIImageView, UIView;

@interface AWEPlayInteractionDislikeMaskController : AWEPlayInteractionBaseController

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UILabel *hintLabel;
@property (retain, nonatomic) UIView *withdrawButton;
@property (retain, nonatomic) UIView *withdrawContentView;
@property (retain, nonatomic) UIImageView *withdrawIcon;
@property (retain, nonatomic) UILabel *withdrawLabel;
@property (retain, nonatomic) UIView *scrollTipContainerView;
@property (retain, nonatomic) UILabel *scrollTipLabel;
@property (retain, nonatomic) UIImageView *scrollTipIcon;

- (void)trackShow;
- (void)setupNotification;
- (void)didClickWithdraw:(id)a0;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (void)reset;
- (void)viewDidLoad;
- (void)setupUI;

@end
