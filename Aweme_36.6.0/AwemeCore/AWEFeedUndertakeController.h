@interface AWEFeedUndertakeController : AWEBaseController

@property (nonatomic) long long currentPlayingIndex;

- (void)videoControllerWillStartNextLoop:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
