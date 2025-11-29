@class AWEGrouponLifeFeedsBaseComponentView, NSArray;

@interface AWEGrouponLifeFeedsAutoPlayPlugin : AWEGrouponLifeFeedsBasePlugin

@property (weak, nonatomic) AWEGrouponLifeFeedsBaseComponentView *playingView;
@property (weak, nonatomic) AWEGrouponLifeFeedsBaseComponentView *resumePlayingView;
@property long long autoPlayIndex;
@property BOOL hasTriggerAutoPlayFirstTime;
@property (retain, nonatomic) NSArray *canPlayViews;

- (void)playEnd;
- (void)autoPlay:(id)a0;
- (void)startAutoPlay:(id)a0;
- (void)pageDidEndScroll:(id)a0 scrollView:(id)a1;
- (id)nextPlayingList:(id)a0;
- (void)componentStartShow:(id)a0 reason:(unsigned long long)a1;
- (void)pageViewDidEndDragging:(id)a0 scrollView:(id)a1 willDecelerate:(BOOL)a2;
- (void)pageViewDidEndDecelerating:(id)a0 scrollView:(id)a1;
- (void)hostPageDidEndScroll:(id)a0 scrollView:(id)a1 hostPageScrollViewOffset:(struct CGPoint { double x0; double x1; })a2;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)viewDidDisappear;

@end
