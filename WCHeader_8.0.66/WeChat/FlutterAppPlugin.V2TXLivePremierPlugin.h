@interface FlutterAppPlugin.V2TXLivePremierPlugin : NSObject <V2TXLivePremierObserver> {
    void /* unknown type, empty encoding */ channel;
    void /* unknown type, empty encoding */ pluginManager;
}

- (void)onLog:(long long)a0 log:(id)a1;
- (void)onLicenceLoaded:(int)a0 Reason:(id)a1;
- (void)setLicenceWithCall:(id)a0 result:(id /* block */)a1;
- (void)getSDKVersionStrWithCall:(id)a0 result:(id /* block */)a1;
- (void)setLogConfigWithCall:(id)a0 result:(id /* block */)a1;
- (void)setEnvironmentWithCall:(id)a0 result:(id /* block */)a1;
- (void)setSocks5ProxyWithCall:(id)a0 result:(id /* block */)a1;
- (void)setUserIdWithCall:(id)a0 result:(id /* block */)a1;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;

@end
