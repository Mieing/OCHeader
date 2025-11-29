@class UIImageView, IESLiveStickerItemNewModel;

@interface IESLiveStickerCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) IESLiveStickerItemNewModel *model;
@property (nonatomic) BOOL disabled;
@property (nonatomic) long long item;

+ (id)identifier;

- (void)configWithModel:(id)a0;
- (void)addMaskLayer;
- (id)accessibilityLabel;
- (BOOL)isAccessibilityElement;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (unsigned long long)accessibilityTraits;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;

@end
