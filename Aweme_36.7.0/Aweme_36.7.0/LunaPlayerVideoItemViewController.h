@class _TtC21AWEMusicStreamingImpl18LunaVideoSceneView;

@interface LunaPlayerVideoItemViewController : LunaPlayerBaseItemViewController

@property (retain, nonatomic) _TtC21AWEMusicStreamingImpl18LunaVideoSceneView *videoSceneView;

- (void)musicService:(id)a0 playStatusChanged:(long long)a1;
- (void)musicServiceReadyToPlay:(id)a0;
- (void)musicServiceMusicChanged:(id)a0;
- (void)itemViewDidAppear;
- (void)itemDidDisappear;
- (void)mainFeed_viewDidAppear;
- (void)appLifeCycleNoti:(id)a0;
- (void)attachVideView;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)updateUI;
- (id)sceneView;

@end
