@class NSMapTable;

@interface KindaLiteStore : LiteAppStore

@property (retain, nonatomic) NSMapTable *storeDelegates;

+ (void)registerStore;
+ (id)sharedInstance;

- (id)init;
- (id)copy;
- (id)mutableCopy;
- (void)addStoreDelegate:(id)a0 delegate:(id)a1;
- (void)removeStoreDelegate:(id)a0;
- (void)SendResult:(unsigned long long)a0 callbackId:(unsigned int)a1 json:(id)a2;
- (void)SendResult:(unsigned long long)a0 callbackId:(unsigned int)a1 obj:(id)a2;
- (void)SendError:(unsigned long long)a0 callbackId:(unsigned int)a1 message:(id)a2;
- (void)SetData:(id)a0;
- (BOOL)OnDispatch:(id)a0 instanceId:(unsigned long long)a1 actionName:(id)a2 data:(id)a3 callbackId:(int)a4;
- (void).cxx_destruct;

@end
