@class UILabel;

@interface AWEDoubleColumnDislikeSectionHeader : UICollectionReusableView

@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long currentBigMode;
@property (nonatomic) BOOL enableDCFeedCardDislikeTitleLargeFont;

+ (id)reuseIdentifier;

- (void)setUIToBigFont:(long long)a0;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshUI;
- (void)setupUI;
- (void)updateTitle:(id)a0;

@end
