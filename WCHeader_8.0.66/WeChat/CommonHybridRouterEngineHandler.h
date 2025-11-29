@class HybridRouterPageInfo, MMFlutterInstance;

@interface CommonHybridRouterEngineHandler : CommonHybridRouterHandlerBase

@property (weak, nonatomic) MMFlutterInstance *engine;
@property (retain, nonatomic) HybridRouterPageInfo *pageInfo;

- (void)handleOpen:(id)a0 customArgs:(id)a1 callback:(id /* block */)a2;
- (id)getPlatformKey;
- (void).cxx_destruct;

@end
