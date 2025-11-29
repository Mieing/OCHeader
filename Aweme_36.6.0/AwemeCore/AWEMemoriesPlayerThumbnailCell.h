@class NSString, UIImageView, AWEMemoriesPlayerTileModel, UIView;

@interface AWEMemoriesPlayerThumbnailCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *videoThemeLogo;
@property (retain, nonatomic) UIView *maskView;
@property (nonatomic) int imageRequestID;
@property (nonatomic) double screenScale;
@property (copy, nonatomic) NSString *localIdentifier;
@property (retain, nonatomic) AWEMemoriesPlayerTileModel *model;

- (void)updateMaskViewHidden:(BOOL)a0;
- (void)p_setupUI;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })imageSize;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
