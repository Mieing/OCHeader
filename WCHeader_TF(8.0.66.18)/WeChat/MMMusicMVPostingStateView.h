@class MMUIActivityIndicatorView, UIImageView, UILabel, UITapGestureRecognizer;

@interface MMMusicMVPostingStateView : UIView

@property (retain, nonatomic) MMUIActivityIndicatorView *postingIndicator;
@property (retain, nonatomic) UILabel *tooltipLabel;
@property (retain, nonatomic) UIImageView *failedImageView;
@property (retain, nonatomic) UIImageView *retryImageView;
@property (retain, nonatomic) UILabel *retryLabel;
@property (retain, nonatomic) UITapGestureRecognizer *tapGesture;
@property (nonatomic) unsigned long long state;
@property (copy, nonatomic) id /* block */ onTappedRetry;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)refreshSubviews;
- (void)layoutSubviews;
- (void)sizeToFit;
- (void)handleTapGesture;
- (void).cxx_destruct;

@end
