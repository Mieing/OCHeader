@class NSString, NSMutableDictionary;

@interface MMResPackageMgr : MMUserService <MMServiceProtocol, MMPackageDownloadMgrExt> {
    NSMutableDictionary *m_resMap;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (BOOL)createDirIfNotExist:(id)a0;
- (BOOL)isResPackageReady:(id)a0;
- (void)downloadResPackage:(id)a0;
- (void)cancelResPackageDownload:(id)a0;
- (void)onPackageListUpdated:(id)a0;
- (void)onPackageDownloadProcessUpdated:(id)a0 downloadSize:(int)a1 totalSize:(int)a2;
- (void)onPackageDownloadFinish:(id)a0 package:(id)a1;
- (void)onPackageCancelFinish:(id)a0;
- (id)pathForResNamed:(id)a0 withPID:(id)a1;
- (void).cxx_destruct;

@end
