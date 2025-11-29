@class UIButton, UIFont, UILabel;

@interface MMFinderLiveMultiCouponSenderView : MMFinderLiveMultiCouponView

@property (class, readonly, nonatomic) UIFont *countWordingFont;

@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UILabel *countLabel;
@property (retain, nonatomic) UILabel *platformLabel;

+ (double)preferHeightForCoupon:(id)a0 width:(double)a1;
+ (id)countWordingForCoupon:(id)a0;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)onActionButtonClicked;
- (void)fillWithCouponItem:(id)a0;
- (void)setActionButtonWithStatus:(int)a0;
- (void)setContainerColor;
- (void)setActionButtonHidden:(BOOL)a0;
- (void).cxx_destruct;

@end
