@interface CJPayBridgeBlockRegister : NSObject

+ (id)associatedPluginsOnEngine:(id)a0 pluginClassName:(id)a1;
+ (void)registerBridgeName:(id)a0 engineType:(long long)a1 authType:(unsigned long long)a2 domains:(id)a3 needBridgeCommand:(BOOL)a4 handler:(id /* block */)a5;

@end
