@class NSString, ByteRTCEngine, NSOperationQueue, NSHashTable, IESLiveGCDTimer, NSMutableArray;

@interface HTSFormatAudioServiceRTCImpl : NSObject <ByteRTCEngineDelegate, ByteRTCAudioFrameObserver, ByteRTCMediaPlayerEventHandler, HTSFormatAudioService>

@property (retain, nonatomic) ByteRTCEngine *rtcKit;
@property (nonatomic) unsigned long long currentAudioState;
@property (nonatomic) long long recordSampleRate;
@property (nonatomic) long long recordChannel;
@property (retain, nonatomic) NSOperationQueue *recordQueue;
@property (retain, nonatomic) NSHashTable *delegates;
@property (nonatomic) BOOL isSetPlayer;
@property (retain, nonatomic) IESLiveGCDTimer *playerTimer;
@property (nonatomic) BOOL isPlayerOpened;
@property (retain, nonatomic) NSMutableArray *audioFrames;
@property (retain, nonatomic) NSOperationQueue *playerQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)startRecord;
- (void)playAudios:(id)a0;
- (void)stopPlay;
- (void)didOccurError:(id)a0;
- (void)updateRecordSampleRate:(long long)a0 channel:(long long)a1;
- (void)endRecord;
- (void)configMediaPlayerIfNeeded;
- (void)p_setVolumeIfNeed;
- (void)pushAudioFrameIfNeeded;
- (void)dispatchBlock:(id /* block */)a0 withQueue:(id)a1;
- (void)p_stopPlayMediaPlayer;
- (void)didReceiveRecordFrame:(id)a0;
- (void)didRecordFrameVolume:(id)a0;
- (void)p_setDefaultVolume;
- (void)onCaptureMixedAudioFrame:(id)a0;
- (void)onMediaPlayerEvent:(int)a0 event:(long long)a1 message:(id)a2;
- (void)onMediaPlayerPlayingProgress:(int)a0 progress:(long long)a1;
- (void)onMediaPlayerStateChanged:(int)a0 state:(long long)a1 error:(long long)a2;
- (void)onMixedAudioFrame:(id)a0;
- (void)onPlaybackAudioFrame:(id)a0;
- (void)onRecordAudioFrame:(id)a0;
- (void)onRemoteUserAudioFrame:(id)a0 audioFrame:(id)a1;
- (void)rtcEngine:(id)a0 onAudioDeviceStateChanged:(id)a1 device_type:(long long)a2 device_state:(long long)a3 device_error:(long long)a4;
- (void)rtcEngine:(id)a0 onError:(long long)a1;
- (void)registerDelegate:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)destroy;
- (void)unregisterDelegate:(id)a0;
- (id)mediaPlayer;

@end
