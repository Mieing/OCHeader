@class NSString, JsWorkerIOS;
@protocol AnnieXWorkerDelegate;

@interface AnnieXWorker : NSObject <MessageCallback, ErrorCallback>

@property (weak, nonatomic) id<AnnieXWorkerDelegate> delegate;
@property (retain, nonatomic) JsWorkerIOS *worker;
@property (retain, nonatomic) NSString *workerId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)createWorker;
- (id)initWithDelegate:(id)a0 workerId:(id)a1;
- (void)terminate;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (void)evaluateScript:(id)a0;
- (void)handleError:(id)a0;
- (void)postMessage:(id)a0;

@end
