@class UILabel;

@interface AWEIronManLandingPageSearchHistoryCollectionCell : UICollectionViewCell

@property (retain, nonatomic) UILabel *textLabel;
@property (nonatomic) BOOL useV2;

- (void)awe_themeDidChange:(long long)a0;
- (void)useV2Style;
- (double)preferedWidthForText:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateText:(id)a0;
- (void)setUpUI;

@end
