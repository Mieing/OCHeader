@class AWEFeedGameScrollNumberLabel, AWEFeedInstantGameCouponModel, LOTAnimationView, UILabel, UIView;

@interface AWEFeedGamePromotionContainerView : UIView

@property (retain, nonatomic) UIView *backgroundView;
@property (retain, nonatomic) AWEFeedInstantGameCouponModel *couponModel;
@property (retain, nonatomic) UILabel *titleLeftLabel;
@property (retain, nonatomic) AWEFeedGameScrollNumberLabel *scrollNumberLabel;
@property (retain, nonatomic) UILabel *titleRightLabel;
@property (retain, nonatomic) LOTAnimationView *colorBarLottieView;
@property (retain, nonatomic) LOTAnimationView *couponLottieView;

- (void)setupLayer;
- (id)initWithModel:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setupUI;
- (id)colorFromHexString:(id)a0 alpha:(double)a1;

@end
