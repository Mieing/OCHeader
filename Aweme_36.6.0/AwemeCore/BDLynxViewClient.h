@class NSString, NSDictionary;
@protocol BDLynxClientLifeCycleDelegate;

@interface BDLynxViewClient : NSObject <LynxViewLifecycle, LynxImageFetcher>

@property (copy, nonatomic) NSString *channel;
@property (copy, nonatomic) NSString *bundlePath;
@property (copy, nonatomic) NSString *sessionID;
@property (copy, nonatomic) NSString *errorMessage;
@property (copy, nonatomic) NSString *originURL;
@property (nonatomic) double startLoadTime;
@property (nonatomic) double pageStartTime;
@property (nonatomic) double firstDrawTime;
@property (nonatomic) double firstScreenTime;
@property (nonatomic) double pageFinishTime;
@property (nonatomic) double binaryDecodeInterval;
@property (nonatomic) double decodeToLoadInterval;
@property (nonatomic) double lynxLoadInterval;
@property (nonatomic) double finishLoadTasmInterval;
@property (nonatomic) double firstDrawInterval;
@property (nonatomic) double layoutInterval;
@property (nonatomic) double firstScreenInterval;
@property (nonatomic) double renderPageInterval;
@property (nonatomic) double pageFinishInterval;
@property (nonatomic) double diffRootInterval;
@property (nonatomic) double diffSameRootInterval;
@property (nonatomic) double jsFinishLoadCoreInterval;
@property (nonatomic) double jsFinishLoadAppInterval;
@property (nonatomic) double jsTasmAllReadyInterval;
@property (nonatomic) double ttiInterval;
@property (nonatomic) BOOL isFirstScreenTracked;
@property (nonatomic) BOOL isFinishTracked;
@property (copy, nonatomic) NSString *reportBid;
@property (copy, nonatomic) NSString *reportPid;
@property (retain, nonatomic) NSDictionary *perfDict;
@property (weak, nonatomic) id<BDLynxClientLifeCycleDelegate> lifeCycleDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)viewDidChangeIntrinsicContentSize:(id)a0;
- (id /* block */)loadImageWithURL:(id)a0 size:(struct CGSize { double x0; double x1; })a1 contextInfo:(id)a2 completion:(id /* block */)a3;
- (void)lynxViewDidFirstScreen:(id)a0;
- (void)lynxViewDidStartLoading:(id)a0;
- (void)lynxView:(id)a0 didLoadFinishedWithUrl:(id)a1;
- (void)lynxViewDidPageUpdate:(id)a0;
- (void)lynxViewDidConstructJSRuntime:(id)a0;
- (void)lynxViewDidUpdate:(id)a0;
- (void)lynxViewDidChangeIntrinsicContentSize:(id)a0;
- (void)lynxView:(id)a0 didLoadFailedWithUrl:(id)a1 error:(id)a2;
- (void)lynxView:(id)a0 didRecieveError:(id)a1;
- (void)lynxView:(id)a0 didReceiveFirstLoadPerf:(id)a1;
- (void)lynxView:(id)a0 didReceiveUpdatePerf:(id)a1;
- (id /* block */)loadCanvasImageWithURL:(id)a0 contextInfo:(id)a1 completion:(id /* block */)a2;
- (void)trackLynxRenderPipelineTrigger:(id)a0;
- (double)currentTimeSince1970;
- (void)updateChannel:(id)a0 bundlePath:(id)a1 sessionID:(id)a2 pageStartTime:(double)a3;
- (void)updateBid:(id)a0 pid:(id)a1;
- (void)trackLynxLifeCycleTrigger:(id)a0 logType:(id)a1 service:(id)a2;
- (id)initWithChannel:(id)a0 bundlePath:(id)a1 sessionID:(id)a2 pageStartTime:(double)a3;
- (void)convertLifeCycleInterval:(id)a0;
- (void)reportJsError:(id)a0;
- (void)modifyJsonObject:(id)a0;
- (void)sendDataToServer:(id)a0;
- (void).cxx_destruct;

@end
