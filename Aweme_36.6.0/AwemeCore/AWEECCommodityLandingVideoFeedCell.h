@class UIImageView, BDImageView;

@interface AWEECCommodityLandingVideoFeedCell : UICollectionViewCell {
    BDImageView *_imageView;
}

@property (readonly, nonatomic) UIImageView *imageView;

- (void)updateWithAwemeModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupSubviews;

@end
