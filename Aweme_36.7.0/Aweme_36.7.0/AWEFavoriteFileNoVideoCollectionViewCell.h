@class UIImageView, UILabel;

@interface AWEFavoriteFileNoVideoCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) UIImageView *videoImageView;
@property (retain, nonatomic) UILabel *noVideoLabel;

+ (id)identifier;

- (void)refreshWithProfileExploreStyle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setupUI;

@end
