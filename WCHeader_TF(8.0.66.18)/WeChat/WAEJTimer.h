@class WAEJJavaScriptView;

@interface WAEJTimer : NSObject {
    double interval;
    struct OpaqueJSValue { } *callback;
    BOOL repeat;
    WAEJJavaScriptView *scriptView;
}

@property (nonatomic) double target;
@property (readonly) BOOL active;
@property (nonatomic) BOOL subContext;

- (id)initWithScriptView:(id)a0 callback:(struct OpaqueJSValue { } *)a1 interval:(double)a2 repeat:(BOOL)a3;
- (void)dealloc;
- (void)check;

@end
