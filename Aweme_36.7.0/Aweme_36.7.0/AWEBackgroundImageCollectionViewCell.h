@class UIImageView;

@interface AWEBackgroundImageCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *imageViewForAdaptation;
@property (retain, nonatomic) UIImageView *pauseView;
@property (nonatomic) BOOL isFullScreen;
@property (nonatomic) BOOL isSmallPhone;

- (void)updateWithImageURL:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
