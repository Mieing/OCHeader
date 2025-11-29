@class NSArray, MMTimer, UILabel;
@protocol MMFinderLiveTextCarouselViewDelegate;

@interface MMFinderLiveTextCarouselView : UIView

@property (retain, nonatomic) NSArray *dataSource;
@property (retain, nonatomic) MMTimer *scrollTimer;
@property (nonatomic) unsigned long long currentIndex;
@property (retain, nonatomic) UILabel *currentLabel;
@property (retain, nonatomic) UILabel *nextLabel;
@property (nonatomic) BOOL isInAnimation;
@property (nonatomic) BOOL isAnimationStart;
@property (nonatomic) unsigned long long repeatCount;
@property (nonatomic) unsigned long long remainingCount;
@property (weak, nonatomic) id<MMFinderLiveTextCarouselViewDelegate> delegate;
@property (nonatomic) double animationDuration;
@property (nonatomic) BOOL keepWordingOnScreenWhenFinish;
@property (nonatomic) BOOL allowRepeatedPlay;
@property (copy, nonatomic) id /* block */ onCarouselAnimationFinishOnceBlock;

+ (double)labelHeight;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)updateWithDataSource:(id)a0 repeatCount:(unsigned long long)a1;
- (void)start;
- (void)stop;
- (void)hideCurrentLabel;
- (void)reset;
- (void)dealloc;
- (void)layoutSubviews;
- (void)startTimer;
- (void)stopTimer;
- (void)onTimerShouldScroll;
- (void).cxx_destruct;

@end
