@class WCFinderAnimationLoadingView, UIImageView, WCFinderComment, MMUIButton;
@protocol WCFinderCommentImageViewDelegate;

@interface WCFinderCommentImageView : MMUIView

@property (retain, nonatomic) UIImageView *imageView;
@property (retain, nonatomic) WCFinderAnimationLoadingView *loadingTipsView;
@property (retain, nonatomic) WCFinderComment *comment;
@property (retain, nonatomic) MMUIButton *retryBtn;
@property (weak, nonatomic) id<WCFinderCommentImageViewDelegate> delegate;

- (id)initWithCoder:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)setImageViewContentMode:(long long)a0;
- (void)updateWithFinderImageComment:(id)a0;
- (id)checkImageExistedWithUri:(id)a0 token:(id)a1 size:(struct CGSize { double x0; double x1; })a2;
- (id)downloadImageIfNeededWithUri:(id)a0 token:(id)a1 imgSize:(struct CGSize { double x0; double x1; })a2;
- (void)setState:(unsigned long long)a0;
- (id)getFeedId;
- (id)displayingImage;
- (void)onClickImageView;
- (void)onClickRetryButton;
- (void).cxx_destruct;

@end
