@class NSString;

@interface MagicPkgCleaner : MMUserService <MMServiceProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)regist:(id)a0;
- (BOOL)bizStillValid:(id)a0;
- (void)doCleanMagicPkg;
- (void)doCleanBizMagicPkg:(id)a0 lastPkgInfo:(id)a1;
- (void)cmdCleanAllMagicPkg;
- (unsigned long long)preCleanGetCacheSize;
- (unsigned long long)cleanCacheMgrMakeToClean;
- (void)onServiceInit;
- (void)dealloc;

@end
