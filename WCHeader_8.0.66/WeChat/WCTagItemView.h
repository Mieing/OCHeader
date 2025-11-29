@class UIImageView, WCTagItemViewModel, UIView;

@interface WCTagItemView : UIButton

@property (nonatomic) long long lastType;
@property (retain, nonatomic) UIImageView *tagImageView;
@property (retain, nonatomic) UIView *customView;
@property (retain, nonatomic) WCTagItemViewModel *viewModel;
@property (copy, nonatomic) id /* block */ clickAction;

- (id)initWithClickAction:(id /* block */)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;

@end
