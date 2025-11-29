@class NSString, MMBaseJsApiHandler;

@interface MMCanvasMainJSContext : MMWebJSContext

@property (retain, nonatomic) MMBaseJsApiHandler *baseJsApiHandler;
@property (copy, nonatomic) id /* block */ postMessageCb;
@property (copy, nonatomic) NSString *systemInfoJsonStr;

- (id)initWithJVM:(id)a0 name:(id)a1 postMessageCb:(id /* block */)a2 systemInfoJson:(id)a3;
- (void)dealloc;
- (void)initBaseJsApiHandler;
- (void)injectNativeContext;
- (void)dispatchCallback:(id)a0 params:(id)a1;
- (void)dispatchEvent:(id)a0 eventInfo:(id)a1;
- (void).cxx_destruct;

@end
