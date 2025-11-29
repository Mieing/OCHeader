@class NSString;

@interface AWETeenFeedControllerManager : AWEShellControllerManager <AWETeenFeedControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)classNameArray;
- (void)loadMoreCompletion:(id)a0 error:(id)a1 isFooterRefreshing:(BOOL)a2;
- (void)beginLoadMore;
- (void)playerWillLoopPlayingWithAwemeID:(id)a0 videoID:(id)a1 currentTime:(double)a2;
- (void)syncPlayTimeWithAwemeModel:(id)a0 playedDuration:(double)a1 totalDuration:(double)a2;
- (void)beginRequestDataFromRefresh:(BOOL)a0;
- (void)endRequestDataSuccess:(BOOL)a0 error:(id)a1 fromRefresh:(BOOL)a2;
- (void)triggerSearchAction:(BOOL)a0;
- (void)play;
- (void)scrollViewDidScroll:(id)a0;
- (void)viewWillTransitionToSize:(struct CGSize { double x0; double x1; })a0 withTransitionCoordinator:(id)a1;
- (void)viewDidLoad;

@end
