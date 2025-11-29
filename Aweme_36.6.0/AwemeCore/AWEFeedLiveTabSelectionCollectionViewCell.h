@class UILabel;

@interface AWEFeedLiveTabSelectionCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long style;
@property (nonatomic) BOOL currentSelected;

+ (id)reuseIdentifier;

- (void)configWithCellModel:(id)a0 style:(long long)a1;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)pointInside:(struct CGPoint { double x0; double x1; })a0 withEvent:(id)a1;
- (void)setupUI;
- (void)updateColor;

@end
