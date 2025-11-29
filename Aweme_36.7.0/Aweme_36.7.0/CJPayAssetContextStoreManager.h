@class NSMutableDictionary;

@interface CJPayAssetContextStoreManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *assetContextDict;

- (id)contextValueForKey:(id)a0 assetIdentity:(id)a1;
- (void)storeContextKey:(id)a0 contextValue:(id)a1 forAssetIdentity:(id)a2;
- (BOOL)contextBoolValueForKey:(id)a0 assetIdentity:(id)a1;
- (void)clearAssetContextForIdentity:(id)a0;
- (void)clearContextKey:(id)a0 forAssetIdentity:(id)a1;
- (void).cxx_destruct;

@end
