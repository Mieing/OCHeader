@interface AWEIMGroupImpl.FriendsAlbumViewModel : NSObject <IESIMFriendsAlbumActionMessage, IESIMFriendsAlbumInflowListDataControllerDelegate> {
    void /* unknown type, empty encoding */ _friendsAlbumService;
    void /* unknown type, empty encoding */ con;
    void /* unknown type, empty encoding */ extraParams;
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ hasAddPermission;
    void /* unknown type, empty encoding */ statusPublisher;
    void /* unknown type, empty encoding */ permissionPublisher;
    void /* unknown type, empty encoding */ sectionsPublisher;
    void /* unknown type, empty encoding */ isLoadingPublisher;
    void /* unknown type, empty encoding */ nextCursor;
}

- (void)updateAssetActionWithCid:(id)a0 assetId:(id)a1 assetModel:(id)a2 cacheModel:(id)a3;
- (id)conForListDataController:(id)a0;
- (void)loadMoreWithListDataController:(id)a0 complention:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
