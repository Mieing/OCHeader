@interface BDPathTemporaryBundle : BDPathBaseBundle

- (id)pathWithSubPath:(id)a0 autoCreated:(BOOL)a1;
- (BOOL)registerCleanRuleForSubPath:(id)a0 when:(unsigned long long)a1;
- (BOOL)registerCleanRuleForAnyUidForSubDirPath:(id)a0 when:(unsigned long long)a1;
- (id)initWithRootName:(id)a0;
- (id)pathWithAutoCreated:(BOOL)a0;
- (id)pathWithSubPath:(id)a0;
- (id)pathWithUid:(id)a0 autoCreated:(BOOL)a1;
- (id)pathWithUid:(id)a0 subPath:(id)a1 autoCreated:(BOOL)a2;
- (id)pathWithUid:(id)a0;
- (id)pathWithUid:(id)a0 subPath:(id)a1;
- (BOOL)registerCleanRuleForUid:(id)a0 subPath:(id)a1 when:(unsigned long long)a2;
- (id)path;

@end
