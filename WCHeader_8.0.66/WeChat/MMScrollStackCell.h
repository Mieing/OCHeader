@class UIView, MMScrollStack;

@interface MMScrollStackCell : UIView

@property (weak, nonatomic) MMScrollStack *stack;
@property (retain, nonatomic) UIView *contentView;
@property (nonatomic) BOOL isHighlightable;
@property (nonatomic) struct UIEdgeInsets { double x0; double x1; double x2; double x3; } padding;
@property (copy, nonatomic) id /* block */ onTap;

- (id)initWithView:(id)a0 stack:(id)a1;
- (void)initView;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesMoved:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)setHighlighted:(BOOL)a0 animated:(BOOL)a1;
- (void).cxx_destruct;

@end
