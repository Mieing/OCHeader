@class CAGradientLayer, MMUIActivityIndicatorView, UILabel, UIView, UIButton;

@interface MMFinderLiveConnectMicUserAnchorPkNotificationView : UIView

@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (nonatomic) double gradientLayerTransparentLocation;
@property (retain, nonatomic) UILabel *pkLabel;
@property (retain, nonatomic) UILabel *pkSubLabel;
@property (retain, nonatomic) UIButton *pkButton;
@property (retain, nonatomic) MMUIActivityIndicatorView *pkLoadingView;
@property (nonatomic) unsigned long long pkState;
@property (nonatomic) unsigned long long direction;
@property (copy, nonatomic) id /* block */ actionBlock;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initViews;
- (void)layoutSubviews;
- (void)updateWithPkInfo:(id)a0;
- (void)refreshGradient;
- (void)showButtonLoading:(BOOL)a0;
- (void).cxx_destruct;

@end
