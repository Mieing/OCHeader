@class NSString, UIImageView, UILabel, MMUIButton;
@protocol MMFinderLiveShopShelfCouponsSimpleHeaderViewDelegate;

@interface MMFinderLiveShopShelfCouponsSimpleHeaderView : UIView

@property (retain, nonatomic) UIImageView *couponIconView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (weak, nonatomic) id<MMFinderLiveShopShelfCouponsSimpleHeaderViewDelegate> delegate;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long backMode;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initSubViews;
- (struct CGSize { double x0; double x1; })sizeThatFits:(struct CGSize { double x0; double x1; })a0;
- (void)layoutSubviews;
- (void)onClickLeftButton:(id)a0;
- (void).cxx_destruct;

@end
