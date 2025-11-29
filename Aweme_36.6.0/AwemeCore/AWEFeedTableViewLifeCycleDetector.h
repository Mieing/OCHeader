@class NSMutableDictionary;

@interface AWEFeedTableViewLifeCycleDetector : AWEBaseController

@property (retain, nonatomic) NSMutableDictionary *cellTStates;

- (BOOL)currentSceneEnable;
- (id)awemeModelFromCell:(id)a0;
- (long long)moveToNextState:(long long)a0;
- (void)checkStates;
- (void).cxx_destruct;
- (void)scrollViewDidEndDecelerating:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
