@class AWETeenAutoPlayFloatButton;

@interface AWETeenFeedAutoPlayController : AWETeenFeedBaseController

@property (retain, nonatomic) AWETeenAutoPlayFloatButton *autoPlayFloatButton;
@property (nonatomic) BOOL isUserDrag;
@property (nonatomic) long long autoPlayNoActionCount;
@property (nonatomic) long long autoPlayCount;

- (void)addNotification;
- (void)playerWillLoopPlayingWithAwemeID:(id)a0 videoID:(id)a1 currentTime:(double)a2;
- (void)syncPlayTimeWithAwemeModel:(id)a0 playedDuration:(double)a1 totalDuration:(double)a2;
- (void)trackAutoPlayFloatButtonStatus;
- (void)trackAutoPlayAutoSlideStatus;
- (void).cxx_destruct;
- (void)scrollViewWillBeginDragging:(id)a0;
- (void)tableView:(id)a0 willDisplayCell:(id)a1 forRowAtIndexPath:(id)a2;
- (void)viewDidLoad;
- (void)tableView:(id)a0 didEndDisplayingCell:(id)a1 forRowAtIndexPath:(id)a2;

@end
