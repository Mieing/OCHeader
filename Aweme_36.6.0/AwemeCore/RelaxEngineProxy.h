@class NSDictionary;

@interface RelaxEngineProxy : LynxEngineProxy {
    void *relaxEngine_;
    NSDictionary *customEventTypeMapping_;
}

+ (void)mapKey:(id)a0 toKey:(id)a1 inDictionary:(id)a2 removeSrcKey:(BOOL)a3;

- (void)sendCustomEvent:(id)a0;
- (void)sendSyncTouchEvent:(id)a0;
- (void)sendSyncMultiTouchEvent:(id)a0;
- (void)sendGestureEvent:(int)a0 event:(id)a1;
- (void)onPseudoStatusChanged:(int)a0 fromPreStatus:(int)a1 toCurrentStatus:(int)a2;
- (void)sendDrawEndEvent;
- (void).cxx_destruct;
- (id)init;
- (void)setEngine:(void *)a0;

@end
