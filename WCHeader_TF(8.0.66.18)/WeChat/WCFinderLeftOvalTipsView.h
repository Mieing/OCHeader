@class MMUIActivityIndicatorView, UIImageView, UILabel, UIButton;

@interface WCFinderLeftOvalTipsView : UIView

@property (retain, nonatomic) UIButton *backgroundButton;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (copy, nonatomic) id /* block */ action;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)relayoutUI;
- (void)resetRoundCornersLayer;
- (void)onBackgroundButtonClick;
- (void)showTitle:(id)a0 arrowUp:(BOOL)a1;
- (void)showLoadingView;
- (void)hideLoadingViewAndShowPreArrow;
- (BOOL)isLoading;
- (void).cxx_destruct;

@end
