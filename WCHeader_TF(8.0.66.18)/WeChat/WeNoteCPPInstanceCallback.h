@interface WeNoteCPPInstanceCallback : NSObject {
    struct WeNoteCPPInstanceDispatcherBridgeObjcImpl { void /* function */ **x0; struct WeNoteCPPInstanceDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct WeNoteCPPInstanceDispatcherBridgeObjcImpl { void /* function */ **x0; struct WeNoteCPPInstanceDispatcherCallback *x1; id x2; } *)a0;
- (void)onsaveNoteComplete:(unsigned long long)a0 hasUpdate:(BOOL)a1 htmlString:(id)a2 attributeList:(id)a3;

@end
