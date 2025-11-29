@class UILabel;

@interface AWEFeedPauseVideoRelatedCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *titleLabel;

+ (id)abConfig;

- (void)configWithText:(id)a0;
- (BOOL)isBottomTitleStyle;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
