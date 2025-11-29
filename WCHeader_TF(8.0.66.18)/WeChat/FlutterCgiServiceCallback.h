@interface FlutterCgiServiceCallback : NSObject {
    struct FlutterCgiServiceDispatcherBridgeObjcImpl { void /* function */ **x0; struct FlutterCgiServiceDispatcherCallback *x1; id x2; } *dispatcher_bridge;
}

- (id)initWithCpp:(struct FlutterCgiServiceDispatcherBridgeObjcImpl { void /* function */ **x0; struct FlutterCgiServiceDispatcherCallback *x1; id x2; } *)a0;
- (void)onSendComplete:(unsigned long long)a0 errorType:(long long)a1 errorCode:(long long)a2 data:(id)a3;

@end
