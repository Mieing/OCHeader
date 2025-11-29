@class UIColor, AWEButton, UIView, NSNumber;

@interface AWEGoodsCouponView : UIView

@property (retain, nonatomic) UIColor *couponBGColor;
@property (retain, nonatomic) UIColor *couponBorderColor;
@property (retain, nonatomic) AWEButton *tipView;
@property (retain, nonatomic) AWEButton *titleView;
@property (retain, nonatomic) UIView *seperatorView;
@property (retain, nonatomic) NSNumber *couponHeight;

- (void)setCouponTitle:(id)a0;
- (void)setCouponTip:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupUI;
- (void)updateUI;

@end
