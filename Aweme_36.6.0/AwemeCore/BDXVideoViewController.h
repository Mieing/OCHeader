@class NSString, NSDictionary, BDXVideoPlayerVideoModel, UIView, UIButton;
@protocol BDXVideoPlayProgressDelegate;

@interface BDXVideoViewController : UIViewController <BDXVideoCorePlayerDelegate, BDXVideoFullScreenPlayer>

@property (retain, nonatomic) UIButton *closeButton;
@property (nonatomic) double playTime;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) BOOL shouldResumePlay;
@property (nonatomic) unsigned long long restoreOrientation;
@property (nonatomic) BOOL autoLifecycle;
@property (nonatomic) BOOL repeated;
@property (retain, nonatomic) BDXVideoPlayerVideoModel *video;
@property (copy, nonatomic) NSDictionary *eventParams;
@property (nonatomic) double initPlayTime;
@property (weak, nonatomic) id<BDXVideoPlayProgressDelegate> playerDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) UIView *playerView;
@property (copy, nonatomic) id /* block */ dismissBlock;

- (id)initWithCoverImage:(id)a0;
- (id)initWithCoverImageURL:(id)a0;
- (void)bdx_player:(id)a0 didChangePlaybackStateWithAction:(unsigned long long)a1;
- (void)bdx_player:(id)a0 playbackFailedWithError:(id)a1;
- (void)bdx_playerDidReadyForDisplay:(id)a0;
- (void)playerBecomeActive;
- (void)playerEnterBackground;
- (void)dismiss;
- (void).cxx_destruct;
- (BOOL)play;
- (BOOL)pause;
- (long long)preferredInterfaceOrientationForPresentation;
- (void)viewDidLayoutSubviews;
- (BOOL)prefersStatusBarHidden;
- (long long)preferredStatusBarStyle;
- (BOOL)prefersHomeIndicatorAutoHidden;
- (BOOL)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidLoad;
- (void)show:(id /* block */)a0;
- (void)setupUI;

@end
