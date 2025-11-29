@interface connectivity_plus.ConnectivityPlusPlugin : NSObject <FlutterPlugin, FlutterStreamHandler> {
    void /* unknown type, empty encoding */ connectivityProvider;
    void /* unknown type, empty encoding */ eventSink;
}

+ (void)registerWithRegistrar:(id)a0;

- (void)detachFromEngineForRegistrar:(id)a0;
- (void)handleMethodCall:(id)a0 result:(id /* block */)a1;
- (id)onListenWithArguments:(id)a0 eventSink:(id /* block */)a1;
- (id)onCancelWithArguments:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
