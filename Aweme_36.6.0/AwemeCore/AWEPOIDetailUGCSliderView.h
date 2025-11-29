@class AWEStoryProgressContainerView, AWEPOIVideoProgressSlider;
@protocol AWEPOIDetailUGCSliderDelegate;

@interface AWEPOIDetailUGCSliderView : UIView

@property (nonatomic) long long currentIndex;
@property (nonatomic) long long totalCount;
@property (retain, nonatomic) AWEStoryProgressContainerView *indexSlider;
@property (retain, nonatomic) AWEPOIVideoProgressSlider *progressSlider;
@property (nonatomic) BOOL isSliding;
@property (weak, nonatomic) id<AWEPOIDetailUGCSliderDelegate> delegate;

- (void)showProgressSlider:(long long)a0;
- (void)updateProgressWithType:(long long)a0 totalCount:(long long)a1 duration:(double)a2 currentIndex:(long long)a3 currentProcess:(double)a4 needAnimation:(BOOL)a5;
- (void)progressSlideChangeValue:(id)a0;
- (id)initWithCurrentIndex:(long long)a0 totalCount:(long long)a1;
- (void)makeConstrains;
- (void)progressSliderTouchEnded:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
