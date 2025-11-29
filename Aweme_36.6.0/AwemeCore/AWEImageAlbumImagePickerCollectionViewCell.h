@class UIImageView, UILabel, AWEImageAlbumImagePickerSelectIndicator;
@protocol AWEImageAlbumImagePickerCollectionViewCellDelegate;

@interface AWEImageAlbumImagePickerCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) AWEImageAlbumImagePickerSelectIndicator *selectIndicator;
@property (weak, nonatomic) id<AWEImageAlbumImagePickerCollectionViewCellDelegate> delegate;
@property (nonatomic) long long index;
@property (retain, nonatomic) UILabel *timeLab;
@property (retain, nonatomic) UIImageView *iconImageView;
@property (nonatomic) BOOL isSlides;

+ (id)identifier;

- (void)updateWithSelected:(BOOL)a0;
- (void)configWithImageURLList:(id)a0 selected:(BOOL)a1 isHorizontal:(BOOL)a2;
- (id)timeWithDuration:(id)a0;
- (void)configWithItemExtraInfo:(id)a0;
- (void)configWithImage:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)handleSelection;

@end
