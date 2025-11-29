@class NSMutableDictionary, WAEJJavaScriptView;

@interface WAEJRenderTriggerCollection : NSObject {
    NSMutableDictionary *triggers;
    int lastId;
    WAEJJavaScriptView *scriptView;
}

- (id)initWithScriptView:(id)a0;
- (void)dealloc;
- (int)scheduleCallback:(struct OpaqueJSValue { } *)a0 isMain:(BOOL)a1;
- (void)cancelId:(int)a0;
- (void)update;

@end
