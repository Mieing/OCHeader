@protocol WCFinderFixAssibilityElementViewDelegate;

@interface WCFinderFixAssibilityElementView : UIView

@property (weak, nonatomic) id<WCFinderFixAssibilityElementViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 delegate:(id)a1;
- (id)accessibilityElements;
- (void).cxx_destruct;

@end
