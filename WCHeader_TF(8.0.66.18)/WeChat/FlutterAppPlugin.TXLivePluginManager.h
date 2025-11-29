@interface FlutterAppPlugin.TXLivePluginManager : NSObject <FlutterPlugin> {
    void /* unknown type, empty encoding */ pusherMap;
    void /* unknown type, empty encoding */ playerMap;
    void /* unknown type, empty encoding */ premier;
    void /* unknown type, empty encoding */ channel;
    void /* unknown type, empty encoding */ registrar;
    void /* unknown type, empty encoding */ viewFactory;
}

+ (void)registerWithRegistrar:(id)a0;

- (void)handleMethodCall:(id)a0 result:(id /* block */)a1;
- (id)init;
- (void).cxx_destruct;

@end
