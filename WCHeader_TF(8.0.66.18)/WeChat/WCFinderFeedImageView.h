@class WCFinderAnimationLoadingView, UIImageView, WCFinderFeedImageViewParams, UILabel;
@protocol WCFinderFeedImageViewProtocol;

@interface WCFinderFeedImageView : UIView

@property (retain, nonatomic) WCFinderFeedImageViewParams *params;
@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingView;
@property (retain, nonatomic) UIImageView *retryImageView;
@property (retain, nonatomic) UILabel *retryLabel;
@property (weak, nonatomic) id<WCFinderFeedImageViewProtocol> delegate;
@property (nonatomic) double imageHeightWidRatio;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 params:(id)a1;
- (void)prepareForReuse;
- (void)initSubView;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateImageViewFrame;
- (void)layoutSubviews;
- (void)setRetryVisible:(BOOL)a0;
- (void)changeFeedImageViewBackgroundColor:(id)a0;
- (void)onStateOfLoading;
- (void)onStateOfNormal:(id)a0;
- (void)onStateOfError;
- (BOOL)isExistImage;
- (void)onClickRetry:(id)a0;
- (void)hiddenLoadingAnimationIfNeeded;
- (void)resumeLoadingAnimationIfNeeded;
- (BOOL)isAnimating;
- (id)getFeedImage;
- (void).cxx_destruct;

@end
