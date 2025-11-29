@class UIImageView, NSIndexPath, PHAsset;

@interface IESLiveVSPhotoSelectCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *photoImageView;
@property (nonatomic) int requestID;
@property (retain, nonatomic) NSIndexPath *index;
@property (retain, nonatomic) PHAsset *asset;

+ (id)identifier;

- (double)selfwidth;
- (void)updateWithPHAsset:(id)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (struct CGSize { double x0; double x1; })cellSize;

@end
