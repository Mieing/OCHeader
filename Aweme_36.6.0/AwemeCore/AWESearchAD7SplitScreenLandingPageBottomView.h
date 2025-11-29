@class UITapGestureRecognizer, UIImageView, UILabel, UIView, UIButton;

@interface AWESearchAD7SplitScreenLandingPageBottomView : UIView

@property (retain, nonatomic) UIView *topLineView;
@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UILabel *authorNameLabel;
@property (retain, nonatomic) UILabel *contentDescLabel;
@property (retain, nonatomic) UIButton *conversionButton;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (copy, nonatomic) id /* block */ didClickViewBlock;
@property (copy, nonatomic) id /* block */ didClickTransformButtonBlock;

- (void)updateWithAwemeModel:(id)a0;
- (void)setupTapGesture;
- (void)didClickButton:(id)a0;
- (void)didClickView:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
