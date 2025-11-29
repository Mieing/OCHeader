@class MMGameAudioMixWrapper, MMGameOffTexture, NSString;

@interface WAWebViewPlugin_GameLive : WAWebViewPlugin_embedView <WAOpenGlCaptureDelegate, WAAudioPlayBackDelegate, WCActionSheetDelegate, WAGameLiveServiceExt, MMGameAudioMixDelegate> {
    BOOL started;
    BOOL capture;
    BOOL disappear;
    BOOL disableMicMusicCapture;
    BOOL _bForceUpdateAudioPlayBack;
    unsigned int mark_id;
    unsigned int video_width;
    unsigned int video_height;
    unsigned int video_cap_frame_cnt;
    unsigned int video_snd_frame_cnt;
    unsigned int audio_cap_frame_cnt;
    unsigned int audio_mix_frame_cnt;
    unsigned int audio_snd_frame_cnt;
    unsigned long long last_stats_stamp;
    unsigned long long _stopScene;
}

@property (copy, nonatomic) id /* block */ closeBlock;
@property (retain, nonatomic) MMGameAudioMixWrapper *mixWrapper;
@property (retain, nonatomic) MMGameOffTexture *offTexture;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)dealloc;
- (void)onGameViewWillAppear:(BOOL)a0;
- (void)onGameViewWillDisappear:(BOOL)a0;
- (void)startLive:(id)a0;
- (void)startPush;
- (void)stopPush;
- (void)joinTeam:(id)a0 complete:(id /* block */)a1;
- (void)stopLive:(unsigned long long)a0 complete:(id /* block */)a1;
- (void)doStopLive;
- (void)checkAudioPlayBack;
- (BOOL)captureDisabled;
- (void)enableDelegate:(BOOL)a0;
- (BOOL)isCurrGameLiving;
- (BOOL)isLiving;
- (void)updateSnapshotImg;
- (id)getSnapshotFromPixelBuffer:(struct __CVBuffer { } *)a0;
- (id)getImageFromView:(id)a0;
- (void)updateResolutionRatio:(unsigned int)a0 height:(unsigned int)a1;
- (void)updateEncodeParmas;
- (void)checkStats;
- (void)onScreenCapture:(unsigned int)a0 width:(unsigned long long)a1 height:(unsigned long long)a2 pixelBuffer:(struct __CVBuffer { } *)a3;
- (void)onScreenCapture:(unsigned int)a0 data:(void *)a1 size:(unsigned long long)a2 width:(unsigned long long)a3 height:(unsigned long long)a4 bitsPerComponent:(unsigned long long)a5 bytesPerRow:(unsigned long long)a6 format:(int)a7;
- (void)onAudioPlayBack:(id)a0 when:(id)a1;
- (void)onWxAudioPlayBackWithSessionId:(int)a0 data:(char *)a1 size:(unsigned int)a2 channels:(unsigned int)a3 samplerate:(unsigned int)a4 fmt:(unsigned long long)a5;
- (void)showLiveScreenToast:(BOOL)a0 msg:(id)a1;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void)actionSheetCancel:(id)a0;
- (void)onMMLiveVerifyFinishedWithLiveTask:(id)a0 verifySuccess:(BOOL)a1;
- (void)onMMLiveWillStart;
- (void)onMMLiveStartFinishedWithLiveTask:(id)a0 startSuccess:(BOOL)a1;
- (void)onMMLiveCancel;
- (void)onExitLiveSuccessWithLiveTask;
- (void)onMixData:(id)a0 format:(long long)a1 samplerate:(int)a2 channel:(int)a3;
- (void)wkRequest:(id)a0;
- (void).cxx_destruct;

@end
