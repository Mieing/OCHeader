@class UIColor, NSArray, NSTimer, UILabel;

@interface IESLiveKTVSearchLabelsCarouselView : UIView

@property (nonatomic) double animationDuration;
@property (nonatomic) double timeInterval;
@property (retain, nonatomic) UILabel *labelFirst;
@property (retain, nonatomic) UILabel *labelSecond;
@property (nonatomic) unsigned long long currentShowTextIndex;
@property (nonatomic) BOOL isCarousel;
@property (retain, nonatomic) NSTimer *animationTimer;
@property (nonatomic) BOOL isRandomOrder;
@property (retain, nonatomic) UIColor *baseColor;
@property (nonatomic) long long scaleRatio;
@property (copy, nonatomic) NSArray *textArray;

- (void)startCarousel;
- (void)p_startAnimation;
- (id)initWithTextArray:(id)a0 animationDuration:(double)a1 timeInterval:(double)a2 isRandomOrder:(BOOL)a3 baseColor:(id)a4 scaleRatio:(long long)a5;
- (void)pauseCarousel;
- (void)restartCarousel;
- (void)p_setupUI;
- (void).cxx_destruct;
- (void)dealloc;
- (id)currentModel;

@end
