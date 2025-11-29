@class NSString, UIImageView, UILabel, UIButton;

@interface MMFinderLiveMultiCouponReceiverView : MMFinderLiveMultiCouponView <MMFinderLiveCouponItemObserver>

@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UILabel *validityPeriodLabel;
@property (retain, nonatomic) UILabel *restrictLabel;
@property (retain, nonatomic) UIImageView *restrictIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)preferHeightForCoupon:(id)a0 width:(double)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)onActionButtonClicked;
- (void)fillWithCouponItem:(id)a0;
- (void)onCouponDidUpdate:(id)a0;
- (void)setActionButtonHidden:(BOOL)a0;
- (void).cxx_destruct;

@end
