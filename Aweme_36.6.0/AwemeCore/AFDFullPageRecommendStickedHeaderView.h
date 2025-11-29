@class NSString, UIImageView, CAShapeLayer, UILabel, UIView;

@interface AFDFullPageRecommendStickedHeaderView : UIView

@property (retain, nonatomic) UIImageView *searchIcon;
@property (retain, nonatomic) UIView *searchLabelContainerView;
@property (retain, nonatomic) UILabel *searchLabel;
@property (retain, nonatomic) UIView *splitLine;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) NSString *searchWords;
@property (copy, nonatomic) UILabel *placeholderLabel;
@property (copy, nonatomic) id /* block */ searchBarClicked;
@property (copy, nonatomic) id /* block */ searchButtonClicked;

- (void)awe_themeDidChange:(long long)a0;
- (void)clickBarEvent;
- (void)clickButtonEvent;
- (void)updateSearchButtonLabel:(id)a0;
- (void)configSearchWordWithAnchorModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutSubviews;
- (void)setUpUI;

@end
