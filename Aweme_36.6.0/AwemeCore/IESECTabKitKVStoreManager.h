@protocol HTSKVStore;

@interface IESECTabKitKVStoreManager : NSObject {
    id<HTSKVStore> _KVStoreManager;
}

+ (id)sharedInstance;

- (void)setBool:(BOOL)a0 forKey:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (BOOL)boolForKey:(id)a0;
- (void)clearStore;

@end
