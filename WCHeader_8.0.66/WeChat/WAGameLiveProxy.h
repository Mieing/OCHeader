@class NSString;

@interface WAGameLiveProxy : NSObject <IWAGameLiveService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setDelegate:(id)a0;
+ (void)menuClickStartGameLive:(id)a0 versionType:(unsigned long long)a1 callback:(id /* block */)a2 nav:(id)a3 dic:(id)a4;
+ (void)notifyAppRebootWithNav:(id)a0;
+ (void)sendGameLiveMenuClickEvent:(id)a0 versionType:(unsigned long long)a1;
+ (void)notifyGameLiveWillStart;
+ (BOOL)isGameLiving:(id)a0 versionType:(unsigned long long)a1;
+ (BOOL)isLiving;
+ (BOOL)minimize;
+ (BOOL)isDisableMicMusicCapture;
+ (void)notifyGameViewVisible:(BOOL)a0;
+ (void)updateCoverImage:(id)a0;
+ (void)enableLocalVideo:(BOOL)a0;
+ (void)enableLocalAudio:(BOOL)a0;
+ (BOOL)enableCustomVideoCapture:(BOOL)a0;
+ (BOOL)sendCustomVideoData:(struct __CVBuffer { } *)a0 pixelFormat:(int)a1 timestampMs:(unsigned long long)a2 rotation:(int)a3;
+ (BOOL)sendCustomVideoData:(void *)a0 size:(int)a1 pixelFormat:(int)a2 timestampMs:(unsigned long long)a3 width:(double)a4 height:(double)a5 rotation:(int)a6;
+ (BOOL)sendCustomVideoData:(id)a0 pixelFormat:(int)a1 timestampMs:(unsigned long long)a2 width:(double)a3 height:(double)a4 rotation:(int)a5;
+ (BOOL)enableCustomAudioCapture:(BOOL)a0;
+ (BOOL)sendCustomAudioData:(void *)a0 size:(int)a1 sampleRate:(int)a2 channels:(int)a3 timestampMs:(unsigned long long)a4;
+ (BOOL)sendCustomAudioData:(id)a0 sampleRate:(int)a1 channels:(int)a2 timestampMs:(unsigned long long)a3;
+ (BOOL)enableMixExternalAudio:(BOOL)a0 playout:(BOOL)a1;
+ (BOOL)mixExternalAudioData:(void *)a0 size:(int)a1 sampleRate:(int)a2 channels:(int)a3 timestampMs:(unsigned long long)a4;
+ (BOOL)mixExternalAudioData:(id)a0 sampleRate:(int)a1 channels:(int)a2 timestampMs:(unsigned long long)a3;
+ (void)setExperimentConfig:(id)a0 withParams:(id)a1;
+ (void)setEncoderParamWithVideoSize:(double)a0 height:(double)a1;
+ (void)stopGameLive:(unsigned long long)a0 complete:(id /* block */)a1 nav:(id)a2;
+ (void)joinTeam:(id)a0 complete:(id /* block */)a1;
+ (void)reportMenuLiveButtonExpose;


@end
