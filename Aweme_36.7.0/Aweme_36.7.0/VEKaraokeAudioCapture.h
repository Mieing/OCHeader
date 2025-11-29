@class NSString;

@interface VEKaraokeAudioCapture : VERunloopObject <VEAudioCaptureProtocol>

@property (copy, nonatomic) id /* block */ audioCaptureBlock;
@property (copy, nonatomic) id /* block */ audioConvertCallback;
@property (copy, nonatomic) id /* block */ audioBGMOutputCallback;
@property (copy, nonatomic) id /* block */ audioBGMResultCallback;
@property (copy, nonatomic) id /* block */ audioBGMStatusCallback;
@property (nonatomic) BOOL needConvert;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; })audioDescription;

- (void)setMusicVolume:(double)a0;
- (double)recordVolume;
- (void)setRecordVolume:(double)a0;
- (double)accompanyVolume;
- (void)setAccompanyMusicFile:(id)a0 fromTime:(double)a1 OriginalSingMusicFile:(id)a2 startTime:(double)a3;
- (void)mutedAccompany:(BOOL)a0;
- (void)accompanySeekToTime:(double)a0;
- (void)echoEnable:(BOOL)a0;
- (double)getAccompanyCurrentTime;
- (double)getDuetKaraokeModeCurrentTime;
- (double)getOriginalSingCurrentTime;
- (BOOL)isAudioCaptureRuning;
- (void)mutedOrignalSing:(BOOL)a0;
- (void)originalSingSeekToTime:(double)a0;
- (double)originalSingVolume;
- (void)releaseAudioCapture;
- (void)routeChanged;
- (void)seekDuetKaraokeModeToTime:(double)a0;
- (void)seekToAccompanyTime:(double)a0 accompanyStartWritingTime:(double)a1 originalSingTime:(double)a2 originalSingStartWritingTime:(double)a3;
- (void)setAccompanyVolume:(double)a0;
- (void)setDuetKaraokeModeMusic:(id)a0 fromTime:(double)a1;
- (void)setEnableEarBack:(BOOL)a0;
- (void)setOriginalSingVolume:(double)a0;
- (void)startAudioCapture:(id /* block */)a0 withPrivacyCert:(id)a1;
- (void)stopAudioCapture:(id)a0;
- (void).cxx_destruct;
- (void)play;
- (void)pause;
- (double)musicVolume;

@end
