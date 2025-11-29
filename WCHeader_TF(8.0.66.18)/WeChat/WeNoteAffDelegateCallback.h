@interface WeNoteAffDelegateCallback : NSObject {
    struct WeNoteAffDelegateDispatcherBridgeObjcImpl { void /* function */ **x0; struct WeNoteAffDelegateDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct WeNoteAffDelegateDispatcherBridgeObjcImpl { void /* function */ **x0; struct WeNoteAffDelegateDispatcherCallback *x1; id x2; } *)a0;
- (void)oncheckEnablePasteComplete:(unsigned long long)a0 enable:(BOOL)a1;
- (void)ongetAttributeInfoListFromClipBoardComplete:(unsigned long long)a0 attributeInfoList:(id)a1;

@end
