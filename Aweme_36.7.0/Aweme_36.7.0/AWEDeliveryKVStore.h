@protocol AWEECOMIMPaasKVStoreProtocol;

@interface AWEDeliveryKVStore : NSObject

@property (retain, nonatomic) id<AWEECOMIMPaasKVStoreProtocol> kvStore;

+ (id)shared;

- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (BOOL)boolForKey:(id)a0;

@end
