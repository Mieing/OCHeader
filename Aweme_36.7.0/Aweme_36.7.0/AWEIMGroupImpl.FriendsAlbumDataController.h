@interface AWEIMGroupImpl.FriendsAlbumDataController : NSObject <IESIMFriendsAlbumDataControllerInterface>

- (long long)friendsAlbumStateForMessage:(id)a0;
- (id)friendsAlbumMessageExtStateKey;
- (id)friendsAlbumMessageExtMediaIDKey;
- (BOOL)isSupportFriendsAlbumMessage:(id)a0;
- (BOOL)isSupportFriendsAlbumCon:(id)a0;
- (long long)friendsAlbumStateForIESMessage:(id)a0;
- (BOOL)hasRemovePermissionForCon:(id)a0 message:(id)a1 assetModel:(id)a2;
- (long long)permissionForCon:(id)a0;
- (void)updatePermission:(long long)a0 con:(id)a1 completion:(id /* block */)a2;
- (BOOL)hasEntrancePermissionForCon:(id)a0;
- (BOOL)hasRemovePermissionForCon:(id)a0 iesMessage:(id)a1 assetModel:(id)a2;
- (void)fetchAssetWithCid:(id)a0 mediaIds:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)fetchAssetWithCid:(id)a0 cursor:(long long)a1 limit:(long long)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)removeAssetWithCid:(id)a0 mediaId:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void)addAssetWithCid:(id)a0 sourceInfo:(id)a1 extraParams:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (id)init;

@end
