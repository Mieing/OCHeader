@class MMTimer, NSArray, MMWebImageView;

@interface MMFinderLiveIconTransitionCarouselView : UIView

@property (retain, nonatomic) MMWebImageView *imageView;
@property (retain, nonatomic) MMTimer *timer;
@property (nonatomic) BOOL isAnimationStart;
@property (nonatomic) unsigned long long currentIndex;
@property (nonatomic) double animationDuration;
@property (nonatomic) double transitionDuration;
@property (retain, nonatomic) NSArray *images;
@property (retain, nonatomic) NSArray *webImageUrls;

- (id)initWithImages:(id)a0;
- (id)initWithWebImageUrls:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)start;
- (void)stop;
- (void)startTimer;
- (void)stopTimer;
- (void)transitionSingleImage;
- (void)dealloc;
- (void).cxx_destruct;

@end
