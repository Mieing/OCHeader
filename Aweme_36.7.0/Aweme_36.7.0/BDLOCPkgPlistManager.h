@class NSMutableDictionary;

@interface BDLOCPkgPlistManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *pkgInfos;
@property (nonatomic) struct _opaque_pthread_rwlock_t { long long __sig; char __opaque[192]; } gRWLock;

+ (id)allActiveMD5WithPlistPath:(id)a0;
+ (void)savePkgInfoWithPlistPath:(id)a0 md5:(id)a1;
+ (void)savePlistToFile:(id)a0 path:(id)a1;
+ (void)readPlistToMemory:(id)a0;
+ (id)md5sShouldRemovedWithPlistPath:(id)a0 MAXCount:(unsigned long long)a1;
+ (id)sharedManager;

- (void).cxx_destruct;
- (id)init;

@end
