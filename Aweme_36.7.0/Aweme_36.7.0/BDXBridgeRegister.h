@class NSArray;

@interface BDXBridgeRegister : NSObject

@property (copy, nonatomic) NSArray *namespaces;

+ (id)sharedRegister;

- (void)registerBridgeMethod:(id)a0;
- (id /* block */)callHandlerWithMessage:(id)a0;
- (id)bridgeMethodWithMessage:(id)a0;
- (id)_bridgeNamespaceWithMessage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
