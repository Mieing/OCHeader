@class AWEStoryProgressContainerConfig, NSMutableArray;
@protocol AWEStoryProgressSlideViewDelegate;

@interface AWEAnimateImageProgressView : UIView

@property (retain, nonatomic) NSMutableArray *progressViewArray;
@property (nonatomic) long long progressTotalCount;
@property (retain, nonatomic) AWEStoryProgressContainerConfig *config;
@property (nonatomic) long long currentIndex;
@property (nonatomic) double lastProcess;
@property (weak, nonatomic) id<AWEStoryProgressSlideViewDelegate> delegate;
@property (nonatomic) unsigned long long currentProgressIndex;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } currentProgressViewFrame;
@property (readonly, nonatomic) double currentProgressPercentage;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } currentProgressViewProgressSize;

- (void)updateProgressWithDuration:(double)a0 totalCount:(long long)a1 currentIndex:(long long)a2 currentProcess:(double)a3 currentDotFromCenter:(id)a4 needScrollAnimation:(BOOL)a5 needAnimation:(BOOL)a6;
- (id)initWithCurrentIndex:(long long)a0 totalCount:(long long)a1 config:(id)a2;
- (void)updateProgressWithDuration:(double)a0 totalCount:(long long)a1 currentIndex:(long long)a2 currentProcess:(double)a3 needAnimation:(BOOL)a4;
- (void)updateProgressWithDuration:(double)a0 currentIndex:(long long)a1 currentProcess:(double)a2 needAnimation:(BOOL)a3;
- (void)setupUIWithConfig:(id)a0;
- (void)clearDetailView;
- (void)onProgressBarTapped:(id)a0;
- (void).cxx_destruct;
- (long long)totalCount;
- (id)currentProgressView;

@end
