@class UIImageView, UIView;

@interface AWECoverChooseBottomAlbumSliderCell : UICollectionViewCell

@property (readonly, nonatomic) UIView *redView;
@property (readonly, nonatomic) UIView *blackView;
@property (readonly, nonatomic) UIImageView *iconView;

- (void)updateWithImage:(id)a0 selected:(BOOL)a1 index:(unsigned long long)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)p_init;

@end
