@interface BDPKVStorageManager : NSObject

+ (id)shareManager;

- (id)storageWithName:(id)a0 rootPath:(id)a1 type:(unsigned long long)a2;
- (id)defaultStorageWithType:(unsigned long long)a0;
- (BOOL)dropStorage:(id)a0;

@end
