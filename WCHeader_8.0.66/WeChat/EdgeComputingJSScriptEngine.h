@class NSString, NSMutableArray, JSContext;

@interface EdgeComputingJSScriptEngine : MMObject <EdgeComputingScriptEngineProtocol> {
    JSContext *context;
    NSMutableArray *jsApis;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)registerJsApi;
- (BOOL)loadScript:(id)a0;
- (int)executeIntFunction:(id)a0 withData:(id)a1 withArgs:(id)a2;
- (long long)executeLongFunction:(id)a0 withData:(id)a1 withArgs:(id)a2;
- (id)executeStringFunction:(id)a0 withData:(id)a1 withArgs:(id)a2;
- (id)executeArrayFunction:(id)a0 withData:(id)a1 withArgs:(id)a2;
- (void)clear;
- (void).cxx_destruct;

@end
