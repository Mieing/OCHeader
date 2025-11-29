@class YYLabel, UIButton, UIImageView, UIView, IESECLiveCouponModel, IESECLiveAnchorCouponCardNumberView;
@protocol IESECLiveAnchorCouponCardDelegate;

@interface IESECLiveAnchorCouponCard : UIView

@property (retain, nonatomic) UIImageView *couponTag;
@property (retain, nonatomic) UIImageView *leftWrapper;
@property (retain, nonatomic) UIImageView *rightWrapper;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) IESECLiveAnchorCouponCardNumberView *discountPrivilege;
@property (retain, nonatomic) IESECLiveAnchorCouponCardNumberView *privilege;
@property (retain, nonatomic) YYLabel *detail;
@property (retain, nonatomic) YYLabel *extra;
@property (retain, nonatomic) UIImageView *logoImageView;
@property (retain, nonatomic) IESECLiveCouponModel *coupon;
@property (retain, nonatomic) UIButton *grant;
@property (weak, nonatomic) id<IESECLiveAnchorCouponCardDelegate> delegate;

- (void)setupUI:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 displayMode:(BOOL)a1;
- (void)setBindingCouponModel:(id)a0;
- (void)grantButtonFired:(id)a0;
- (void)setCouponModel:(id)a0 isBinding:(BOOL)a1 allowGrantingCoupon:(BOOL)a2 grantingMetaIDArray:(id)a3;
- (id)discountTextFromNumber:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
