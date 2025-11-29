@class NSString, WKWebView, NSObject, BDPUniqueID;
@protocol BDPEngineProtocol, OS_dispatch_source, OS_dispatch_queue, BDPGameScreenRecorderDelegate;

@interface BDPGameScreenRecorder : NSObject <BDPEngineFrameDelegate>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) struct CGSize { double width; double height; } castSize;
@property (weak, nonatomic) WKWebView *webView;
@property (nonatomic) long long engineType;
@property (weak, nonatomic) id<BDPEngineProtocol> renderEngine;
@property (nonatomic) long long engineListenerID;
@property (nonatomic) float framesPerSecond;
@property (nonatomic) struct __CVBuffer { } *lastPixelBuffer;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } pixelBufferLock;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastCMTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *screenRecordQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *flushBufferTimer;
@property (nonatomic) BOOL timerIsRunning;
@property (nonatomic) long long status;
@property (weak, nonatomic) id<BDPGameScreenRecorderDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)applicationEnterBackground:(id)a0;
- (void)registerMessage;
- (void)applicationEnterForeground:(id)a0;
- (void)startScreenRecorderWithUniqueID:(id)a0 castSize:(struct CGSize { double x0; double x1; })a1;
- (void)stopScreenRecorderWithUniqueID:(id)a0;
- (void)onFrameReady:(struct __CVBuffer { } *)a0;
- (void)p_stopScreenRecorderWithEngineType:(long long)a0 renderEngine:(id)a1;
- (void)changeTimerStatusTo:(BOOL)a0;
- (struct __CVBuffer { } *)lockGetLastPixelBuffer;
- (void)changeRunningStatusTo:(long long)a0;
- (long long)getEngineType:(id)a0;
- (id)getFlushBufferTimer:(long long)a0;
- (BOOL)p_startScreenRecorderWithEngineType:(long long)a0 renderEngine:(id)a1;
- (void)convertUIImageToPixelBuffer:(id)a0;
- (void)cacheLastPixelBuffer:(struct __CVBuffer { } *)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void)pushFrame;
- (void)sendRunningStatusChange:(BOOL)a0;
- (void)processWebView:(BOOL)a0;
- (struct CGSize { double x0; double x1; })getGameSize:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)reset;
- (void)dealloc;

@end
