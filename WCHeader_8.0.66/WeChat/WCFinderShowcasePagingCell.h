@class UILongPressGestureRecognizer, WCFinderShowcasePagingView;

@interface WCFinderShowcasePagingCell : UIView

@property (retain, nonatomic) UILongPressGestureRecognizer *longGesture;
@property (weak, nonatomic) WCFinderShowcasePagingView *owner;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)touchesBegan:(id)a0 withEvent:(id)a1;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)touchesCancelled:(id)a0 withEvent:(id)a1;
- (void)onTap;
- (void).cxx_destruct;

@end
