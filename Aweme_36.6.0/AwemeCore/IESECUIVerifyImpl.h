@class NSMutableDictionary, CADisplayLink, IESECUIVerifyJSWorker, NSString, NSMutableArray, NSObject;
@protocol OS_dispatch_queue;

@interface IESECUIVerifyImpl : NSObject <IESECUIVerifyService>

@property (retain, nonatomic) IESECUIVerifyJSWorker *jsWorker;
@property (nonatomic) BOOL jsWorkerLoaded;
@property (nonatomic) BOOL jsWorkerLoadedErr;
@property (retain, nonatomic) NSMutableArray *taskQueue;
@property (nonatomic) BOOL isTaskExecuting;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *taskExecutionQueue;
@property (retain, nonatomic) CADisplayLink *displayLink;
@property long long last;
@property (retain, nonatomic) NSMutableDictionary *callbackMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)currentMilliseconds;
+ (void)handleUIVerifyWithConfig:(id)a0;
+ (void)handleUIVerifyWithIndentifier:(id)a0 Result:(id)a1;
+ (id)sharedInstance;

- (id)snapshotImage:(id)a0;
- (void)executeNextTask;
- (void)performOCROnImage:(id)a0 completion:(id /* block */)a1;
- (void)traceAfterRunLoop:(long long)a0 complete:(id /* block */)a1;
- (id)preprocessImageForOCR:(id)a0;
- (void)addTaskWithConfig:(id)a0;
- (void).cxx_destruct;
- (void)setup;
- (void)stopDisplayLink;

@end
