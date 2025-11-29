@class IESGCPSKContext, NSString, NSError, IESGCPXPlayGameAPI, IESGCPPBGamePlatformInfo;

@interface IESGCPCGDownloadComponent : IESGCPCGInstanceBaseComponent <IESGCPCGDownloadRouter>

@property (retain, nonatomic) IESGCPSKContext *gameSKContext;
@property (retain, nonatomic) IESGCPXPlayGameAPI *api;
@property (copy, nonatomic) id /* block */ getDownloadInfoCallback;
@property (retain, nonatomic) IESGCPPBGamePlatformInfo *downloadGameInfo;
@property (retain, nonatomic) NSError *downloadGameInfoError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDestroy;
- (void)didSetGameCPDIContext;
- (void)componentDidAttached;
- (BOOL)supportDownload;
- (void)getDownloadInfoWithCallback:(id /* block */)a0;
- (void)openGameAppOrAppStoreWithSource:(id)a0 completion:(id /* block */)a1;
- (void)_requestDownloadGameInfoWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;

@end
