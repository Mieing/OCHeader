@class UIImageView, UILabel, UIButton;

@interface AWERecordInspirationSearchNoNetworkView : UIView

@property (retain, nonatomic) UIImageView *iconImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *subtitleLabel;
@property (retain, nonatomic) UIButton *refreshButton;
@property (copy, nonatomic) id /* block */ refreshButtonTappedAction;
@property (copy, nonatomic) id /* block */ tappedPageAction;

- (void)onThemeChanged;
- (void)refreshButtonTapped;
- (void)setupConstraints;
- (void).cxx_destruct;
- (id)init;
- (void)touchesEnded:(id)a0 withEvent:(id)a1;
- (void)setupSubviews;

@end
