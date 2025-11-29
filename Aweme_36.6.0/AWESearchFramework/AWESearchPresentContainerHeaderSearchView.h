@class UIImageView, UILabel, UIView;

@interface AWESearchPresentContainerHeaderSearchView : AWESearchPresentContainerHeaderView

@property (retain, nonatomic) UIView *uiSearchBar;
@property (retain, nonatomic) UIImageView *magnifierView;
@property (retain, nonatomic) UILabel *keywordLabel;
@property (retain, nonatomic) UIView *keywordLabelMaskView;
@property (retain, nonatomic) UIView *divider;
@property (retain, nonatomic) UILabel *searchButtonText;
@property (retain, nonatomic) UIView *searchButtonClickView;
@property (retain, nonatomic) UIView *closeButton;
@property (retain, nonatomic) UIImageView *closeButtonImage;
@property (retain, nonatomic) UIView *lineView;

- (void)configureUIWithConfig:(id)a0;
- (void)setupTheme:(unsigned long long)a0;
- (void)configureQueryText:(id)a0;
- (void).cxx_destruct;
- (void)layoutSubviews;

@end
