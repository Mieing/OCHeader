@interface AuthorizeCheckBox : UIImageView

@property (copy, nonatomic) id /* block */ selectBlock;
@property (nonatomic) BOOL selected;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)internalInit;
- (void)addSelectAction:(id /* block */)a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void).cxx_destruct;

@end
