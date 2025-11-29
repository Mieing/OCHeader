@class UIImageView;

@interface AWEECOMIMChatSearchResultPhotoVideoListCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverView;
@property (retain, nonatomic) UIImageView *playView;

+ (id)identifier;
+ (struct CGSize { double x0; double x1; })cellSize;

- (void)configCellWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
