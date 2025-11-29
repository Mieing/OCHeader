@class AWEStoryProgressContainerConfig, UIView;
@protocol AWEStoryProgressSlideViewDelegate;

@interface AWEStoryProgressLineIndicatorView : UIView

@property (nonatomic) long long progressTotalCount;
@property (nonatomic) double currentProgressDuration;
@property (nonatomic) BOOL currentProgressNeedAnimation;
@property (retain, nonatomic) AWEStoryProgressContainerConfig *config;
@property (retain, nonatomic) UIView *sliderView;
@property (retain, nonatomic) UIView *indicatorView;
@property (weak, nonatomic) id<AWEStoryProgressSlideViewDelegate> delegate;
@property (nonatomic) unsigned long long currentProgressIndex;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentProgressViewFrame;
@property (nonatomic) double currentProgressPercentage;
@property (nonatomic) struct CGSize { double width; double height; } currentProgressViewProgressSize;

- (id)initWithCurrentIndex:(long long)a0 totalCount:(long long)a1 config:(id)a2;
- (void)updateProgressWithDuration:(double)a0 currentIndex:(long long)a1 currentProcess:(double)a2 needAnimation:(BOOL)a3;
- (double)indicatorWidth;
- (void)updateProgressWithDuration:(double)a0 totalCount:(long long)a1 currentIndex:(long long)a2 currentProcess:(double)a3 needAnimation:(BOOL)a4 needScrollAnimation:(BOOL)a5;
- (void)updateIndicatorPositionWith:(BOOL)a0;
- (double)indicatorMoveDistance;
- (double)slideViewWidth;
- (void).cxx_destruct;
- (long long)totalCount;
- (void)setupUI;

@end
