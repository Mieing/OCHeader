@class NSArray, NSTimer, IESLLPOIShelfContainerComponentViewModel, NSMutableArray;

@interface IESLLPOIShelfCarouselView : UIView

@property (retain, nonatomic) IESLLPOIShelfContainerComponentViewModel *viewModel;
@property (retain, nonatomic) NSArray *recommendDesctions;
@property (retain, nonatomic) NSMutableArray *itemViews;
@property (retain, nonatomic) NSTimer *animationTimer;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL isAnimating;

- (void)loadUI;
- (void)updateItemView:(id)a0 withItem:(id)a1;
- (void)performAnimation;
- (id)initWithViewModel:(id)a0 recommendDesctions:(id)a1;
- (void)startAnimation;
- (void).cxx_destruct;
- (void)stopAnimation;
- (void)dealloc;

@end
