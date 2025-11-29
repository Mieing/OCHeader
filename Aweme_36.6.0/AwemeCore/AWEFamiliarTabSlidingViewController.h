@interface AWEFamiliarTabSlidingViewController : AWESlidingViewController

- (Class)scrollViewClass;
- (void)correctSelectLine:(id)a0;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)viewDidLoad;
- (void)scrollViewDidEndDragging:(id)a0 willDecelerate:(BOOL)a1;

@end
