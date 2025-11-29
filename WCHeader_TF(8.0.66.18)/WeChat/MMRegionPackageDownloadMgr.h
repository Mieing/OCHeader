@class NSString, Package;

@interface MMRegionPackageDownloadMgr : MMRootService <MMResourceMgrExt, MMServiceProtocol> {
    Package *_cachedPackage;
    unsigned int uiInterval;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)checkUpdate;
- (BOOL)shoulCheckUpadte;
- (void)checkResouce;
- (id)getRegionRootPath;
- (id)getRegionFilePath;
- (id)getTmpRegionFilePathForLang:(id)a0;
- (id)getRegionFilePathForLang:(id)a0;
- (id)getVersionFilePath;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void)updateVersion:(id)a0;
- (void).cxx_destruct;

@end
