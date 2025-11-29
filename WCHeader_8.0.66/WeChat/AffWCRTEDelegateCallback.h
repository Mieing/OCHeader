@interface AffWCRTEDelegateCallback : NSObject {
    struct AffWCRTEDelegateDispatcherBridgeObjcImpl { void /* function */ **x0; struct AffWCRTEDelegateDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct AffWCRTEDelegateDispatcherBridgeObjcImpl { void /* function */ **x0; struct AffWCRTEDelegateDispatcherCallback *x1; id x2; } *)a0;
- (void)onSayHelloComplete:(unsigned long long)a0;
- (void)onGetCurrentRecordingIdComplete:(unsigned long long)a0 recordingId:(id)a1;
- (void)onShowAlertComplete:(unsigned long long)a0;
- (void)onGetGeneralPastebordStringComplete:(unsigned long long)a0 pasteboardString:(id)a1;
- (void)onSetGeneralPasteBoardStringComplete:(unsigned long long)a0;
- (void)onGetNameForAttachmentTypeComplete:(unsigned long long)a0 typeName:(id)a1;
- (void)onGetCurrentTranslateLanguageComplete:(unsigned long long)a0 tolang:(id)a1;
- (void)onGetAttachmentExpiredWordingComplete:(unsigned long long)a0 wording:(id)a1;

@end
