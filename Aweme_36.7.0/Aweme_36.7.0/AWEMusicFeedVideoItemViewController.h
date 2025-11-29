@class UIView;

@interface AWEMusicFeedVideoItemViewController : AWEMusicFeedBaseItemViewController

@property (retain, nonatomic) UIView *playerView;

- (void)playerReadyToPlay:(BOOL)a0;
- (void)itemViewDidAppear;
- (void)currentPageWillChangeAnimation:(BOOL)a0;
- (void)itemDidDisappear;
- (void)itemViewDidReset;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)updateUI;

@end
