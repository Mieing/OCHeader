@class NSString, NSMutableDictionary;

@interface FlutterFuncCallService : MMRootService <MMServiceProtocol, FlutterCommonServiceBase>

@property (retain, nonatomic) NSMutableDictionary *funcImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)callHost:(id)a0;
- (void)registerFunc:(id)a0;
- (void)unRegisterFunc:(id)a0;
- (void)onServiceInit;
- (void)onServiceClearData;
- (void).cxx_destruct;

@end
