@class NSString, NSMapTable;

@interface MMFlutterEngineCache : MMRootService <MMServiceProtocol>

@property (retain, nonatomic) NSMapTable *cachedEngines;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (id)createEngineWithEntryPoint:(id)a0 initialRoute:(id)a1;
- (BOOL)contains:(id)a0;
- (id)get:(id)a0;
- (void)put:(id)a0 engine:(id)a1;
- (void)remove:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;

@end
