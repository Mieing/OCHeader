@class UILabel;

@interface WCTextStatusShareScopeBottomView : UIView

@property (retain, nonatomic) UILabel *labelView;

+ (double)heightForShareScopeBottomViewWithWidth:(double)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)initLabelView;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
