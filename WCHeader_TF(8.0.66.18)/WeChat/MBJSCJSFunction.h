@class MBJSCRuntime, JSContext;

@interface MBJSCJSFunction : MBJSFunction

@property (weak, nonatomic) JSContext *context;
@property (weak, nonatomic) MBJSCRuntime *runtime;
@property (nonatomic) void *callback;

- (void)invoke:(id)a0;
- (void)invokeWithDict:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
