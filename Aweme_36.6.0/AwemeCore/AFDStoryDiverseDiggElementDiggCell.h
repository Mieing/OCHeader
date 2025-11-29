@class BDImageView;

@interface AFDStoryDiverseDiggElementDiggCell : UICollectionViewCell

@property (retain, nonatomic) BDImageView *imageView;

- (void)performLayerAnimation;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (void)updateWithModel:(id)a0;

@end
