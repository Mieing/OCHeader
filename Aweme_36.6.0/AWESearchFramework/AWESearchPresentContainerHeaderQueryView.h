@class UIImageView, UILabel, UIView;

@interface AWESearchPresentContainerHeaderQueryView : AWESearchPresentContainerHeaderView

@property (retain, nonatomic) UIImageView *magnifierView;
@property (retain, nonatomic) UILabel *keywordLabel;
@property (retain, nonatomic) UILabel *keywordLabelPostfix;
@property (retain, nonatomic) UIView *closeButton;
@property (retain, nonatomic) UIImageView *closeButtonImage;
@property (retain, nonatomic) UIView *lineView;

- (void)configureUIWithConfig:(id)a0;
- (void)setupTheme:(unsigned long long)a0;
- (void)configureQueryText:(id)a0;
- (void).cxx_destruct;

@end
