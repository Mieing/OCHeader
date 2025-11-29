@class LSLiveAudioMixerHandle, NSString, LSLiveAudioEffect, LSLiveAudioConverter, LSLiveAudioPitchShifter, LSLiveAudioUnitConfig, NSObject, AVPlayer;
@protocol OS_dispatch_queue;

@interface LSLiveAudioUnitProcess : NSObject <AVAudioPlayerDelegate, LSLiveAudioMixerProtocol> {
    LSLiveAudioMixerHandle *_mixerHandle;
    struct AudioStreamBasicDescription { double mSampleRate; unsigned int mFormatID; unsigned int mFormatFlags; unsigned int mBytesPerPacket; unsigned int mFramesPerPacket; unsigned int mBytesPerFrame; unsigned int mChannelsPerFrame; unsigned int mBitsPerChannel; unsigned int mReserved; } _asbd;
    LSLiveAudioConverter *_musicConverter;
    LSLiveAudioConverter *_originalSingConverter;
    AVPlayer *_audioPlayer;
    double _recordVolume;
    double _musicVolume;
    long long _leftLoopCount;
    long long _curLoopCount;
    BOOL _enablePitchShifter;
    LSLiveAudioPitchShifter *_pitchShifter;
    LSLiveAudioPitchShifter *_pitchShifter2;
    void *LSEndLoopQueueKey;
    BOOL _playingBeforeInterruption;
    struct AudioFadingInterface { void /* function */ **x0; } *_audioFadingIns;
    struct mutex { struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } __m_; } fadeMutex;
}

@property BOOL isExpectedPlaying;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *loopEnd_queue;
@property (nonatomic) BOOL blueToothPlayAllowed;
@property (retain, nonatomic) LSLiveAudioEffect *audioEffect;
@property (copy, nonatomic) id /* block */ musicPlayEndBlock;
@property (nonatomic) BOOL closeProcess;
@property (copy, nonatomic) id /* block */ loopEndBlock;
@property (retain, nonatomic) LSLiveAudioUnitConfig *config;
@property (nonatomic) BOOL bEnableLoudNorm;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setMusicVolume:(double)a0;
- (double)getMusicVolume;
- (void)setMusicPlayerVolume:(double)a0;
- (double)getMusicPlayerVolume;
- (void)setEnableAudioPitchShifter:(BOOL)a0;
- (BOOL)isEnableAudioPitchShifter;
- (void)appBecomeActive;
- (void)audioRouteChangeListenerCallback:(id)a0;
- (void)checkPlayCategory;
- (void)p_playEndLoopCallback;
- (void)handlePlayerItemDidPlayToEndTimeNotification:(id)a0;
- (void)appBecomeInActive;
- (double)getCurrentPlayTime;
- (unsigned long long)readFirstFrameTick;
- (void)processAudioData:(short *)a0 dataSize:(unsigned int)a1 inNumberFrames:(unsigned int)a2;
- (void)p_handleStopBlock:(BOOL)a0;
- (void)runSyncOnEndQueue:(id /* block */)a0;
- (void)startProcess;
- (void)feedProcessBuffer:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 sampleFrames:(long long)a1 elementIndex:(unsigned int)a2 withMixerHandle:(id)a3;
- (void)replacePlayerItem:(id)a0;
- (BOOL)isUseExternalPluggUseA2DP:(id)a0;
- (void)pauseProcess;
- (void)stopProcess;
- (long long)getCurLoop;
- (long long)numberOfLoop;
- (double)getRecordVolume;
- (double)getMusicDuration;
- (void)getBgmAudioData:(short *)a0 dataSize:(unsigned int)a1 channels:(int)a2 inNumberFrames:(unsigned int)a3;
- (void)getOriginAudioData:(short *)a0 dataSize:(unsigned int)a1 channels:(int)a2 inNumberFrames:(unsigned int)a3;
- (void)processAudioBufferList:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0 inNumberFrames:(unsigned int)a1;
- (void)setRecordVolume:(double)a0;
- (void).cxx_destruct;
- (void)setPitch:(double)a0;
- (BOOL)isPlaying;
- (void)restart;
- (id).cxx_construct;
- (void)seekToTime:(double)a0;
- (id)initWithConfig:(id)a0;
- (void)dealloc;

@end
