@class NSString, UILabel;

@interface AWEIronManLandingPageSearchResultHeaderView : UICollectionReusableView

@property (copy, nonatomic) NSString *suffixText;
@property (retain, nonatomic) UILabel *descLabel;

- (void)updateCount:(unsigned long long)a0;
- (void)useV2Style;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setUpUI;

@end
