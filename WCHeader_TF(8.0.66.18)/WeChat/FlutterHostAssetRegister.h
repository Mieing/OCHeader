@class FlutterHostAssetDefault, NSMutableDictionary, NSString;

@interface FlutterHostAssetRegister : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) NSMutableDictionary *handlerMap;
@property (retain, nonatomic) FlutterHostAssetDefault *defaultHandler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)registerAssetHandlerWithKey:(id)a0 Handler:(id)a1;
- (void)unregisterAssetHandlerWithKey:(id)a0;
- (id)findHandlerWithKey:(id)a0;
- (void).cxx_destruct;

@end
