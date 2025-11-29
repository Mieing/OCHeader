@class NSString, JsWorkerIOS;
@protocol IESLatchWorkerDelegate;

@interface IESLatchWorker : NSObject <MessageCallback, ErrorCallback>

@property (weak, nonatomic) id<IESLatchWorkerDelegate> delegate;
@property (retain, nonatomic) JsWorkerIOS *worker;
@property (retain, nonatomic) NSString *latchID;
@property (copy, nonatomic) NSString *href;
@property (nonatomic) BOOL firstMonitor;
@property (nonatomic) BOOL enableXBridge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDelegate:(id)a0 latchID:(id)a1 href:(id)a2 enableXBridge:(BOOL)a3 bridgeExcutor:(id)a4;
- (void)createWorkerWithBridgeExcutor:(id)a0;
- (void)p_monitorDurationIfNeeded;
- (void)terminate;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;
- (BOOL)isRunning;
- (void)evaluateScript:(id)a0;
- (void)handleError:(id)a0;
- (void)postMessage:(id)a0;

@end
