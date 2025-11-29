@class NSObject;
@protocol WXVoIPAudioUnitThreadDaemonDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface WXVoIPAudioUnitThreadDaemon : NSObject

@property (retain, nonatomic) id<WXVoIPAudioUnitThreadDaemonDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *timer;
@property BOOL isThreadAlive;
@property unsigned short maxCaptureSampleValue;
@property unsigned int timingIntervalInMS;

- (id)init:(id)a0 delegate:(id)a1 intervalInMs:(unsigned int)a2;
- (void)dealloc;
- (void)initTimer;
- (void)notifyCapturing:(const struct AudioFrame { void /* function */ **x0; int x1; int x2; int x3; int x4; int x5; BOOL x6; int x7; BOOL x8; unsigned int x9; unsigned int x10; unsigned short x11; int x12; int x13; int x14; int x15; unsigned short x16; char *x17; int x18; int x19; BOOL x20; } *)a0;
- (void)notifyPlaying;
- (void)timingProcess;
- (BOOL)needCapture;
- (BOOL)needPlay;
- (BOOL)isCaptureMute;
- (BOOL)isThreadDead;
- (void).cxx_destruct;

@end
