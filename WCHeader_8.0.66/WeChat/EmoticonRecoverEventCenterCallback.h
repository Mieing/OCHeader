@interface EmoticonRecoverEventCenterCallback : NSObject {
    struct EmoticonRecoverEventCenterDispatcherBridgeObjcImpl { void /* function */ **x0; struct EmoticonRecoverEventCenterDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct EmoticonRecoverEventCenterDispatcherBridgeObjcImpl { void /* function */ **x0; struct EmoticonRecoverEventCenterDispatcherCallback *x1; id x2; } *)a0;
- (void)onOnEmoticonRecoverLogicFinishedComplete:(unsigned long long)a0;
- (void)onOnEmoticonRecoverLogicFailedComplete:(unsigned long long)a0;
- (void)onOnEmoticonRecoverLogicDownloadedSingleEmoticonComplete:(unsigned long long)a0;
- (void)onOnEmoticonRecoverLogicFinishedPartSyncComplete:(unsigned long long)a0;
- (void)onOnEmoticonRecoverLogicNotifyDownloadProgressComplete:(unsigned long long)a0;

@end
