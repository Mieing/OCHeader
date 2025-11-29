@class NSString, IESGCPTeamPlayAPI;

@interface IESGCPTeamPlayScanGameRouterProvider : NSObject <IESGCPTeamPlayScanGameRouter>

@property (retain, nonatomic) IESGCPTeamPlayAPI *teamplayApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)openTeamPlayAppWithPlayId:(id)a0;
- (void)openTeamPlayAppWithPlayId:(id)a0 params:(id)a1;
- (void)openAppstoreUsingStoreKitWith:(id)a0 withGameSchema:(id)a1 completion:(id /* block */)a2;
- (void)reportEnterGame:(id)a0 scheme:(id)a1 success:(BOOL)a2;
- (void).cxx_destruct;

@end
