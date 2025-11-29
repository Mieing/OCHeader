@class UIButton;

@interface WCRoundSelectionButton : UIView

@property (retain, nonatomic) UIButton *button;
@property (nonatomic) SEL clickAction;
@property (weak, nonatomic) id clickTarget;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (void)layoutSubviews;
- (void)addTarget:(id)a0 clickAction:(SEL)a1;
- (void)setSelected:(BOOL)a0;
- (void)didClick:(id)a0;
- (void).cxx_destruct;

@end
