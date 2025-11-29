@class JSContext;

@interface JSCDebugger : NSObject

@property (weak, nonatomic) JSContext *context;

+ (id)debuggerWithContext:(id)a0;
+ (BOOL)isSupportedDebugger;
+ (struct __CFString { } *)JSCDebuggerRunLoopMode;
+ (void)JSCDebuggerQueueTaskOnGlobalQueue:(id /* block */)a0;

- (BOOL)setupJSCDebuggerConnection:(id /* block */)a0;
- (BOOL)setupJSCDebuggerConnection:(id /* block */)a0 needFilter:(BOOL)a1;
- (void)sendMessageToJSCDebugger:(id)a0;
- (void)disconnectToJSCDebugger;
- (void)getMemoryConsume:(id /* block */)a0;
- (id)debuggerWrapperFromContext;
- (void)setupJSCConnectionIfNeeded:(BOOL)a0;
- (void)removeDebuggerWrapper;
- (id /* block */)setupConnectionAdapter:(void *)a0 disconnectBlock:(id *)a1;
- (void).cxx_destruct;

@end
