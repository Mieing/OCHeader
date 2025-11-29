@class UIImageView, IESECGoodsMarketingFloorModel;
@protocol IESECGoodsBannerActivityDelegate;

@interface IESECGoodsActivityBannerView : UIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) IESECGoodsMarketingFloorModel *bannerActivity;
@property (weak, nonatomic) id<IESECGoodsBannerActivityDelegate> delegate;

- (void)openActivityPage;
- (id)initWithBannerActivity:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
