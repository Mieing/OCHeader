@class UILongPressGestureRecognizer, AWEStoryProgressContainerConfig, AWEAnimateImageProgressView, NSString, AWEStoryProgressSlideView, AWEStoryProgressLineIndicatorView, UIPanGestureRecognizer, AFDDotsIndicatorContainerView;
@protocol AWEStoryProgressContainerViewDelegate;

@interface AWEStoryProgressContainerView : UIView <AWEStoryProgressSlideViewDelegate, UIGestureRecognizerDelegate, AFDStoryProgressContainerViewProtocol>

@property (retain, nonatomic) AWEStoryProgressSlideView *slideView;
@property (retain, nonatomic) AFDDotsIndicatorContainerView *dotsView;
@property (retain, nonatomic) AWEStoryProgressLineIndicatorView *lineSlideView;
@property (retain, nonatomic) AWEAnimateImageProgressView *imageProgressView;
@property (nonatomic) long long index;
@property (nonatomic) long long count;
@property (retain, nonatomic) AWEStoryProgressContainerConfig *config;
@property (nonatomic) struct CGPoint { double x; double y; } startLocation;
@property (nonatomic) struct CGPoint { double x; double y; } lastLocation;
@property (retain, nonatomic) UIPanGestureRecognizer *panGesture;
@property (retain, nonatomic) UILongPressGestureRecognizer *longGesture;
@property (weak, nonatomic) id<AWEStoryProgressContainerViewDelegate> delegate;
@property (readonly, nonatomic) unsigned long long currentProgressIndex;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentProgressViewFrame;
@property (readonly, nonatomic) double currentProgressPercentage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } currentProgressViewProgressSize;
@property (nonatomic) BOOL needProgressBarPanGesture;
@property (nonatomic) double duration;
@property (nonatomic) double process;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setHidden:(BOOL)a0;
- (BOOL)isHidden;
- (void)setCenter:(struct CGPoint { double x0; double x1; })a0;
- (id)currentDotFromCenter;
- (void)scrollToIndex:(long long)a0;
- (void)swipeToLastStory;
- (void)swipeToNextStory;
- (void)progressContainerViewTouchEnded;
- (id)accessibilityLabels;
- (void)progressContainerViewTouchBeganWithIsLongPress:(BOOL)a0;
- (void)progressContainerViewValueChangedWithDeltaOffsetX:(double)a0 accumulatedOffsetX:(double)a1;
- (void)updateProgressWithDuration:(double)a0 totalCount:(long long)a1 currentIndex:(long long)a2 currentProcess:(double)a3 currentDotFromCenter:(id)a4 needScrollAnimation:(BOOL)a5 needAnimation:(BOOL)a6;
- (id)initWithCurrentIndex:(long long)a0 totalCount:(long long)a1 config:(id)a2;
- (void)reloadCollectionView;
- (void)updateProgressWithDuration:(double)a0 totalCount:(long long)a1 currentIndex:(long long)a2 currentProcess:(double)a3 needAnimation:(BOOL)a4;
- (void)updateProgressWithDuration:(double)a0 currentIndex:(long long)a1 currentProcess:(double)a2 needAnimation:(BOOL)a3;
- (void)tryConsumeGesture;
- (void)updateProgressConfig:(id)a0;
- (void)progressSlideSwipeToLastStory;
- (void)progressSlideSwipeToNextStory;
- (BOOL)isDotsType;
- (void)handleGesture:(id)a0 isLongPress:(BOOL)a1;
- (void)longGesture:(id)a0;
- (void)progressSlideScrollToIndex:(long long)a0;
- (void)accessibilityChangedOffset:(double)a0;
- (id)progressSlideAccessibilityLabels;
- (void).cxx_destruct;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (long long)totalCount;
- (void)setupUI;
- (void)panGesture:(id)a0;
- (double)containerWidth;

@end
