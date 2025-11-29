@interface IESIMGroupSettingsFriendsAlbumComponent : AWEIMComponentBase <IESIMChatSettingsItemProvider, AWEIMMediaDetailTransitionOuterContextProvider, AWEZoomTransitionOuterContextProvider, IESIMFriendsAlbumInflowListDataControllerDelegate, IESIMFriendsAlbumActionMessage> {
    void /* unknown type, empty encoding */ _friendsAlbumService;
    void /* unknown type, empty encoding */ $__lazy_storage_$_viewModel;
    void /* unknown type, empty encoding */ assetModels;
    void /* unknown type, empty encoding */ nextCursor;
    void /* unknown type, empty encoding */ hasMore;
    void /* unknown type, empty encoding */ isFetching;
    void /* unknown type, empty encoding */ $__lazy_storage_$_albumViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_albumView;
    void /* unknown type, empty encoding */ isAlbumViewShow;
    void /* unknown type, empty encoding */ didShowed;
    void /* unknown type, empty encoding */ lastSelectView;
}

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (id)zoomTransitionStartViewForOffset:(long long)a0;
- (double)zoomTransitionTargetViewCornerRadius;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })focusViewFixedFrame;
- (id)conForListDataController:(id)a0;
- (void)loadMoreWithListDataController:(id)a0 complention:(id /* block */)a1;
- (void)updateAssetActionWithCid:(id)a0 assetId:(id)a1 assetModel:(id)a2 cacheModel:(id)a3;
- (id)mediaDetailTransitionStartView;
- (void)hostVC_viewDidLoad;
- (void)componentDidMounted:(id)a0;
- (id)groupSettingsItemTypes;
- (BOOL)filterGroupSettingsItemWithItemModel:(id)a0;
- (id)groupSettingsItemViewModelForItemModel:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
