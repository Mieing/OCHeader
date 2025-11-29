@class NSDictionary;

@interface RelaxEngineProxy : LynxEngineProxy {
    void *relaxEngine_;
    NSDictionary *customEventTypeMapping_;
    id /* block */ touchEventCallback_;
    id /* block */ customEventCallback_;
}

+ (void)mapKey:(id)a0 toKey:(id)a1 inDictionary:(id)a2 removeSrcKey:(BOOL)a3;

- (void)sendCustomEvent:(id)a0;
- (void)scrollByListContainer:(int)a0 x:(float)a1 y:(float)a2 originalX:(float)a3 originalY:(float)a4;
- (void)scrollToPosition:(int)a0 position:(int)a1 offset:(float)a2 align:(int)a3 smooth:(BOOL)a4;
- (void)scrollStopped:(int)a0;
- (void)sendSyncTouchEvent:(id)a0;
- (void)sendSyncMultiTouchEvent:(id)a0;
- (void)sendGestureEvent:(int)a0 event:(id)a1;
- (void)onPseudoStatusChanged:(int)a0 fromPreStatus:(int)a1 toCurrentStatus:(int)a2;
- (void)setCustomEventCallback:(id /* block */)a0;
- (void)sendDrawEndEvent;
- (void).cxx_destruct;
- (id)init;
- (void)setEngine:(void *)a0;
- (void)setTouchEventCallback:(id /* block */)a0;

@end
