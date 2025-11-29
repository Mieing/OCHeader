@class UIImageView, UILabel, UIView;

@interface ACCSideslipOneClickFilmPickIndicatorView : ACCSideslipPropPickIndicatorView

@property (retain, nonatomic) UIView *cutContainerView;
@property (retain, nonatomic) UIImageView *cutIconView;
@property (retain, nonatomic) UILabel *cutLabel;

- (void)showProgress:(BOOL)a0 animated:(BOOL)a1;
- (void)showRetryView:(BOOL)a0;
- (void)showCutView:(BOOL)a0;
- (void)updateCutViewShowStatus;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
