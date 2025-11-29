@class CAGradientLayer, NSString, UILabel, UIView;

@interface AWETirpHeaderTagView : UIView

@property (retain, nonatomic) UIView *bgView;
@property (retain, nonatomic) UILabel *tabTitleLabel;
@property (retain, nonatomic) CAGradientLayer *commonGradientLayer;
@property (retain, nonatomic) CAGradientLayer *specialGradientLayer;
@property (retain, nonatomic) CAGradientLayer *textGradientLayer;
@property (copy, nonatomic) NSString *specialString;
@property (copy, nonatomic) NSString *textString;
@property (nonatomic) BOOL selected;
@property (copy, nonatomic) id /* block */ selectAction;

- (void)onClickAction;
- (void)parseGradient:(id)a0 completion:(id /* block */)a1;
- (BOOL)checkPointInvalidWithStartPoint:(struct CGPoint { double x0; double x1; })a0 endPoint:(struct CGPoint { double x0; double x1; })a1;
- (void)setSpecialTextColor;
- (void)updateLayout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setTitleText:(id)a0;
- (void)setupUI;

@end
