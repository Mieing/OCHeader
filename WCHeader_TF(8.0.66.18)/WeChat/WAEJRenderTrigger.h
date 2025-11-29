@class WAEJJavaScriptView, NSDate;

@interface WAEJRenderTrigger : NSObject {
    struct OpaqueJSValue { } *callback;
    WAEJJavaScriptView *scriptView;
}

@property (retain, nonatomic) NSDate *target;
@property (readonly) BOOL active;
@property (nonatomic) BOOL subContext;

- (id)initWithScriptView:(id)a0 callback:(struct OpaqueJSValue { } *)a1;
- (void)dealloc;
- (void)invoke;

@end
