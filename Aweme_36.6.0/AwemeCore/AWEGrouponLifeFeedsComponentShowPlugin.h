@protocol AWEGrouponLifeFeedsComponentLifeCycle;

@interface AWEGrouponLifeFeedsComponentShowPlugin : AWEGrouponLifeFeedsBasePlugin

@property (nonatomic) double lastContentOffsetY;
@property (nonatomic) long long lastScrollDirection;
@property (weak, nonatomic) id<AWEGrouponLifeFeedsComponentLifeCycle> delegate;

- (void)pageDidScroll:(id)a0 scrollView:(id)a1;
- (void)hostPageDidScroll:(id)a0 scrollView:(id)a1 hostPageScrollViewOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)viewDidEnterBackground;
- (void)viewDidEnterForeground;
- (void)componentView:(id)a0 didBindViewModel:(id)a1;
- (void)checkComponentsShowStatusInPage:(id)a0 scrollView:(id)a1 reason:(unsigned long long)a2;
- (void)checkComponentShowStatus:(id)a0 visibleRectToWindow:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 reason:(unsigned long long)a2;
- (void)setupComponentShowStatus:(id)a0 newShowRatio:(double)a1 reason:(unsigned long long)a2;
- (unsigned long long)lastSlideDirection;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidDisappear;

@end
