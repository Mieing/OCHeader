@class UIView, MMLiveKtvThemeItem, MMWebImageView;

@interface MMLiveKtvThemesSelectionCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) MMWebImageView *thumbnailImageView;
@property (retain, nonatomic) UIView *selectionBorderView;
@property (retain, nonatomic) MMLiveKtvThemeItem *theme;

+ (id)reuseId;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setSelected:(BOOL)a0;
- (void)prepareForReuse;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
