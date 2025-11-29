@class UIView, UILabel, AWESearchEditPageThemeManager, UIButton;

@interface AWESearchEditPageNaviBar : UIView

@property (retain, nonatomic) UIButton *leftButton;
@property (retain, nonatomic) AWESearchEditPageThemeManager *themeManager;
@property (copy, nonatomic) id /* block */ leftButtonClickBlock;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIView *filterView;

- (void)leftButtonClicked;
- (void).cxx_destruct;
- (id)init;
- (void)layoutSubviews;
- (void)setupSubviews;

@end
