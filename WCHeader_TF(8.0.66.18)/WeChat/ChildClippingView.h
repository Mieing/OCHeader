@class NSArray, NSMutableArray;

@interface ChildClippingView : UIView

@property (copy, nonatomic) NSArray *filters;
@property (retain, nonatomic) NSMutableArray *backdropFilterSubviews;

- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)applyBlurBackdropFilters:(id)a0;
- (void).cxx_destruct;

@end
