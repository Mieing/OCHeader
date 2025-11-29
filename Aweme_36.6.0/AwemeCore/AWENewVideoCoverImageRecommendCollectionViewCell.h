@class AWENewVideoCoverImageSliderPreviewView;

@interface AWENewVideoCoverImageRecommendCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) AWENewVideoCoverImageSliderPreviewView *previewImageView;

+ (id)identifier;

- (void)configWithImageInfo:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
