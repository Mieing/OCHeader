@class UIImageView, FavBannerTipBkgView, UILabel, MMUILabel;
@protocol FavWarningBannerViewDelegate;

@interface FavWarningBannerView : UIButton <MFBanner> {
    UILabel *m_textLabel;
    FavBannerTipBkgView *m_bkgView;
    MMUILabel *m_favCapacityMsg;
    UIImageView *m_imageView;
}

@property (weak, nonatomic) id<FavWarningBannerViewDelegate> delegate;
@property (nonatomic) int bannerType;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initUI;
- (void)initText;
- (void)resetFavCapacityMsg;
- (id)getCapacityString;
- (void)relayoutViews;
- (void).cxx_destruct;

@end
