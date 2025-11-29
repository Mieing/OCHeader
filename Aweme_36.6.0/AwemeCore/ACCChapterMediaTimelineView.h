@class ACCChapterMediaTimeLineScaleHandler, DVEComplementaryFrameContext, UIPinchGestureRecognizer, ACCChapterMediaTimelineContentView, DVETrackPanelContext, NSString;
@protocol ACCChapterMediaTimelineViewDelegate, ACCChapterHintAnimationDelegate;

@interface ACCChapterMediaTimelineView : UIScrollView <UIScrollViewDelegate>

@property (class, readonly, nonatomic) double centerY;
@property (class, readonly, nonatomic) double centerY2;

@property (retain, nonatomic) DVEComplementaryFrameContext *frameContext;
@property (nonatomic) double lastProgress;
@property (nonatomic) BOOL animating;
@property (nonatomic) BOOL isChapterPoints;
@property (retain, nonatomic) ACCChapterMediaTimeLineScaleHandler *scaleHandler;
@property (retain, nonatomic) UIPinchGestureRecognizer *pinchGesture;
@property (nonatomic) long long status;
@property (retain, nonatomic) ACCChapterMediaTimelineContentView *containerView;
@property (weak, nonatomic) DVETrackPanelContext *context;
@property (weak, nonatomic) id<ACCChapterMediaTimelineViewDelegate> timelineDelegate;
@property (weak, nonatomic) id<ACCChapterHintAnimationDelegate> hintAnimationDelegate;
@property (nonatomic) double previousTimeScale;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupPinchGesture;
- (void)updateProgress:(double)a0 animated:(BOOL)a1;
- (id)initWithContext:(id)a0 isChapterPoints:(BOOL)a1;
- (void)updateContentOffsetByTime:(double)a0 animated:(BOOL)a1;
- (void)contentOffsetDidUpdate:(struct CGPoint { double x0; double x1; })a0;
- (void)teardownPinchGesture;
- (void)updatePinchHandlerStatus:(long long)a0;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)scrollViewWillBeginDragging:(id)a0;
- (double)contentWidth;
- (void)scrollViewDidScroll:(id)a0;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;
- (void)endAnimation;
- (void)scrollViewDidEndScrollingAnimation:(id)a0;
- (double)currentProgress;
- (void)_adjustContentOffsetIfNecessary;
- (void)setupUI;
- (void)addObservers;

@end
