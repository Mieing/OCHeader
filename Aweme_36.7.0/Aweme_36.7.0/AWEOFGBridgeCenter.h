@class NSMutableDictionary;

@interface AWEOFGBridgeCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *bridgeMethods;

+ (id)defaultCenter;

- (void)registerBridgeMethod:(id)a0;
- (void)handleBridgeMessage:(id)a0 preActionBlock:(id /* block */)a1 completion:(id /* block */)a2;
- (id)bridgeMethodForMethodName:(id)a0;
- (void)preActionUsingBlock:(id /* block */)a0 method:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
