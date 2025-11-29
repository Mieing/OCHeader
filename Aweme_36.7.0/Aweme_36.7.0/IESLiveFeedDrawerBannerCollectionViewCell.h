@class IESLiveFeedBannerView;
@protocol HTSLiveFeedItem;

@interface IESLiveFeedDrawerBannerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) IESLiveFeedBannerView *bannerView;
@property (retain, nonatomic) id<HTSLiveFeedItem> item;

- (void)didSetAttachingDIContext;
- (void)refreshLayout:(BOOL)a0;
- (void)updateWithBanners:(id)a0 reference:(id)a1 enterFrom:(id)a2 enterMethod:(id)a3;
- (void).cxx_destruct;
- (void)update:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
