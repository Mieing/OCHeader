@interface AWELandscapeFeedContinuePlayController : AWELandscapeFeedBaseController

+ (Class)aAWEFeedModuleServiceDOUYINJXAdapterClass;

- (void)updatePlayTime:(double)a0 canPlayTime:(double)a1 totalTime:(double)a2;
- (id)aAWEFeedModuleServiceDOUYINJXAdapter;
- (void)setupPlayingInfoPlayNext;
- (void)removePlayingInfoPlayNext;
- (BOOL)tryToPlayWithIndex:(long long)a0 isNext:(BOOL)a1;
- (void)playWithIndex:(long long)a0 isNext:(BOOL)a1;
- (void)playPre;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)playNext;

@end
