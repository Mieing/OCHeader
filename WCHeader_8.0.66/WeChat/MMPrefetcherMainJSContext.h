@class JSValue, MMBaseJsApiHandler;

@interface MMPrefetcherMainJSContext : MMWebJSContext

@property (retain, nonatomic) MMBaseJsApiHandler *baseJsApiHandler;
@property (retain, nonatomic) JSValue *cleanAtomCallback;

- (id)initWithJVM:(id)a0 name:(id)a1;
- (void)setupForCleanAtomString;
- (void)cleanAtomString;
- (id)invoke:(id)a0 func:(id)a1 params:(id)a2;
- (void)dispatchEventToTarget:(id)a0 event:(id)a1 extraData:(id)a2;
- (void)callbackToContextWithEventType:(id)a0 event:(id)a1;
- (void)internalInit;
- (void).cxx_destruct;

@end
