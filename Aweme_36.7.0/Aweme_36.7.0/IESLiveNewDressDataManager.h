@class NSString, IESLiveCombineSubject;
@protocol IESLiveNewDressLoaderProtocol, IESLiveNewDressDataStoreProtocol;

@interface IESLiveNewDressDataManager : NSObject <IESLiveNewDressDataService>

@property (retain, nonatomic) id<IESLiveNewDressDataStoreProtocol> dressStore;
@property (retain, nonatomic) id<IESLiveNewDressLoaderProtocol> dressLoader;
@property (retain, nonatomic) IESLiveCombineSubject *onDressListUpdated;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)dressDataVersion;
- (void)updateDressListWithCompletion:(id /* block */)a0;
- (id)getDressDataWithDressID:(id)a0;
- (id)getDressWithDressID:(id)a0 error:(id *)a1;
- (void)getDressWithDressID:(id)a0 shouldWaitDownload:(BOOL)a1 forceUpdate:(BOOL)a2 completion:(id /* block */)a3;
- (id)getBorderWithDressID:(id)a0 error:(id *)a1;
- (void)getBorderWithDressID:(id)a0 shouldWaitDownload:(BOOL)a1 forceUpdate:(BOOL)a2 completion:(id /* block */)a3;
- (id)getUserEnterWithDressID:(id)a0 error:(id *)a1;
- (void)getUserEnterWithDressID:(id)a0 shouldWaitDownload:(BOOL)a1 forceUpdate:(BOOL)a2 completion:(id /* block */)a3;
- (id)getGuestBattleWithDressID:(id)a0 error:(id *)a1;
- (void)getGuestBattleWithDressID:(id)a0 shouldWaitDownload:(BOOL)a1 forceUpdate:(BOOL)a2 completion:(id /* block */)a3;
- (id)getOpenAssetWithDressID:(id)a0 error:(id *)a1;
- (void)getOpenAssetWithDressID:(id)a0 shouldWaitDownload:(BOOL)a1 forceUpdate:(BOOL)a2 completion:(id /* block */)a3;
- (id)getProfileSkinWithDressID:(id)a0 error:(id *)a1;
- (void)getProfileSkinWithDressID:(id)a0 shouldWaitDownload:(BOOL)a1 forceUpdate:(BOOL)a2 completion:(id /* block */)a3;
- (id)getRedEnvelopeSkinWithDressID:(id)a0 error:(id *)a1;
- (void)getRedEnvelopeSkinWithDressID:(id)a0 shouldWaitDownload:(BOOL)a1 forceUpdate:(BOOL)a2 completion:(id /* block */)a3;
- (id)getDressIDsWithDressType:(int)a0;
- (void)p_loadDataFromDiskCache;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
