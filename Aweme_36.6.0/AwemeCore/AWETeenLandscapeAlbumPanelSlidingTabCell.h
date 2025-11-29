@class UILabel, UIView;

@interface AWETeenLandscapeAlbumPanelSlidingTabCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *tabTitle;
@property (retain, nonatomic) UIView *indicatorView;

+ (struct CGSize { double x0; double x1; })cellSizeWithTitle:(id)a0 andFont:(id)a1;

- (void)p_setupViews;
- (void)p_layoutViews;
- (void)configCellWithTabTitle:(id)a0;
- (void).cxx_destruct;
- (void)setSelected:(BOOL)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
