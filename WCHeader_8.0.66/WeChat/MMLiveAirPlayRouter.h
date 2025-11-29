@class AVRoutePickerView, NSString, NSURL, AVPlayer;

@interface MMLiveAirPlayRouter : NSObject <AVRoutePickerViewDelegate>

@property (retain, nonatomic) NSURL *playingURL;
@property (retain, nonatomic) AVPlayer *player;
@property (retain, nonatomic) AVRoutePickerView *routePickerView;
@property (readonly, nonatomic) BOOL isPlaying;
@property (nonatomic) BOOL disableMutePlay;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedRouter;

- (id)init;
- (void)dealloc;
- (void)startAirPlayWithURL:(id)a0;
- (void)stopAirPlay;
- (void)reloadAirPlay;
- (void)pauseAirPlayIfNeeded;
- (void)resumeAirPlayIfNeededWithURL:(id)a0;
- (void)reloadPlayerWithURL:(id)a0;
- (void)destroyPlayer;
- (void)playerExternalPlaybackActiveDidChange:(id)a0;
- (void)loadRoutePickerViewIfNeeded;
- (void)unloadRoutePickerView;
- (void)showRoutePickerView;
- (void)routePickerViewWillBeginPresentingRoutes:(id)a0;
- (void)routePickerViewDidEndPresentingRoutes:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (id)audienceLogReporter;
- (void).cxx_destruct;

@end
