@class UIImageView;

@interface ACCImageAlbumThumbnailListItemCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) double imageViewWidth;

+ (id)cellIdentifier;

- (void)updateUIWithSeletedStatus:(BOOL)a0;
- (void)setupViewsWithWidth:(double)a0;
- (void)updateWithImage:(id)a0 isSelected:(BOOL)a1 index:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
