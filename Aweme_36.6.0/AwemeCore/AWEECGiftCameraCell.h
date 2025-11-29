@class UIImageView, AWEURLModel;

@interface AWEECGiftCameraCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *backgroundImageView;
@property (retain, nonatomic) AWEURLModel *urlModel;
@property (copy, nonatomic) id /* block */ clickBlock;

- (void)p_setupView;
- (void)p_setupLayout;
- (void)tap:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
