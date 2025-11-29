@class UIImageView, UIImage, UIView, UILabel;

@interface ACCVideoListCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *coverImageView;
@property (retain, nonatomic) UIView *coverView;
@property (retain, nonatomic) UIImage *coverImage;
@property (retain, nonatomic) UILabel *timeLabel;

- (void)updateImageViewCornerRadius:(double)a0;
- (void)updateCoverViewHidden:(BOOL)a0;
- (void)setCoverImage:(id)a0 animated:(BOOL)a1;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
