@class UIView, UIPanGestureRecognizer, NSString, CAShapeLayer, UIImageView, MMFinderLiveHomePageBottomPlayerViewModel, WCFinderAuthInfoIconView, RichTextView, MMUILabel, WCFinderHeadImageView, MMUIButton;
@protocol MMFinderLiveHomePageBottomPlayerViewDelegagte;

@interface MMFinderLiveHomePageBottomPlayerView : UIView <WCFinderHeadImageViewDelegate>

@property (retain, nonatomic) UIView *bottomPlayerView;
@property (retain, nonatomic) CAShapeLayer *shapeLayer;
@property (retain, nonatomic) WCFinderHeadImageView *anchorHeadImageView;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) MMUIButton *playButton;
@property (retain, nonatomic) RichTextView *liveTitleLabel;
@property (retain, nonatomic) MMUILabel *liveAnchorNameLabel;
@property (retain, nonatomic) WCFinderHeadImageView *avatarView;
@property (retain, nonatomic) UIImageView *topColorView;
@property (retain, nonatomic) UIView *backgroundView;
@property (weak, nonatomic) UIView *liveView;
@property (weak, nonatomic) UIView *indicatorView;
@property (retain, nonatomic) UIView *liveViewContainerView;
@property (retain, nonatomic) UIView *playerControlView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) UIView *backgroundBlurView;
@property (retain, nonatomic) MMFinderLiveHomePageBottomPlayerViewModel *viewModel;
@property (retain, nonatomic) UIPanGestureRecognizer *panGestureRecognizer;
@property (weak, nonatomic) id<MMFinderLiveHomePageBottomPlayerViewDelegagte> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setup;
- (void)updateBottomPlayerContainerViewFrame;
- (void)layoutSubviews;
- (void)updateAnimationFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layoutAnchorTitle;
- (void)updateBottomPlayerBackgroundView:(id)a0;
- (void)refreshPlayButtonStatus:(unsigned long long)a0;
- (void)updateAuthInfo:(id)a0;
- (void)updateViewModel:(id)a0;
- (void)adjustBottomPlayerContainer;
- (void)onViewDidApear;
- (void)onViewDidDisapear;
- (BOOL)attachLiveView:(id)a0;
- (BOOL)isLiveViewAttached:(id)a0;
- (void)attachIndicatorView:(id)a0;
- (void)onDismissView;
- (id)playerBottomBarBackgroundColor:(id)a0;
- (void)onClickPlayButton:(id)a0;
- (void)finderHeadImageViewLoadUrlImageFinished:(id)a0 image:(id)a1 urlString:(id)a2;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;

@end
