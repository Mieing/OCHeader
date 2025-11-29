@class BDPLynxCardUtil;

@interface BDPPluginLynxCardComponent : BDPBridgeInstancePlugin

@property (retain, nonatomic) BDPLynxCardUtil *lynxCardUtil;

+ (unsigned long long)pluginMode;

- (id)lynxComponentsWithInstance:(id)a0 pagePath:(id)a1;
- (void)insertLynxViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)updateLynxViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)operateLynxViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)removeLynxViewWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)preloadLynxComponentWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void)sendLynxViewMessageWithParam:(id)a0 callback:(id /* block */)a1 instance:(id)a2;
- (void).cxx_destruct;

@end
