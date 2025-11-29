@class NSString, NSDictionary, BDXVideoPlayerVideoModel, NSNumber;

@interface BDXCoreVideoUI : BDXHybridUI <BDXVideoPlayerDelegate>

@property (retain, nonatomic) NSDictionary *paramsDict;
@property (retain, nonatomic) BDXVideoPlayerVideoModel *videoModel;
@property (nonatomic) double seekTime;
@property (nonatomic) BOOL needReplay;
@property (nonatomic) BOOL autoPlay;
@property (nonatomic) BOOL mute;
@property (nonatomic) BOOL isLoop;
@property (nonatomic) BOOL useSinglePlayer;
@property (nonatomic) BOOL needPreload;
@property (nonatomic) BOOL autoLifecycle;
@property (nonatomic) BOOL listenDeviceChange;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *volume;
@property (retain, nonatomic) NSNumber *rate;
@property (copy, nonatomic) NSString *posterURL;
@property (copy, nonatomic) NSString *fitMode;
@property (copy, nonatomic) NSString *control;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tagName;

- (void)didBufferChange;
- (void)didBufferChangeWithInfo:(id)a0;
- (void)didDeviceChange:(id)a0;
- (void)__setupVideoModel:(id)a0;
- (id)__resolveSrcAsJSON:(id)a0;
- (id)__resolveSrcAsSchema:(id)a0;
- (void)__controlPlayerWithCommand:(id)a0;
- (void)didFullscreenChange;
- (void)didSeek;
- (void)bdx_src:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_autoplay:(BOOL)a0 requestReset:(BOOL)a1;
- (void)bdx_poster:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_preload:(BOOL)a0 requestReset:(BOOL)a1;
- (void)bdx_inittime:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_repeat:(BOOL)a0 requestReset:(BOOL)a1;
- (void)bdx_muted:(BOOL)a0 requestReset:(BOOL)a1;
- (void)bdx_volume:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_rate:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_autolifecycle:(BOOL)a0 requestReset:(BOOL)a1;
- (void)bdx_objectfit:(id)a0 requestReset:(BOOL)a1;
- (void)bdx_singleplayer:(BOOL)a0 requestReset:(BOOL)a1;
- (void)bdx_devicechangeaware:(BOOL)a0 requestReset:(BOOL)a1;
- (void)bdx___control:(id)a0 requestReset:(BOOL)a1;
- (void)didTimeUpdate;
- (void).cxx_destruct;
- (void)didEnd;
- (void)didError;
- (id)createView;
- (void)didPause;
- (void)didPlay;

@end
