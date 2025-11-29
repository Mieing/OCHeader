@class UIView;

@interface HoneyPaySelectCardTypeCell : MMTableViewCell

@property (retain, nonatomic) UIView *highlightView;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } highlightViewFrame;
@property (nonatomic) double highlightViewCornerRadius;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)updateHighlightView;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
