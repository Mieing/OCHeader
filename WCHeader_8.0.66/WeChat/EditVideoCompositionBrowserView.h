@class MAVVideoCompositionPlayer, NSString, MAVVideoComposition;
@protocol EditVideoCompositionBrowserViewDelegate;

@interface EditVideoCompositionBrowserView : MMUIView <MAVVideoCompositionPlayerDelegate>

@property (retain, nonatomic) MAVVideoCompositionPlayer *videoPlayer;
@property (retain, nonatomic) MAVVideoComposition *composition;
@property (nonatomic) BOOL isPlayingBeforeEnterBackground;
@property (weak, nonatomic) id<EditVideoCompositionBrowserViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addNotificationObserver;
- (void)removeNotificationObserver;
- (BOOL)isPlaying;
- (void)play;
- (void)replay;
- (void)pause;
- (void)setMute:(BOOL)a0;
- (void)seekToTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)refreshSurface;
- (void)dealloc;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getVideoPreviewFrame;
- (void)updateComposition:(id)a0;
- (double)listenTimeIntervalInSection;
- (void)videoCompositionPlayerProgressUpdated:(id)a0 currentTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)videoCompositionPlayerPlayCompleted:(id)a0;
- (void)onTimelineViewEnterBackground:(id)a0;
- (void)onTimelineViewEnterForeground:(id)a0;
- (void).cxx_destruct;

@end
