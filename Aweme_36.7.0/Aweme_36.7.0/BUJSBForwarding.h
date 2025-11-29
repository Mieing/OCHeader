@class NSMutableDictionary;

@interface BUJSBForwarding : NSObject

@property (retain, nonatomic) NSMutableDictionary *aliasDic;

+ (id)sharedInstance;

- (id)amendAliasWith:(id)a0;
- (BOOL)forwardStaticPluginWithCommand:(id)a0 engine:(id)a1 completion:(id /* block */)a2;
- (BOOL)forwardDynamicPluginWithCommand:(id)a0 engine:(id)a1 completion:(id /* block */)a2;
- (id)_generatePluginWithCommand:(id)a0 engine:(id)a1;
- (id)aliasJSBForOrig:(id)a0;
- (void)forwardJSBWithCommand:(id)a0 engine:(id)a1 completion:(id /* block */)a2;
- (void)registeJSBAlias:(id)a0 for:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
