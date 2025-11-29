@class NSDictionary, NSString;

@interface WCFinderResUpdateMgr : MMUserService <MMResourceMgrExt, MMServiceProtocol>

@property (retain, nonatomic) NSDictionary *currentResourceItems;
@property (retain, nonatomic) NSDictionary *cleanupResourceItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onServiceClearData;
- (void)initializeResourceItems;
- (void)checkResourcesOnInitialization;
- (void)onResUpdateFinish:(long long)a0 resType:(unsigned int)a1 subResType:(unsigned int)a2;
- (void)extractResWithResType:(unsigned int)a0 subResType:(unsigned int)a1;
- (void)checkResourceIntegrityWithResType:(unsigned int)a0 subResType:(unsigned int)a1;
- (void)checkFilesIntegrityWithResType:(unsigned int)a0 subResType:(unsigned int)a1 version:(unsigned int)a2 completeBlock:(id /* block */)a3;
- (void)checkFilesIntegrityWithResBasePath:(id)a0 manifestPath:(id)a1 completeBlock:(id /* block */)a2;
- (void)cleanupResourceForResType:(unsigned int)a0 subResType:(unsigned int)a1;
- (void)clearUnusedResourceForResType:(unsigned int)a0 subResType:(unsigned int)a1;
- (unsigned int)latestReadyResVersion:(unsigned int)a0 subResType:(unsigned int)a1;
- (void)updateLatestReadyResVersion:(unsigned int)a0 subResType:(unsigned int)a1 version:(unsigned int)a2;
- (void)clearResVersionForResType:(unsigned int)a0 subResType:(unsigned int)a1;
- (id)getUpZipDirWithResType:(unsigned int)a0 subResType:(unsigned int)a1 version:(unsigned int)a2;
- (id)getDestDirWithResType:(unsigned int)a0 subResType:(unsigned int)a1 version:(unsigned int)a2;
- (void).cxx_destruct;

@end
