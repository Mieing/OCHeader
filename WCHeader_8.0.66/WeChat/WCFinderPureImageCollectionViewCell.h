@class UIImage, WCFinderFeedImageView;

@interface WCFinderPureImageCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) WCFinderFeedImageView *imageContainer;
@property (retain, nonatomic) UIImage *bindImage;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void)setImage:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getImageContainerRect;
- (void).cxx_destruct;

@end
