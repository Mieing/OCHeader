@class UIImageView, DVEEffectValue;

@interface DVEBrushListCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) DVEEffectValue *brushValue;

- (void)stopLoadingState;
- (void)setLoadingState;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
