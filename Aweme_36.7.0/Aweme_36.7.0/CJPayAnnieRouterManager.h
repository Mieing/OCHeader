@class CJPayTimerManager, CJPayAnnieJSWorker, BDXBridgeEventSubscriber, NSString;

@interface CJPayAnnieRouterManager : NSObject

@property (retain, nonatomic) BDXBridgeEventSubscriber *subscriber;
@property (retain, nonatomic) CJPayTimerManager *timerManager;
@property (nonatomic) BOOL hasLoadURL;
@property (retain, nonatomic) CJPayAnnieJSWorker *jsWorker;
@property (copy, nonatomic) NSString *sessionId;

- (void)loadURL:(id)a0 container:(id)a1 context:(id)a2;
- (void)unsubscribeEvents;
- (void)subscribeLoadEventWithURL:(id)a0 container:(id)a1;
- (void)readFileFromURLAsync:(id)a0 completion:(id /* block */)a1;
- (void)loadURL:(id)a0 withContainer:(id)a1;
- (void).cxx_destruct;
- (void)dealloc;

@end
