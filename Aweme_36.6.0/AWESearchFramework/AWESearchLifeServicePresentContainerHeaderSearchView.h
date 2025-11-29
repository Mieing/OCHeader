@class UIImageView, UIView, UILabel, UIButton;

@interface AWESearchLifeServicePresentContainerHeaderSearchView : AWESearchPresentContainerHeaderView

@property (retain, nonatomic) UIView *uiSearchBar;
@property (retain, nonatomic) UIButton *closeButton;
@property (retain, nonatomic) UIImageView *magnifierImageView;
@property (retain, nonatomic) UILabel *keywordLabel;
@property (retain, nonatomic) UIView *lineView;

- (void)configureUIWithConfig:(id)a0;
- (void)setupTheme:(unsigned long long)a0;
- (void)configureQueryText:(id)a0;
- (void).cxx_destruct;

@end
