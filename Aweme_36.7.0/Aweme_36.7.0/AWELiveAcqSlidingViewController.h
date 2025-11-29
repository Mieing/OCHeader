@interface AWELiveAcqSlidingViewController : AWESlidingViewController

- (Class)scrollViewClass;
- (id)p_currentVC;
- (void)reloadAllTabVC;
- (double)contrntOffsetYOfCurrentVC;
- (void)refreshVCWithIndex:(unsigned long long)a0;
- (void)viewDidLoad;

@end
