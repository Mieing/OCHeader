@class UIImageView, AWEImageAlbumAddToCustomImagePickerSelectIndicator;
@protocol AWEImageAlbumAddToCustomImageCollectionViewCellDelegate;

@interface AWEImageAlbumAddToCustomImageCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEImageAlbumAddToCustomImagePickerSelectIndicator *selectIndicator;
@property (weak, nonatomic) id<AWEImageAlbumAddToCustomImageCollectionViewCellDelegate> delegate;
@property (nonatomic) long long index;

+ (id)identifier;

- (void)updateWithSelected:(BOOL)a0;
- (void)configWithImageURLList:(id)a0 selected:(BOOL)a1 isHorizontal:(BOOL)a2;
- (void)configWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleSelection;

@end
