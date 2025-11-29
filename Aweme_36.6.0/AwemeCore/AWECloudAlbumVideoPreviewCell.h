@class NSString, UIViewController;
@protocol AWEDPlayerProtocol;

@interface AWECloudAlbumVideoPreviewCell : AWECloudAlbumPreviewCell <UIScrollViewDelegate, AWEDemaciaPlayerViewDelegate, AWEDPlayerDelegate>

@property (retain, nonatomic) UIViewController<AWEDPlayerProtocol> *generalPlayer;
@property (nonatomic) BOOL shouldShowPauseIcon;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)player:(id)a0 playbackFailedWithError:(id)a1;
- (void)playerDidReadyForDisplay:(id)a0;
- (void)player:(id)a0 didChangePlaybackStateWithAction:(long long)a1;
- (void)resetCell;
- (void)setupZoomScrollView;
- (void)configWithModel:(id)a0 playFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (BOOL)pauseWithoutShowPauseIcon;
- (void)setupDPlayer;
- (void)refreshDPlayerWithModel:(id)a0 playFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (id)viewForZoomingInScrollView:(id)a0;
- (void)scrollViewDidZoom:(id)a0;
- (void).cxx_destruct;
- (BOOL)play;
- (BOOL)pause;
- (void)prepareForReuse;
- (BOOL)isPlaying;
- (BOOL)stop;
- (BOOL)isPaused;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)replay;
- (void)handleDoubleTap:(id)a0;
- (void)dealloc;
- (void)setupUI;

@end
