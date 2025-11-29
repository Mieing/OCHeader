@class UIButton, DUXBaseLabel;

@interface CAKAlbumSearchFooterView : UICollectionReusableView

@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) DUXBaseLabel *titleLabel;

- (void)configWithTitle:(id)a0 actionButtonTitle:(id)a1 actionButtonFont:(id)a2;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
