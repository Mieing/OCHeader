@class NSArray;

@interface IESECSliceAutoLayoutCouponView : IESECSliceXViewElementView

@property (nonatomic) double previousWidth;
@property (copy, nonatomic) NSArray *itemViews;
@property (nonatomic) BOOL needToCheckSubElements;

- (BOOL)setupElementView;
- (BOOL)needToReLayout;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
