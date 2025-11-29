@class NSString, BDPSTLQueue;

@interface BDPOfflineZipManager : NSObject <BDPLocalFileUpdateMessage, BDPBusinessUpdateHandlerProtocol> {
    BDPSTLQueue *_groupQueue;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)bootstrapLoad;
+ (id)shareManager;
+ (void)updateRelativeDataIfNeed;

- (BOOL)hasCacheWithModuleName:(id)a0 filePath:(id)a1;
- (void)localFileRestoreAppFolderToOriginal;
- (void)setupDefaultOfflineZipIfNeed;
- (id)syncGetDataWithModuleName:(id)a0 filePath:(id)a1;
- (void)updateResourcesIfNeed:(id /* block */)a0;
- (void)_updateResourceWithPackageNames:(id)a0 updateAllPackages:(BOOL)a1 completion:(id /* block */)a2;
- (void)updateResourceWithModuleNames:(id)a0 completion:(id /* block */)a1;
- (void)updateResourceWithModuleName:(id)a0 completion:(id /* block */)a1;
- (void)asyncGetDataWithModuleName:(id)a0 filePath:(id)a1 completion:(id /* block */)a2;
- (id)getRegionAreaInfo;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
