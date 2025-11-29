@class AWEEcommerceSearchTagView, AWEEcommerceSearchStyleLabel, UIView, AWEEcommerceSearchBoxBannerContentModel;

@interface AWEEcommerceSearchBannerIconGroupView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) AWEEcommerceSearchTagView *iconView;
@property (retain, nonatomic) AWEEcommerceSearchStyleLabel *iconTailLab;
@property (nonatomic) long long textAlignment;
@property (retain, nonatomic) AWEEcommerceSearchBoxBannerContentModel *bannerContentModel;

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
