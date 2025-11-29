@class DVEEffectValue, UIImageView, UIView;

@interface ACCBrushListBaseCell : UICollectionViewCell

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) DVEEffectValue *brushValue;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) UIImageView *loadingView;

- (void)configCellWithImage:(id)a0 title:(id)a1;
- (void)stopLoadingState;
- (void)configCellWithBrushValue:(id)a0;
- (void)setLoadingState;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
