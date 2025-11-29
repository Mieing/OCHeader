@class MMUILabel, MMUIImageView, MMUIView;

@interface MJShootVisagePanelCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) MMUIImageView *iconImageView;
@property (retain, nonatomic) MMUIView *iconContainerView;
@property (retain, nonatomic) MMUILabel *titleLabel;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupWithItem:(id)a0;
- (void)prepareForReuse;
- (void)reset;
- (void).cxx_destruct;

@end
