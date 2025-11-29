@interface TingHybridCreateHandler : CommonHybridRouterHandlerBase

+ (void)setup;
+ (id)plugins;
+ (id)pluginsWithVC:(id)a0;
+ (id)defaultRouterParams;

- (id)getPlatformKey;
- (void)handleOpen:(id)a0 customArgs:(id)a1 callback:(id /* block */)a2;
- (void)handleOpenInner:(id)a0 customArgs:(id)a1 callback:(id /* block */)a2;

@end
