@class AWEBasicModeTextLoadingView, UIView;

@interface AWEBasicModeVideoPlayBaseController : AWEBasicModePlayVideoViewController {
    BOOL _isSeeking;
}

@property (retain, nonatomic) UIView *topGradientView;
@property (retain, nonatomic) UIView *bottomGradientView;
@property (retain, nonatomic) UIView *gradientBackgroundView;
@property (retain, nonatomic) UIView *coverTopGradientView;
@property (retain, nonatomic) UIView *coverBottomGradientView;
@property (retain, nonatomic) UIView *videoDeletedView;
@property (retain, nonatomic) AWEBasicModeTextLoadingView *centerLoadingView;
@property (nonatomic) BOOL isAutoPlay;
@property (nonatomic) long long slidingTime;
@property (nonatomic) BOOL isLoading;

- (void)updatePlayerIfNeeded;
- (void)removeFromParentVC;
- (double)topGradientHeight;
- (double)bottomGradientHeight;
- (void)setIsSeeking:(BOOL)a0;
- (void)beginTransitionAnimation;
- (void)setCopyFromOtherVideoController:(BOOL)a0;
- (void)stopLoadingAnimationAction;
- (void)playLoadingAnimationAction;
- (void)p_addGradientViewsIfNeeded;
- (void)p_addCoverGradientView;
- (void)p_addVideoDeletedView;
- (BOOL)isVideoInvalid;
- (id)bottomGradienColor;
- (void).cxx_destruct;
- (BOOL)isSeeking;
- (BOOL)pause:(BOOL)a0;
- (void)reset;
- (void)viewDidLoad;
- (BOOL)play:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (id)topGradientColor;

@end
