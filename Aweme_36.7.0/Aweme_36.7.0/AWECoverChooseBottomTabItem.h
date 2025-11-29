@class UILabel, UIView;

@interface AWECoverChooseBottomTabItem : UIButton

@property (readonly, nonatomic) UILabel *label;
@property (readonly, nonatomic) UIView *lineView;
@property (readonly, nonatomic) double contentWidth;

- (void).cxx_destruct;
- (void)setOn:(BOOL)a0;
- (id)initWithTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
