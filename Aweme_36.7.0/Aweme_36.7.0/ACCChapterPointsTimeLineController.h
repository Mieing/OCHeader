@class NSString, ACCChapterTimeLineController, ACCChapterPointsTimeLineAdjustView, DVETrackPanelContext, UIView, UIViewController;
@protocol _TtP9AWELottie13AWELottieView_, ACCChapterPointsTimeLineAdjustViewDelegate;

@interface ACCChapterPointsTimeLineController : NSObject <ACCChapterHintAnimationDelegate>

@property (weak, nonatomic) UIViewController *viewController;
@property (retain, nonatomic) UIView *view;
@property (retain, nonatomic) DVETrackPanelContext *trackPanelContext;
@property (retain, nonatomic) UIView *playPointView;
@property (retain, nonatomic) ACCChapterTimeLineController *timelineController;
@property (retain, nonatomic) ACCChapterPointsTimeLineAdjustView *adjustView;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *dragAnimationView;
@property (retain, nonatomic) UIView<_TtP9AWELottie13AWELottieView_> *pinchAnimationView;
@property (nonatomic) long long status;
@property (weak, nonatomic) id<ACCChapterPointsTimeLineAdjustViewDelegate> timeAdjustDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateProgress:(double)a0 animated:(BOOL)a1;
- (void)removeChapterPointTimestamp:(long long)a0;
- (void)addChapterPointTimestamp:(long long)a0;
- (void)removeAllChapters;
- (void)stopPinchAnimation;
- (void)stopDragAnimation;
- (void)showPinchAnimation;
- (void)updateTrackPanelContext:(id)a0;
- (id)initWithTrackPanelContext:(id)a0 viewController:(id)a1;
- (void)updateChapterPointsEditBottomStatus:(long long)a0;
- (void)updateHandlerViews;
- (void)updateProgress:(double)a0 animated:(BOOL)a1 needAdjustTimeLine:(BOOL)a2;
- (id)lottieDictFromGeckoWithName:(id)a0;
- (id)lottieUrlWithName:(id)a0;
- (BOOL)enableDisplayAnimation;
- (void)showDragAnimation;
- (void)p_setupUI;
- (void).cxx_destruct;

@end
