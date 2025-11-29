@interface ExtDeviceNativeUtilCallback : NSObject {
    struct ExtDeviceNativeUtilDispatcherBridgeObjcImpl { void /* function */ **x0; struct ExtDeviceNativeUtilDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct ExtDeviceNativeUtilDispatcherBridgeObjcImpl { void /* function */ **x0; struct ExtDeviceNativeUtilDispatcherCallback *x1; id x2; } *)a0;
- (void)onGetChatPackageComplete:(unsigned long long)a0 isLastPkg:(BOOL)a1 offset:(unsigned long long)a2 chatPackage:(id)a3;
- (void)onGetAllConversationListComplete:(unsigned long long)a0 conversationList:(id)a1;
- (void)onSendSyncStatusNotifyComplete:(unsigned long long)a0 errCode:(int)a1 errMsg:(id)a2;

@end
