@class NSMutableDictionary, WAEJJavaScriptView;

@interface WAEJTimerCollection : NSObject {
    NSMutableDictionary *timers;
    int lastId;
    WAEJJavaScriptView *scriptView;
    int lastUpdateId;
    int signalWaitingId;
    BOOL skipCurrentTaskLoop;
}

- (id)initWithScriptView:(id)a0;
- (void)dealloc;
- (int)scheduleCallback:(struct OpaqueJSValue { } *)a0 isMain:(BOOL)a1 interval:(double)a2 repeat:(BOOL)a3;
- (void)cancelId:(int)a0;
- (void)update;
- (void)updateImmediate:(id)a0;
- (void)skipCurrentTaskLoop;

@end
