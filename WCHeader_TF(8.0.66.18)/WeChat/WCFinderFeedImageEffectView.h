@class WCFinderAnimationLoadingView, UIVisualEffectView, UIImageView, UILabel;
@protocol WCFinderFeedImageViewProtocol;

@interface WCFinderFeedImageEffectView : UIView

@property (retain, nonatomic) UIVisualEffectView *visualView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UIImageView *retryImageView;
@property (retain, nonatomic) UILabel *retryLabel;
@property (weak, nonatomic) id<WCFinderFeedImageViewProtocol> delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (void)initSubView;
- (void)layoutSubviews;
- (void)setRetryVisible:(BOOL)a0;
- (void)onStateOfLoading;
- (void)onStateOfNormal;
- (void)onStateOfError;
- (void)onClickRetry:(id)a0;
- (void).cxx_destruct;

@end
