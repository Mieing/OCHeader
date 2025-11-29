@class UIImageView, UILabel, UIButton;

@interface IESLivePlayerSeekWatchNewButton : UIView

@property (retain, nonatomic) UIImageView *refreshIcon;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *opreationButton;
@property (copy, nonatomic) id /* block */ watchNewButtonClickBlock;

- (id)loadingAnimation;
- (void)setAccessibility;
- (void)watchNewButtonClick;
- (void).cxx_destruct;
- (void)startLoading;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)stopLoading;
- (void)updateTitle:(BOOL)a0;
- (void)createUI;

@end
