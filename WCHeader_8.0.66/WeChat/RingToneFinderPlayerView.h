@class NSString, WCFinderMediaInfo, RingToneDetail, RingToneVibrateController, WCFinderDataItem, WCFinderFeedMediaWrap, WCFinderPlayerControlView, WCPlayerView, WCFinderFeedContentVM, UIImageView, UIImage;

@interface RingToneFinderPlayerView : MMUIView <RingToneVibrateDataSource, WCFinderPlayerControlViewDelegate, WCPlayerDownloaderExt, WCAudioSessionExt, WCPlayerEventExt, WCFinderFeedContentVMExt, RingTonePlayer>

@property (nonatomic) double finderDuration;
@property (nonatomic) double finderVideoPosition;
@property (nonatomic) unsigned long long playTimeStamp;
@property (retain, nonatomic) RingToneVibrateController *vibrateController;
@property (nonatomic) BOOL readyToVibrateFlag;
@property (retain, nonatomic) RingToneDetail *curRing;
@property (retain, nonatomic) WCPlayerView *playerView;
@property (retain, nonatomic) WCFinderPlayerControlView *playerConfigControlView;
@property (retain, nonatomic) WCFinderDataItem *dataItem;
@property (retain, nonatomic) WCFinderFeedMediaWrap *mediaWrap;
@property (retain, nonatomic) WCFinderMediaInfo *mediaInfo;
@property (nonatomic) BOOL isCurrentPlaying;
@property (copy, nonatomic) NSString *currentVideoTid;
@property (retain, nonatomic) WCFinderFeedContentVM *feedContentVM;
@property (retain, nonatomic) UIImageView *briefImageView;
@property (retain, nonatomic) UIImage *defaultImage;
@property (nonatomic) BOOL customVibrateEnabled;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)initView;
- (void)changeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)playRing:(id)a0;
- (void)playVideoMedia:(id)a0;
- (void)startToPlay;
- (void)stopPlay;
- (void)pause;
- (void)resume;
- (void)restStatus;
- (void)prepareForReuse;
- (void)changeDataSource:(id)a0 ring:(id)a1 feedContentVM:(id)a2;
- (void)stopVideoIfSupport;
- (void)play;
- (void)createPlayerView:(double)a0;
- (void)playWithParams:(id)a0;
- (void)pauseVideoIfSupport:(BOOL)a0;
- (double)getCurrentPlayVideoTime;
- (void)onVideoUpdatePosition:(double)a0 videoDuration:(double)a1 maxPlayVideoTime:(double)a2;
- (void)contentMediaDidEndPlay;
- (void)seekToTime:(double)a0;
- (double)currentPlayTime;
- (void)onPlayerProxyIsUnAvaiable;
- (void)onPlayToEnd;
- (void)finderPlayerControllerViewUpdateVideoCurrentTime:(double)a0 videoDuration:(double)a1 maxPlayVideoTime:(double)a2;
- (void)onShowBufferingView;
- (void)onHiddenBufferingView;
- (void)checkPreloadTaskStatus;
- (void)onVideoPlayFail:(unsigned long long)a0;
- (void)tryDowngradePlay;
- (void)updateVideoBufferPercent:(double)a0;
- (void)OnPlayerMoovReady:(id)a0;
- (void)OnPlayerDownloadProgress:(id)a0 finish:(unsigned long long)a1 total:(unsigned long long)a2;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onPlayerStartPlay:(id)a0;
- (void)onFeedContentUpdateByURLExpired:(id)a0;
- (void)_reloadPlayView:(id)a0;
- (void).cxx_destruct;

@end
