@class UIColor, UIView;

@interface TenpayPasswordView : UIView {
    UIView *RoundCell[6];
    long long CurrentInputNum;
    UIColor *FillColor;
    UIColor *EmptyColor;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 bgImage:(id)a1;
- (id)RoundCell:(int)a0;
- (void)SetFillColor:(id)a0 emptyColor:(id)a1;
- (void)SetInputNum:(long long)a0;
- (void)dealloc;

@end
