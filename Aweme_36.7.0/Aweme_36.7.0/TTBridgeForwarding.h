@class BDXThreadSafeDictionary;

@interface TTBridgeForwarding : NSObject

@property (retain, nonatomic) BDXThreadSafeDictionary *aliasDic;

+ (id)sharedInstance;

- (id)amendAliasWith:(id)a0;
- (id)_generatePluginWithCommand:(id)a0 engine:(id)a1;
- (void)forwardPluginWithCommand:(id)a0 engine:(id)a1 completion:(id /* block */)a2;
- (void)invoke:(id)a0 completion:(id /* block */)a1 engine:(id)a2;
- (void)forwardWithCommand:(id)a0 engine:(id)a1 completion:(id /* block */)a2;
- (void)forwardWithCommand:(id)a0 weakEngine:(id)a1 completion:(id /* block */)a2;
- (void)registerPlugin:(id)a0 forBridge:(id)a1;
- (void)unregisterPluginForBridge:(id)a0;
- (id)aliasForOrig:(id)a0;
- (void)_installAssociatedPluginsOnEngine:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
