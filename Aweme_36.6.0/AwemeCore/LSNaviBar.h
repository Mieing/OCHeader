@class UIStackView, UIColor, NSArray, UIView;

@interface LSNaviBar : UIView

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UIView *middleContainer;
@property (retain, nonatomic) UIStackView *leftStackView;
@property (retain, nonatomic) UIStackView *rightStackView;
@property (retain, nonatomic) UIView *bottomLineView;
@property (nonatomic) double leftMargin;
@property (nonatomic) double rightMargin;
@property (nonatomic) double itemSpace;
@property (retain, nonatomic) UIColor *bottomLineColor;
@property (retain, nonatomic) UIView *titleView;
@property (retain, nonatomic) UIView *middleView;
@property (copy, nonatomic) NSArray *leftViews;
@property (copy, nonatomic) NSArray *rightViews;

- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
