@interface AWEIMGroupImpl.FriendsAlbumService : HTSService <IESIMFriendsAlbumServiceInterface> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_enableFriendsAlbumValue;
}

- (BOOL)isFriendsAlbumReplyMessage:(id)a0;
- (void)openFriendsAlbumInflowPageWithCon:(id)a0 message:(id)a1 transitionProvider:(id)a2 extraParams:(id)a3 completion:(id /* block */)a4;
- (void)openFriendsAlbumInflowPageWithCon:(id)a0 Asset:(id)a1 assets:(id)a2 transitionProvider:(id)a3 delegate:(id)a4 extraParams:(id)a5 completion:(id /* block */)a6;
- (id)inflowViewControllerForType:(long long)a0;
- (id)currentDisplayMessageForViewController:(id)a0;
- (void)showPermissionPage:(id)a0;
- (void)openFriendsAlbumOutFlowPageWithCon:(id)a0 extraParams:(id)a1;
- (id)friendsAlbumCacheService;
- (id)friendsAlbumDownloadService;
- (id)friendsAlbumDataController;
- (BOOL)enableFriendsAlbum;
- (id)init;

@end
