@class V2TXLivePusherJSConfig, NSString, V2TXLivePusherWx, UIView;
@protocol V2TXLivePusherJSAdapterDelegate;

@interface V2TXLivePusherJSAdapter : NSObject <V2TXLivePusherObserverWx> {
    unsigned long long _mode;
    V2TXLivePusherJSConfig *_appliedConfig;
    UIView *_preview;
    BOOL _enableTorch;
    BOOL _needCompress;
    BOOL _isBGMPlaying;
    BOOL _isBGMPlayingWhenPausePusher;
    BOOL _isPreviewing;
}

@property (retain, nonatomic) V2TXLivePusherWx *pusher;
@property (nonatomic) long long bgmVolume;
@property (nonatomic) long long micVolume;
@property (weak, nonatomic) id<V2TXLivePusherJSAdapterDelegate> delegate;
@property (readonly, nonatomic) V2TXLivePusherJSConfig *config;
@property (readonly, nonatomic) BOOL isPushing;
@property (readonly, nonatomic) BOOL isPreviewing;
@property (readonly, nonatomic) BOOL isMicEnabled;
@property (readonly, nonatomic) BOOL isAudioMuted;
@property (readonly, nonatomic) double cameraZoomMaxRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPreviewView:(id)a0 delegate:(id)a1;
- (void)updateLivePusherWithConfigs:(id)a0;
- (void)updateLivePusherWithConfigs:(id)a0 needNotify:(BOOL)a1;
- (void)updateLivePusherWithConfigs:(id)a0 force:(BOOL)a1 needNotify:(BOOL)a2;
- (BOOL)operateLivePusherWithType:(id)a0 params:(id)a1;
- (void)enablePureAudioPush:(BOOL)a0;
- (void)setBackgroundImage:(id)a0;
- (void)setFilterImage:(id)a0;
- (void)setRenderRotation:(long long)a0;
- (BOOL)userLandscapeResolution:(long long)a0 isVertical:(BOOL)a1;
- (void)setOrientation:(id)a0;
- (void)onlineLog:(id)a0;
- (void)restartAudioDevice;
- (long long)sendVideoPixelBuffer:(struct __CVBuffer { } *)a0;
- (long long)sendVideoFrameData:(id)a0 param:(id)a1;
- (id)parseConfigs:(id)a0;
- (void)applyConfig:(id)a0 force:(BOOL)a1;
- (void)applyConfig:(id)a0 force:(BOOL)a1 needNotify:(BOOL)a2;
- (void)enableCustomVideoCapture:(id)a0;
- (void)setVideoEncParams:(id)a0;
- (void)createPusher:(unsigned long long)a0;
- (void)startPush;
- (void)stopPush;
- (void)updatePreview:(BOOL)a0;
- (void)startPreview;
- (void)stopPreview;
- (void)updateAudioRecord;
- (void)onCameraStateChanged:(BOOL)a0;
- (void)notifyAudioMuteStatusChanged:(BOOL)a0;
- (void)notifyMicStatusChanged:(BOOL)a0;
- (int)getGopWithPushMode:(long long)a0;
- (void)adjustPushMode:(id)a0 width:(long long *)a1 height:(long long *)a2 minVideoBitrate:(long long *)a3 maxVideoBitrate:(long long *)a4;
- (void)onMicrophoneVolumeUpdate:(long long)a0;
- (void)onSnapshotComplete:(id)a0;
- (void)onPushEvent:(long long)a0 param:(id)a1;
- (void)onPushNetStatus:(id)a0;
- (void)apiOnlineLog:(id)a0 online:(BOOL)a1;
- (void).cxx_destruct;

@end
