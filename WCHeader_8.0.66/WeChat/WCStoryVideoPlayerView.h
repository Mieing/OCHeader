@class WCStoryPlayRecord, NSString, WCPlayerPlayArgs, WXFullScreenGestureRecognizer, WCStoryDataItem, WCPlayerView, WCStoryPreviewReportObj, WCStoryVideoControlView, WCStoryMediaItem;
@protocol WCStoryVideoPlayerViewDelegate;

@interface WCStoryVideoPlayerView : UIView <WCStoryVideoControlViewDelegate, FullScreenGestureDelegate>

@property (nonatomic) BOOL bStartPlayed;
@property (retain, nonatomic) WCStoryMediaItem *mediaItem;
@property (retain, nonatomic) WCPlayerPlayArgs *playerInfo;
@property (retain, nonatomic) WCPlayerView *playerView;
@property (retain, nonatomic) WCStoryPlayRecord *playRecord;
@property (retain, nonatomic) WCStoryVideoControlView *controlView;
@property (retain, nonatomic) WXFullScreenGestureRecognizer *fullScreenGestureRecognizer;
@property (nonatomic) BOOL bCanDragToClose;
@property (retain, nonatomic) WCStoryDataItem *dataItem;
@property (weak, nonatomic) id<WCStoryVideoPlayerViewDelegate> delegate;
@property (retain, nonatomic) WCStoryPreviewReportObj *previewReportObj;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 DataItem:(id)a1;
- (void)dealloc;
- (void)initSubview;
- (void)reloadPlayerInfo;
- (void)playVideo;
- (void)playVideoWithMute:(BOOL)a0;
- (void)pauseVideo;
- (void)stopPlay;
- (void)stopAndCleanPlayer;
- (void)setPlayerToMuted:(BOOL)a0;
- (void)setVideoFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)isPlayerViewForMediaItem:(id)a0;
- (void)onFullScreenClose;
- (void)onFullScreenDragToRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)onFullScreenBackgroundColorAlphaChange:(double)a0;
- (void)onVideoPlayStarted;
- (void)didTakeVideoSnapshot:(id)a0;
- (void).cxx_destruct;

@end
