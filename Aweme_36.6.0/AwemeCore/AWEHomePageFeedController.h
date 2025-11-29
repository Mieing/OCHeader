@class AWEFeedPlayerProtector;

@interface AWEHomePageFeedController : AWEBaseController

@property (retain, nonatomic) AWEFeedPlayerProtector *playerProtector;

- (void)tryResetPreventPauseState;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (id)init;
- (void)viewWillAppear;
- (void)viewDidDisappear;
- (void)viewWillDisappear;

@end
