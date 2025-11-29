@class NSString, MMUIImageView;

@interface MMFinderLivePosterStyleImageCell : UICollectionViewCell

@property (retain, nonatomic) NSString *backgroundImageUri;
@property (retain, nonatomic) MMUIImageView *imageView;

+ (id)reuseId;

- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (void)layoutUI;
- (void).cxx_destruct;

@end
