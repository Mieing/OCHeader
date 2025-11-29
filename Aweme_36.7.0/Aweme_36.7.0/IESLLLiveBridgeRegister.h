@class NSMutableDictionary;

@interface IESLLLiveBridgeRegister : NSObject

@property (readonly, nonatomic) NSMutableDictionary *mapSyncMethod;

- (void)registerSyncMethod:(id)a0 block:(id /* block */)a1;
- (id)executeSyncMethod:(id)a0 on:(id)a1 params:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
