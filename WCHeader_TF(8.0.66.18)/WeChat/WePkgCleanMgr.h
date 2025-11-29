@interface WePkgCleanMgr : MMObject

- (void)setLastCleanTime:(unsigned int)a0;
- (unsigned int)getLastCleanTime;
- (void)tryCleanWePkg;
- (void)doCleanWePkg;
- (void)cleanPkgId:(id)a0;

@end
