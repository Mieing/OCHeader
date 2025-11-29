@class NSString;

@interface AWEMVLargeCardCellV2 : AWEDCFeedBaseCell <AWEModernFullscreenTransitionOuterContextProvider, AWEMVQualityTrackerProtocol>

@property (nonatomic) BOOL preventContinuePlayIfFromInflow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)elementArray;

- (void)prepareForDisplayWithoutCoverImage;
- (id)modernTransitionContext;
- (void)configWithModel:(id)a0 context:(id)a1;
- (void)modernTransitionUpdateOffset:(long long)a0 isScrolled:(BOOL)a1;
- (void)modernTransitionDidCompleteWithOffset:(long long)a0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithToContext:(id)a0;
- (BOOL)shouldModernTransitionUpdatePlayerControllerWithFromContext:(id)a0;
- (long long)preferScaleMode;
- (BOOL)shouldLayoutBeforeGenerateFeedSnapshotImageView;
- (BOOL)updateScaleModeBeforeAnimation;
- (void)modernMagnifyTransitionDidCompleteWithToContext:(id)a0;
- (BOOL)isHorizontalScreenVideo;
- (BOOL)shouldNotActive;
- (void)seekToPlayTime:(double)a0 completion:(id /* block */)a1;
- (void)screenWillRotate;
- (id)mvPageContext;
- (double)expectCornerRadius;
- (id)imageSceneForQualityTracker;
- (BOOL)canResponseDislikeVCForGesture:(id)a0;
- (void)handleDoubleSpeedWithGesture:(id)a0;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)stop;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)didResignActive;
- (id)videoController;

@end
