@protocol WCBGRecommendMgrDelegate;

@interface WCBGRecommendMgr : MMObject <MMPackageDownloadMgrExt>

@property (weak, nonatomic) id<WCBGRecommendMgrDelegate> m_delegate;

- (id)init;
- (id)currentLanguage;
- (BOOL)validateBGStorage:(id)a0;
- (id)getBGStorage;
- (void)updateBGStorage;
- (void)didUpdateBGStorage;
- (unsigned long long)cleanCache;
- (id)SnsCGI_getBGStorage;
- (void)SnsCGI_updateBGStorage;
- (void)SnsCGI_didUpdateBGStorage:(id)a0 forLanguage:(id)a1;
- (void)SnsCGI_didFailToUpdateBGStorageWithErrorLog:(id)a0;
- (id)loadBGStorageForLanguage:(id)a0;
- (BOOL)saveBGStorage:(id)a0 forLanguage:(id)a1;
- (void)MMResource_init;
- (long long)MMResource_packageKey;
- (id)MMResource_getBGStorage;
- (id)MMResource_getPackageDataOfBGStorage;
- (void)MMResource_updateBGStorage;
- (void)onPackageListUpdated:(id)a0;
- (void).cxx_destruct;

@end
