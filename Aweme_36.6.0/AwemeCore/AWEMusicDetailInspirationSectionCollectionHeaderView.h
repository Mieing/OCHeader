@class UILabel;

@interface AWEMusicDetailInspirationSectionCollectionHeaderView : UICollectionReusableView

@property (retain, nonatomic) UILabel *headerLabel;

- (void)configWithHeaderTitle:(id)a0;
- (void)updateTitleColor:(id)a0 font:(id)a1;
- (void)setupHeaderLabelTopBlankHeight:(double)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
