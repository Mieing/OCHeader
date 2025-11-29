@class NSMutableDictionary;

@interface IESGurdInternalPackagesManager : NSObject

@property (class, retain, nonatomic) NSMutableDictionary *metaInfosDictionary;

+ (unsigned long long)internalPackageIdForAccessKey:(id)a0 channel:(id)a1;
+ (long long)dataAccessPolicyForAccessKey:(id)a0 channel:(id)a1;
+ (void)didAccessInternalPackageWithAccessKey:(id)a0 channel:(id)a1 path:(id)a2 dataAccessPolicy:(long long)a3;
+ (void)clearInternalPackagesIfNeeded;
+ (void)loadLocalMetaInfosIfNeeded;
+ (void)saveInternalPackageMetaInfosToLocal;
+ (void)clearInternalCacheForAccessKey:(id)a0 channel:(id)a1;
+ (void)loadLocalMetaInfos;
+ (id)allInternalPackageMetaInfos;
+ (BOOL)shouldClearInternalPackageWithMetaInfo:(id)a0;
+ (void)updateDataAccessPolicy:(long long)a0 accessKey:(id)a1 channel:(id)a2;
+ (void)saveInternalPackageMetaInfo:(id)a0;
+ (void)clearInternalPackageForAccessKey:(id)a0 channel:(id)a1;
+ (void)setup;

@end
