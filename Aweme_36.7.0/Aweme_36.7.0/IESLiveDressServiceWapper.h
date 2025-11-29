@class NSString;
@protocol IESLiveNewDressService;

@interface IESLiveDressServiceWapper : NSObject <IESLivePrivilegeGlobalModuleDressService, IESLivePrivilegeGlobalModuleDressResourceService>

@property (retain, nonatomic) id<IESLiveNewDressService> dressService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)getDressDataWithDressID:(id)a0;
- (void)prefetchDressResourceFromDressIDs:(id)a0 source:(long long)a1;
- (void)borderFromDressID:(id)a0 isWaitDownload:(BOOL)a1 completion:(id /* block */)a2;
- (void)userEnterFromDressID:(id)a0 isWaitDownload:(BOOL)a1 completion:(id /* block */)a2;
- (id)profileSkinDressResourceFromDressID:(id)a0 error:(id *)a1;
- (id)getDressDataVersion;
- (void)updateDressListWithRoomID:(id)a0 completion:(id /* block */)a1;
- (void)borderFromDressID:(id)a0 completion:(id /* block */)a1;
- (void)openAssetFromDressID:(id)a0 completion:(id /* block */)a1;
- (id)dressFromDressID:(id)a0 error:(id *)a1;
- (void)dressFromDressID:(id)a0 isWaitDownload:(BOOL)a1 completion:(id /* block */)a2;
- (id)redEnvelopeSkinDressResourceFromDressID:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
