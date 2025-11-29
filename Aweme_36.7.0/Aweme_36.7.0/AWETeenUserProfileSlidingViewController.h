@interface AWETeenUserProfileSlidingViewController : AWESlidingViewController

- (Class)scrollViewClass;
- (id)p_currentVC;
- (void)reloadAllTabVC;
- (void)adjustCurrentVCContentOffsetWithHeaderViewFrameY:(double *)a0 headerHeight:(double)a1;
- (double)contrntOffsetYOfCurrentVC;
- (void)refreshVCWithIndex:(unsigned long long)a0;
- (void)addjustOtherVCContentOffset:(struct CGPoint { double x0; double x1; })a0;
- (void)viewDidLoad;

@end
