@class LynxEngineProxy, NSMutableArray;

@interface LynxEventEmitter : NSObject {
    LynxEngineProxy *_engineProxy;
    NSMutableArray *eventObservers_;
    id /* block */ eventReporter_;
    id /* block */ intersectionObserver_;
    long long eventID_;
}

+ (void)prepareInterceptForKitView:(id)a0;

- (void)startEventCapture:(long long)a0;
- (void)startEventBubble:(long long)a0;
- (void)startEventFire:(BOOL)a0 withEventID:(long long)a1;
- (void)sendCustomEvent:(id)a0;
- (BOOL)onLynxEvent:(id)a0;
- (BOOL)shouldIntercept;
- (BOOL)bdx_dispatchTouchEvent:(id)a0 target:(id)a1;
- (void)dispatchTouchEventToOutterContainer:(id)a0;
- (id)getKitView;
- (void)dispatchCustomEvent:(id)a0;
- (void)dispatchGestureEvent:(int)a0 event:(id)a1;
- (void)onPseudoStatusChanged:(int)a0 fromPreStatus:(int)a1 toCurrentStatus:(int)a2;
- (void)startEventGenerate:(id)a0;
- (void)notifyEventObservers:(long long)a0 event:(id)a1;
- (id)initWithLynxEngineProxy:(id)a0;
- (void)setEventReporterBlock:(id /* block */)a0;
- (void)setIntersectionObserverBlock:(id /* block */)a0;
- (BOOL)dispatchTouchEvent:(id)a0;
- (void)dispatchMultiTouchEvent:(id)a0;
- (void)dispatchLayoutEvent;
- (void)notifyIntersectionObserver;
- (void)setEventID:(long long)a0;
- (void).cxx_destruct;
- (void)addObserver:(id)a0;
- (void)removeObserver:(id)a0;

@end
