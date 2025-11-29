@class AudioPlayerUserData, MMTimer, NSString;
@protocol AudioPlayerDelegate;

@interface BaseAudioPlayer : NSObject <WCAudioSessionExt, WCProximityStateRecognizerDelegate, MsgAudioPlayerProtocol> {
    struct PlayerState { id x0; unsigned int x1; struct AudioStreamBasicDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; } x2; struct OpaqueAudioQueue *x3; struct AudioQueueBuffer *x4[3]; unsigned int x5; long long x6; unsigned int x7; BOOL x8; BOOL x9; BOOL x10; BOOL x11; BOOL x12; id x13; unsigned int x14; id x15; struct AMRDecodeFloat *x16; id x17; id x18; unsigned int x19; struct AudioStreamPacketDescription *x20; struct OpaqueAudioFileID *x21; id x22; struct AudioDecoder *x23; unsigned int x24; short *x25; unsigned int x26; unsigned int x27; id x28; } *mAqData;
    int mLastNumber;
    float lastMeterPeak;
    BOOL mRouteChanging;
}

@property (retain) AudioPlayerUserData *mUserData;
@property (nonatomic) long long state;
@property (retain, nonatomic) MMTimer *meterTimer;
@property (nonatomic) BOOL isFixingEarVolume;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double playRate;
@property (nonatomic) BOOL stopInBackground;
@property (weak, nonatomic) id<AudioPlayerDelegate> delegate;

- (id)init;
- (void)observeOutputVolume;
- (void)dealloc;
- (void)initSession;
- (BOOL)initQueue;
- (void)updateSession;
- (void)asyncUpdateSession;
- (void)updateSetting;
- (void)updateStatus;
- (BOOL)preparePlayNotNotify;
- (BOOL)preparePlayWithFile:(id)a0;
- (BOOL)preparePlayWithFile:(id)a0 sync:(BOOL)a1;
- (void)asyncPreparePlayWithFile:(id)a0 finished:(id /* block */)a1;
- (void)setUserData:(id)a0;
- (id)getUserData;
- (void)play;
- (void)setProgress:(unsigned int)a0;
- (void)switchToEarMode:(BOOL)a0;
- (void)pause;
- (void)resume;
- (void)replay;
- (void)playAtTime:(unsigned int)a0;
- (void)asyncPlayAtTime:(unsigned int)a0;
- (void)stop;
- (void)autostop;
- (void)stopAndNotifyUI;
- (void)stopButNotNotify;
- (unsigned int)currentTime;
- (int)getCurrentTimeMs;
- (BOOL)isPlaying;
- (void)setSpeakerMode;
- (void)setEarpieceMode;
- (void)setAutoMode;
- (void)swithOutputToMicroPhone;
- (void)switchOutputToEarpieceMode;
- (BOOL)lockIdleTime;
- (void)BeginNotifyOnMainThread:(id)a0;
- (void)EndNotifyOnMainThread;
- (void)openActionRecognition;
- (void)onProximityStateChangeToCloseEar;
- (void)onProximityStateChangeToAwayFromEar;
- (void)onWCAudioSessionNewDeviceAvailable;
- (void)onWCAudioSessionOldDeviceUnavailable;
- (void)onWCAudioSessionCategoryChange:(unsigned long long)a0;
- (void)onWCAudioSessionOverride;
- (float)TimerCheckMeter;
- (void)handleInterruption;
- (void)handleEnterBackground;
- (void)registerNotification;
- (void)unregisterNotification;
- (void).cxx_destruct;

@end
