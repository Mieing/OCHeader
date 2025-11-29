@interface IamBizCppToNativeManagerCallback : NSObject {
    struct IamBizCppToNativeManagerDispatcherBridgeObjcImpl { void /* function */ **x0; struct IamBizCppToNativeManagerDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct IamBizCppToNativeManagerDispatcherBridgeObjcImpl { void /* function */ **x0; struct IamBizCppToNativeManagerDispatcherCallback *x1; id x2; } *)a0;
- (void)onSendMessageComplete:(unsigned long long)a0 response:(id)a1;
- (void)onNotifyMessageEvent:(id)a0;
- (void)onGetMeTabOpenStateComplete:(unsigned long long)a0 canOpen:(BOOL)a1 finderOpen:(BOOL)a2;

@end
