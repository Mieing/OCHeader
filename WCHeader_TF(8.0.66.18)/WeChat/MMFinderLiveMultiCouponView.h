@class MMFinderLiveCouponContainerView, NSString, MMWebImageView, UILabel, MMFinderLiveCouponItem;
@protocol MMFinderLiveCouponViewDelegate;

@interface MMFinderLiveMultiCouponView : UIView <MMWebImageViewDelegate, MMFinderLiveCouponViewProtocol>

@property (retain, nonatomic) MMFinderLiveCouponContainerView *backgroundView;
@property (retain, nonatomic) MMWebImageView *tailBackgroundImageView;
@property (retain, nonatomic) MMFinderLiveCouponItem *couponItem;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) UILabel *limitLabel;
@property (nonatomic) BOOL actionButtonHidden;
@property (weak, nonatomic) id<MMFinderLiveCouponViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferHeightForCoupon:(id)a0 width:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)normalFillColor;
- (id)normalStrokeColor;
- (void)setContainerColor;
- (void)layoutSubviews;
- (void)layoutHead;
- (void)layoutMain;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)fillWithCouponItem:(id)a0;
- (void)onLoadImageOK:(id)a0;
- (void).cxx_destruct;

@end
