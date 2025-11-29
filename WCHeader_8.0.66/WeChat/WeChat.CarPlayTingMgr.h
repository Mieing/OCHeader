@interface WeChat.CarPlayTingMgr : MMUserService <MMServiceProtocol, WeChat.ICarPlayUIExt> {
    void /* unknown type, empty encoding */ $__lazy_storage_$_tapeListController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioListController;
    void /* unknown type, empty encoding */ nowPlayingController;
    void /* unknown type, empty encoding */ recentPlayListCache;
    void /* unknown type, empty encoding */ recentTapeDetailController;
    void /* unknown type, empty encoding */ $__lazy_storage_$_discoverTapeMgr;
}

- (id)init;
- (void)dealloc;
- (id)safeGetCurrentTingPlayer;
- (id)getListenLaterTapeItem;
- (id)getRecommendTapeItem;
- (id)getTapeListController;
- (id)getAudioListController;
- (void)onEnterTapeDetailPageWithTapeItem:(id)a0;
- (void)showNowPlayingController;
- (id)getCurrentPlayingItem;
- (void)closeNowPlayingPlayerIfNeed;
- (void)onCarPlayConnected;
- (void)onCarPlayDisconnected;
- (void)onSelectedTabController:(id)a0;
- (void).cxx_destruct;

@end
