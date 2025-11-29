@class UILabel, UIView, MMWebImageView;

@interface MMLiveKtvReverbCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) MMWebImageView *iconImageView;
@property (retain, nonatomic) UILabel *label;
@property (retain, nonatomic) UIView *borderView;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)updateWithImageUri:(id)a0 name:(id)a1 isSelected:(BOOL)a2;
- (void).cxx_destruct;

@end
