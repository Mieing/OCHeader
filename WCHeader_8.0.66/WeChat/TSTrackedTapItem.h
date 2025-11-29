@interface TSTrackedTapItem : TSTrackedSlideItem

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } rect;
@property (readonly, nonatomic) struct CGPoint { double x0; double x1; } pointRangeOnView;

- (id)initWithTouches:(id)a0 rectage:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
