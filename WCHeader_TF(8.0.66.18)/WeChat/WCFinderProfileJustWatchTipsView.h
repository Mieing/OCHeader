@class MMUIActivityIndicatorView, UIImageView, UILabel, UIButton;
@protocol WCFinderProfileJustWatchTipsViewDelegate;

@interface WCFinderProfileJustWatchTipsView : UIView

@property (retain, nonatomic) UIButton *backgroundButton;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (nonatomic) long long style;
@property (weak, nonatomic) id<WCFinderProfileJustWatchTipsViewDelegate> delegate;
@property (copy, nonatomic) id /* block */ action;

- (id)init;
- (void)setupSubViews;
- (void)showTitleLabel:(id)a0;
- (void)showLoadingView;
- (void)doLayoutSubviews;
- (BOOL)isLoadingViewShowing;
- (void)reCreateRoundCornersLayer;
- (void)onBackgroundButtonClick;
- (void).cxx_destruct;

@end
