@interface AWESearchSlidingViewController : AWESlidingViewController

@property (nonatomic) BOOL enablePagePanBackGesture;
@property (nonatomic) double panBackGestureLeftEdge;

- (id)initWithSelectedIndex:(long long)a0;
- (Class)scrollViewClass;
- (id)slidingScrollView;
- (void)viewDidLoad;

@end
