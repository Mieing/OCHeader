@class NSString, NSMutableDictionary, UIImageView, NSURL, UIView, NSNumber, IESLiveVideoGiftController;
@protocol BDXAlphaVideoUIDelegate;

@interface BDXAlphaVideoUI : BDXHybridUI <IESLiveVideoGiftControllerDelegate>

@property (retain, nonatomic) IESLiveVideoGiftController *videoController;
@property (nonatomic) BOOL loop;
@property (nonatomic) unsigned long long loopCount;
@property (nonatomic) BOOL autoplay;
@property (nonatomic) BOOL keepVideoLastframe;
@property (nonatomic) BOOL keepPreviousView;
@property (nonatomic) BOOL layoutFinished;
@property (nonatomic) BOOL videoPreparedFinished;
@property (nonatomic) BOOL playSuccessTriggerFlag;
@property (nonatomic) BOOL enableLogInfo;
@property (nonatomic) BOOL enableAsyncRender;
@property (retain, nonatomic) NSURL *unzipURL;
@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) UIImageView *firstFrameImageView;
@property (retain, nonatomic) UIImageView *lastFrameImageView;
@property (retain, nonatomic) UIView *containerView;
@property (retain, nonatomic) NSMutableDictionary *subscribedMilliseconds;
@property (nonatomic) BOOL isVideoPlaying;
@property (weak, nonatomic) id<BDXAlphaVideoUIDelegate> uiDelegate;
@property (retain, nonatomic) NSNumber *videoDuration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagName;

- (void)didFinishPlayingWithError:(id)a0;
- (void)frameCallBack:(double)a0;
- (void)videoGiftController:(id)a0 didEndPlayingFrame:(id)a1;
- (void)layoutDidFinished;
- (void)resumeVideo;
- (void)sendErrorEventWithCode:(unsigned long long)a0 resourceURL:(id)a1 message:(id)a2;
- (void)prepareVideoWithURL:(id)a0;
- (void)playVideoIfVideoPrepared;
- (void)seekToVideo:(double)a0;
- (void)releaseVideo;
- (id)getVideoDuration;
- (void)updateFrameSize;
- (void)reportInfoToLynx:(id)a0 resourceURL:(id)a1;
- (void)reportErrorMessage:(unsigned long long)a0 resourceURL:(id)a1 message:(id)a2;
- (void)resetSubscribedMillisecondsTrigger;
- (void)prepareVideoWithZipURL:(id)a0;
- (void)reportErrorToLynxAndElementMonitor:(unsigned long long)a0 resourceURL:(id)a1 message:(id)a2;
- (void)bdx_src:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_loop:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_iosAsyncRender:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_autoplay:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_play:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_stop:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_pause:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_resume:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_seek:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_release:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_poster:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_lastframe:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_keepLastframe:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_keepPreviousView:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_subscribeUpdateEvent:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_unsubscribeUpdateEvent:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_isPlaying:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_getDuration:(id)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)init;
- (unsigned long long)getState;
- (BOOL)isPrepared;
- (id)createView;
- (void)pauseVideo;
- (void)stopVideo;

@end
