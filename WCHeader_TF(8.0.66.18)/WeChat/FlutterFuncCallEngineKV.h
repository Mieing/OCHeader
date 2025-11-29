@class MMLRUCache, NSString;

@interface FlutterFuncCallEngineKV : MMRootService <MMServiceProtocol, FlutterCommonFunc>

@property (retain, nonatomic) MMLRUCache *kvMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)put:(id)a0 value:(id)a1;
- (void)remove:(id)a0;
- (id)funcName;
- (id)callHost:(id)a0 engineId:(id)a1;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void).cxx_destruct;

@end
