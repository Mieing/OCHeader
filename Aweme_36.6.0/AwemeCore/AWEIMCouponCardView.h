@class YYLabel, UIButton, UIImageView, AWEIMCouponCardDiscountView, AWEIMCouponListItemViewModel;
@protocol AWEIMCouponCardViewDelegate;

@interface AWEIMCouponCardView : UIView

@property (retain, nonatomic) AWEIMCouponListItemViewModel *viewModel;
@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UIImageView *recommendIconImageView;
@property (retain, nonatomic) AWEIMCouponCardDiscountView *discountView;
@property (retain, nonatomic) YYLabel *detailLabel;
@property (retain, nonatomic) UIButton *functionButton;
@property (weak, nonatomic) id<AWEIMCouponCardViewDelegate> delegate;

- (void)__setupUI;
- (double)__iconHeight;
- (void)__updateIconWithViewModel:(id)a0;
- (void)__updateCouponInfoWithWithViewModel:(id)a0;
- (void)__updateFunctionButtonWithViewModel:(id)a0;
- (void)__handlFunctionButtonclicked:(id)a0;
- (void)configWithViewModel:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
