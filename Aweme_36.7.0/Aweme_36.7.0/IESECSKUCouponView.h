@class NSArray, IESECTagsContainerView;

@interface IESECSKUCouponView : UIView

@property (retain, nonatomic) IESECTagsContainerView *tagsContainer;
@property (copy, nonatomic) NSArray *couponTags;

- (void)p_setupCurrentCouponViewForOptimize;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
