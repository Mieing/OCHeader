@class NSString, NSMutableDictionary;

@interface FlutterFuncCallEngineParams : MMRootService <MMServiceProtocol, FlutterCommonFunc>

@property (retain, nonatomic) NSMutableDictionary *paramsMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)engineParams:(id)a0 fromMap:(id)a1;
+ (void)enginePramsItem:(id)a0 fromValue:(id)a1;
+ (void)engineParamsMap:(id)a0 fromMap:(id)a1;
+ (void)engineParamsArray:(id)a0 fromArray:(id)a1;

- (void)onServiceInit;
- (id)funcName;
- (id)callHost:(id)a0 engineId:(id)a1;
- (id)nextParamsKey;
- (void)setEngineParams:(id)a0 params:(id)a1;
- (void)setEngineParams:(id)a0 fromMap:(id)a1;
- (id)getEngineParams:(id)a0;
- (void).cxx_destruct;

@end
