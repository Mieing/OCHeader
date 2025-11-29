@class NSArray;

@interface AWECircledButton : UIButton

@property (retain, nonatomic) NSArray *scales;
@property (retain, nonatomic) NSArray *circleLayers;
@property (nonatomic) BOOL isHideHighlightImage;

- (id)initWithCircleImages:(id)a0 animationScales:(id)a1;
- (id)initWithCircleImages:(id)a0;
- (void)setHighlighted:(BOOL)a0;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)didMoveToWindow;

@end
