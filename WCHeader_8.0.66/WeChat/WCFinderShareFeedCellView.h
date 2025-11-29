@class UIView, MMWebImageView, SightIconView, UIImage, MMUIButton, UIImageView, NSString, WCFinderLiveNowView, CAGradientLayer, WCFinderAuthInfoIconView, WCFinderShareFeedCellViewModel, UILabel;

@interface WCFinderShareFeedCellView : CommonMessageCellView <MMImageLoaderObserver, MMWebImageViewDelegate, ServiceAuthExt, WCFinderZoomAnimatorBehavior, WCFinderShareAbstractCell>

@property (readonly, nonatomic) WCFinderShareFeedCellViewModel *viewModel;
@property (retain, nonatomic) MMWebImageView *avatarImageView;
@property (retain, nonatomic) UILabel *nameLabel;
@property (retain, nonatomic) WCFinderLiveNowView *liveNowView;
@property (retain, nonatomic) UIImageView *contentImageView;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (retain, nonatomic) UIView *separator;
@property (retain, nonatomic) UIImageView *tinyIcon;
@property (retain, nonatomic) UILabel *finderLabel;
@property (retain, nonatomic) SightIconView *playIconView;
@property (retain, nonatomic) UIView *photoCountDotView;
@property (retain, nonatomic) UIImage *fullScreenImage;
@property (retain, nonatomic) WCFinderAuthInfoIconView *authIconView;
@property (retain, nonatomic) MMUIButton *memberFlagButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)layoutContentView;
- (void)layoutDefault;
- (void)layoutPureText;
- (void)layoutBottomViews;
- (id)transitionStartImage;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })transitionStartImageRectInView:(id)a0 willPresent:(BOOL)a1;
- (void)willOpenShareViewController;
- (id)displayViewForImageBrowser;
- (id)zoomAnimatorTransitionSnapView:(id)a0 cornerRaidus:(double *)a1;
- (void)onAnimatorWillBeginExpand:(id)a0;
- (BOOL)zoomAnimiatorShouldCacheSnapView;
- (void)onAnimatorWillBeginClosure:(id)a0;
- (void)onAnimatorDidEndClosure:(id)a0;
- (id)zoomAnimatorKey;
- (id)operationMenuItems;
- (void)onSliencePlay:(id)a0;
- (void)ImageDidLoad:(id)a0 Url:(id)a1;
- (void)onTouchUpInside;
- (BOOL)canResponseTouchNodeView;
- (void)doShareAnimation;
- (void)onAppear;
- (void)onLoadImageOK:(id)a0;
- (void)onOpenService:(unsigned long long)a0 config:(id)a1 error:(id)a2;
- (void).cxx_destruct;

@end
