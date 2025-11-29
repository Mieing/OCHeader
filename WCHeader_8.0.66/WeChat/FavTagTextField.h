@class UIResponder;

@interface FavTagTextField : UITextField

@property (weak, nonatomic) UIResponder *overrideNextResponder;
@property (nonatomic) BOOL isMarking;

- (id)nextResponder;
- (BOOL)canPerformAction:(SEL)a0 withSender:(id)a1;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
