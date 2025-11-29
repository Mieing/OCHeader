@class UIImageView, UIView;

@interface MMFinderLiveStickerTextTemplateItemCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIImageView *thumbnailView;

+ (id)reuseId;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithTemplateItem:(id)a0;
- (void)setSelected:(BOOL)a0;
- (void)layoutSubviews;
- (void).cxx_destruct;

@end
