@class NSTimer, NSMutableArray, AWESearchAvatarCarouselViewConfig;

@interface AWESearchAvatarCarouselView : UIView

@property (retain, nonatomic) AWESearchAvatarCarouselViewConfig *config;
@property (retain, nonatomic) NSMutableArray *imageViewList;
@property (retain, nonatomic) NSTimer *timer;
@property (nonatomic) BOOL isAnimating;

- (void)configUI;
- (void)updateAvatarFrame;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)updateWithData:(id)a0;
- (id)initWithConfig:(id)a0;

@end
