@class NSString, NSMutableDictionary;

@interface BDPathBaseBundle : NSObject <BDPathBaseBundleProtocol> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutex_lock;
}

@property (retain, nonatomic) NSMutableDictionary *normalPathMap;
@property (retain, nonatomic) NSMutableDictionary *anyUserPathMap;
@property (copy, nonatomic) NSString *bundleRootPath;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_addSubPath:(id)a0 opportunity:(unsigned long long)a1 isAnyUser:(BOOL)a2;
- (id)_registerPathsForOpportunity:(unsigned long long)a0 isAnyUser:(BOOL)a1;
- (id)opportunityKey:(unsigned long long)a0;
- (void)_cleanupDeletableFiles;
- (long long)_cleanupForOpportunity:(unsigned long long)a0 needSize:(BOOL)a1;
- (long long)_deleteAllFileForDirPath:(id)a0 needSize:(BOOL)a1;
- (BOOL)registerCleanRuleForSubPath:(id)a0 when:(unsigned long long)a1;
- (BOOL)registerCleanRuleForUid:(id)a0 subDirPath:(id)a1 when:(unsigned long long)a2;
- (BOOL)registerCleanRuleForAnyUidForSubDirPath:(id)a0 when:(unsigned long long)a1;
- (id)initWithRootName:(id)a0;
- (long long)totalFilesSize;
- (long long)anyUidFilesSizeWithSubDirPath:(id)a0;
- (long long)deletableFilesSize;
- (void)cleanupDeletableFiles;
- (long long)cleanupAnyUidFilesWithSubDirPath:(id)a0 excludeUids:(id)a1;
- (long long)cleanupAnyUidFileWithSubFilePath:(id)a0 excludeUids:(id)a1;
- (long long)cleanupUid:(id)a0 subDirPath:(id)a1 retureSize:(BOOL)a2;
- (long long)triggerCleanEventForOpportunity:(unsigned long long)a0 needSize:(BOOL)a1;
- (void).cxx_destruct;

@end
