@class MMArrayConverter, UIButton, UIImageView, UILabel, FinderLiveSyncEcCouponInfoResp_PopupInfo;
@protocol MMFinderLiveCouponCardViewDelegate;

@interface MMFinderLiveCouponCardView : UIView

@property (retain, nonatomic) FinderLiveSyncEcCouponInfoResp_PopupInfo *info;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *valueLabel;
@property (retain, nonatomic) MMArrayConverter *subInfoLabels;
@property (retain, nonatomic) UIButton *button;
@property (weak, nonatomic) id<MMFinderLiveCouponCardViewDelegate> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)updateWithInfo:(id)a0;
- (void)onActionButtonClicked;
- (void).cxx_destruct;

@end
