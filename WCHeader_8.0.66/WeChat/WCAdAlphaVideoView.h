@class AVMutableVideoComposition, WCDataItem, WCPlayerPlayArgs, AVPlayerItemVideoOutput, WCPlayerView, WCADVideoPlayInfo, CADisplayLink, WCAdAlphaVideoMetalRender, NSString, WCMediaItem, WCSNSADPlayerControlView;
@protocol WCAdAlphaVideoViewDelegate;

@interface WCAdAlphaVideoView : MMUIView <WCPlayerDownloaderExt, WCFacadeExt, WCSNSADPlayerControlViewDelegate, AVPlayerItemOutputPullDelegate>

@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) BOOL bTimelineScene;
@property (retain, nonatomic) WCADVideoPlayInfo *adPlayInfo;
@property (nonatomic) float periodicTimeInterval;
@property (retain, nonatomic) WCPlayerView *wcPlayerView;
@property (retain, nonatomic) WCSNSADPlayerControlView *controlView;
@property (retain, nonatomic) WCPlayerPlayArgs *playerArgs;
@property (retain, nonatomic) AVMutableVideoComposition *videoComposition;
@property (nonatomic) int videoCompositeType;
@property (nonatomic) BOOL readyToAddPlayCount;
@property (nonatomic) BOOL intentToPlay;
@property (nonatomic) double lastPlaybackTime;
@property (retain, nonatomic) AVPlayerItemVideoOutput *videoOutput;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property (retain, nonatomic) WCAdAlphaVideoMetalRender *metalRender;
@property (weak, nonatomic) id<WCAdAlphaVideoViewDelegate> delegate;
@property (retain, nonatomic) WCMediaItem *mediaData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 mediaData:(id)a1 videoCompositeType:(int)a2 dataItem:(id)a3 bTimelineScene:(BOOL)a4 adPlayInfo:(id)a5 periodicTimeInterval:(float)a6;
- (void)initData:(id)a0;
- (void)dealloc;
- (void)willMoveToSuperview:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)addNotification;
- (void)applicationBecomeActive:(id)a0;
- (void)applicationWillResignActive:(id)a0;
- (void)onTimeLineVcWillPop;
- (id)fetchVideoPlayInfo;
- (void)tryAddVideoPlayCount;
- (void)updateWCPlayTotalTime:(double)a0;
- (void)mergeWCPlaybackInfo;
- (void)clearShortVideo;
- (BOOL)isSightVideoExist;
- (void)setupWCPlayerView;
- (void)startWCPlayer;
- (void)pauseWCPlayer;
- (BOOL)isWCPlayerPlaying;
- (void)exitVideoPlay;
- (void)seekWCPlayerToTime:(double)a0 needAddPlayCount:(BOOL)a1 pauseFirstWhenPlaying:(BOOL)a2;
- (void)setPlayBeginPos:(float)a0;
- (void)setPlayEndPos:(float)a0;
- (void)updatePlayerSubviewsLayout;
- (void)checkWCSightViewState;
- (void)onPlayToEnd;
- (void)onLoopPlayToEnd;
- (void)onWCPlayerPlayEnd:(BOOL)a0;
- (void)onUpdateCurrentVideoTime:(double)a0;
- (void)onPlayerCreated;
- (void)onPlayerSeekComplete:(double)a0;
- (void)OnCdnDownloadSuccess:(id)a0;
- (double)fetchCurrentPlaybackTime;
- (double)fetchCurrentPlaybackTimeMs;
- (id)createVideoCompositionWithAsset:(id)a0;
- (BOOL)shouldUseCustomRender;
- (void)setupMetalRender;
- (void)displayLinkCallback:(id)a0;
- (void)clearRender;
- (void).cxx_destruct;

@end
