@interface BDPathLibraryBundle : BDPathBaseBundle

- (id)pathWithSubPath:(id)a0 autoCreated:(BOOL)a1;
- (BOOL)registerCleanRuleForSubPath:(id)a0 when:(unsigned long long)a1;
- (BOOL)registerCleanRuleForUid:(id)a0 subDirPath:(id)a1 when:(unsigned long long)a2;
- (BOOL)registerCleanRuleForAnyUidForSubDirPath:(id)a0 when:(unsigned long long)a1;
- (id)initWithRootName:(id)a0;
- (long long)anyUidFilesSizeWithSubDirPath:(id)a0;
- (long long)cleanupAnyUidFilesWithSubDirPath:(id)a0 excludeUids:(id)a1;
- (long long)cleanupAnyUidFileWithSubFilePath:(id)a0 excludeUids:(id)a1;
- (long long)cleanupUid:(id)a0 subDirPath:(id)a1 retureSize:(BOOL)a2;
- (id)pathWithAutoCreated:(BOOL)a0;
- (id)pathWithSubPath:(id)a0;
- (id)pathWithUid:(id)a0 autoCreated:(BOOL)a1;
- (id)pathWithUid:(id)a0 subPath:(id)a1 autoCreated:(BOOL)a2;
- (id)pathWithUid:(id)a0;
- (id)pathWithUid:(id)a0 subPath:(id)a1;
- (id)path;

@end
