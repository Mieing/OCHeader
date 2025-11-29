@class NSMutableDictionary;

@interface AWEYAPBridgePluginEngine : NSObject

@property (retain, nonatomic) NSMutableDictionary *pluginInstanceDic;

- (void)callMethod:(id)a0 arguments:(id)a1 completion:(id /* block */)a2;
- (id)pigeonMethodPluginDic;
- (id)pigeonMethodNames;
- (id)p_generatePluginWithMethodName:(id)a0;
- (void).cxx_destruct;

@end
