@class UILabel;

@interface AWEIronManLandingPageFooterView : UICollectionReusableView

@property (retain, nonatomic) UILabel *noMoreLabel;
@property (retain, nonatomic) UILabel *loadingLabel;
@property (nonatomic) BOOL useV2;

- (void)awe_themeDidChange:(long long)a0;
- (void)setThemeUI;
- (void)showNoMoreView;
- (void)hideNoMoreView;
- (BOOL)isShowingNoMoreLabel;
- (void)useV2Style;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showLoadingView;
- (void)setUpUI;
- (void)hideLoadingView;

@end
