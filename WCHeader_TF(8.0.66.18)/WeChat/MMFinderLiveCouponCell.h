@class MMFinderLiveMultiCouponView;
@protocol MMFinderLiveCouponViewDelegate;

@interface MMFinderLiveCouponCell : MMMultiMenuTableViewCell

@property (nonatomic) long long style;
@property (retain, nonatomic) MMFinderLiveMultiCouponView *couponView;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } padding;
@property (weak, nonatomic) id<MMFinderLiveCouponViewDelegate> delegate;

+ (id)identifier;
+ (double)getCellHeightWithCoupon:(id)a0 style:(long long)a1 padding:(struct UIEdgeInsets { double x0; double x1; double x2; double x3; })a2 width:(double)a3;
+ (Class)contentClassWithStyle:(long long)a0;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)fillWithViewModel:(id)a0;
- (void).cxx_destruct;

@end
