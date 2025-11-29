@class UIStackView, NSString, UIImageView, UILabel, UIView;

@interface AWEYapPromotionRPView : UIView

@property (retain, nonatomic) UILabel *subTitleLabel;
@property (retain, nonatomic) UIView *labelContainer;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *iconArea;
@property (retain, nonatomic) UIImageView *icon;
@property (retain, nonatomic) UIStackView *titleStack;
@property (retain, nonatomic) UILabel *statusLabel;
@property (retain, nonatomic) UILabel *titleLabel;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *style;
@property (copy, nonatomic) id /* block */ tapActionBlock;

- (void)p_addGesture;
- (void)p_onTapCard;
- (void)p_oldStyle;
- (void)p_newStyle;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
