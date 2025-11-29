@class NSString;

@interface AWEAwemeFeedGoalKeeperController : AWEAwemeFeedBaseController

@property (nonatomic) long long willDisplayIndex;
@property (nonatomic) long long lastMaxIndex;
@property (nonatomic) long long lastSlideBackIndex;
@property (copy, nonatomic) NSString *firstItemID;
@property (nonatomic) BOOL coldLaunchToDisplayFirstItem;

- (BOOL)__goalKeeperDisabled:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
