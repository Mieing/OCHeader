@class NSString, WKWebView, BDPUniqueID, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface BDPScreenRecorder : NSObject <BDPScreenRecorder, BDPContainerLifeCycleMessage, BDPBootLifeCycleMessage, BDPAppRouteChangeMessage>

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (nonatomic) float framesPerSecond;
@property (nonatomic) unsigned long long state;
@property (nonatomic) BOOL isRecording;
@property (nonatomic) struct __CVBuffer { } *lastPixelBuffer;
@property (nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } lastCMTime;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *screenRecordQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *flushBufferTimer;
@property (nonatomic) BOOL isSuspend;
@property (retain, nonatomic) WKWebView *webView;
@property (copy, nonatomic) NSString *page_path;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLaunch;

- (void)applicationEnterBackground:(id)a0;
- (id)initService;
- (void)viewDidAppear:(id)a0 uniqueID:(id)a1;
- (void)viewWillDisappear:(id)a0 uniqueID:(id)a1;
- (void)onAppRouteChangePageDidEnterWithPageID:(long long)a0 pageURL:(id)a1 uniqueID:(id)a2;
- (void)startScreenRecorderWithUniqueID:(id)a0 extra:(id)a1;
- (void)stopScreenRecorder:(id)a0;
- (void)screenRecorderDidStartWithAppID:(id)a0 fps:(float)a1 error:(id)a2 extra:(id)a3;
- (void)screenRecorderDidStopWithAppID:(id)a0 error:(id)a1 extra:(id)a2;
- (void)screenRecorderOnSwitch:(unsigned long long)a0 suspend:(BOOL)a1;
- (void)applicationEnterForeground:(id)a0;
- (void)p_registerNotification;
- (void)convertUIImageToPixelBuffer:(id)a0;
- (void)cacheLastPixelBuffer:(struct __CVBuffer { } *)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (BOOL)notifyErrorWithAppID:(id)a0 error:(id)a1 extra:(id)a2;
- (void)updateSnapShotPageWithUniqueID:(id)a0;
- (void)changeRecordingOpenState:(BOOL)a0 extra:(id)a1;
- (void)changeTimerSuspendState:(BOOL)a0;
- (void)processWebView;
- (void)processPixelBuffer:(struct __CVBuffer { } *)a0 pts:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;
- (void).cxx_destruct;
- (void)dealloc;
- (void)resetConfig:(id)a0;

@end
