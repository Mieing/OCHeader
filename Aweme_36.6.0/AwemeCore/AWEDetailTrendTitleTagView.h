@class UIStackView, CAGradientLayer, UIImageView, UILabel, UIView;

@interface AWEDetailTrendTitleTagView : UIView

@property (retain, nonatomic) UIImageView *leftIcon;
@property (retain, nonatomic) UIImageView *rightIcon;
@property (retain, nonatomic) UILabel *midLabel;
@property (retain, nonatomic) UIStackView *containerView;
@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) CAGradientLayer *backgroundLayer;
@property (retain, nonatomic) UIView *leftSpaceView;

- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;

@end
