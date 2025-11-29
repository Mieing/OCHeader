@class CALayer, UIImage;

@interface MJThumbnailTileCell : UICollectionViewCell

@property (retain, nonatomic) CALayer *imageLayer;
@property (nonatomic) long long taskID;
@property (nonatomic) struct CGSize { double width; double height; } imageSize;
@property (retain, nonatomic) UIImage *image;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
