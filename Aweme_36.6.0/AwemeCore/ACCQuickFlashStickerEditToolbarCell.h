@class UIImageView, UIImage, UILabel, UIView;

@interface ACCQuickFlashStickerEditToolbarCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *avatarImageView;
@property (retain, nonatomic) UIImageView *selectedIcoonView;
@property (retain, nonatomic) UILabel *userNameLabel;
@property (retain, nonatomic) UIView *loadingLabelFakeView;
@property (retain, nonatomic) UIImage *placeholderImage;

+ (struct CGSize { double x0; double x1; })cellSize;

- (void)configWithUser:(id)a0 isSelected:(BOOL)a1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;

@end
