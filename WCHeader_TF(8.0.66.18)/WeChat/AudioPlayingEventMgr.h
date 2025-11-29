@class NSString, NSMutableArray;

@interface AudioPlayingEventMgr : MMUserService <MMServiceProtocol, AudioPlayingEvent> {
    NSMutableArray *m_AVAudioPlayers;
    NSMutableArray *m_AVPlayers;
    NSMutableArray *m_OpenALs;
    NSMutableArray *m_audioUnits;
    NSMutableArray *m_webViews;
}

@property (nonatomic) BOOL canPlaySound;
@property (readonly, nonatomic) BOOL isWebViewPlaying;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)hookAudio;

- (void)onServiceInit;
- (void)turnAllAudioPlayerVolumeOn:(BOOL)a0;
- (void)onEnterWebView;
- (void)onLeaveWebView;
- (void)onAVAudioPlayerInit:(id)a0;
- (void)onAVAudioPlayerWillPlay:(id)a0;
- (void)onAVAudioPlayer:(id)a0 setVolume:(float)a1 stop:(inout BOOL *)a2;
- (void)onAVPlayerInit:(id)a0;
- (void)onAVPlayerWillPlay:(id)a0;
- (void)onAVPlayer:(id)a0 setVolume:(float)a1 stop:(inout BOOL *)a2;
- (void)onAudioQueueNewOutput:(struct OpaqueAudioQueue { } *)a0;
- (void)onAudioQueue:(struct OpaqueAudioQueue { } *)a0 willEnqueueBuffer:(struct AudioQueueBuffer { unsigned int x0; void *x1; unsigned int x2; void *x3; unsigned int x4; struct AudioStreamPacketDescription *x5; unsigned int x6; } *)a1;
- (void)onAudioUnitPlaybackEnd:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a0;
- (void)onSetScheduleAudioSlice:(struct ScheduledAudioSlice { struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } x0; void /* function */ *x1; void *x2; unsigned int x3; unsigned int x4; void *x5; unsigned int x6; struct AudioBufferList *x7; } *)a0;
- (void)onALSourcefBegin:(unsigned int)a0 param:(int)a1 value:(float)a2 stop:(inout BOOL *)a3;
- (void)onALSourcePlayBegin:(unsigned int)a0;
- (void)onALGenSources:(unsigned int)a0;
- (void)onALDeleteSources:(unsigned int)a0;
- (void)onSystemSoundWillPlay:(unsigned int)a0 stop:(inout BOOL *)a1;
- (void)onWebViewControllerAppear:(id)a0;
- (void)onWebViewControllerDisappear:(id)a0;
- (void).cxx_destruct;

@end
