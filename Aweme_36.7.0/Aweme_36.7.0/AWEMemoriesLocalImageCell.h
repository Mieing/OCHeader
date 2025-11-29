@class UIImageView, NSString, AWEMemoriesPlayerTileModel;

@interface AWEMemoriesLocalImageCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (nonatomic) int imageRequestID;
@property (copy, nonatomic) NSString *localIdentifier;
@property (retain, nonatomic) AWEMemoriesPlayerTileModel *tileModel;

- (void)didEndDisplay;
- (void)p_setupUI;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
