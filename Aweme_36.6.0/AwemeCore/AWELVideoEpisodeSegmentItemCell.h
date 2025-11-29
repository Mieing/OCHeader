@class UILabel;

@interface AWELVideoEpisodeSegmentItemCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *label;

- (void)refreshUIWithSelected:(BOOL)a0;
- (void)configWithSelected:(BOOL)a0 title:(id)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;
- (BOOL)isDarkMode;

@end
