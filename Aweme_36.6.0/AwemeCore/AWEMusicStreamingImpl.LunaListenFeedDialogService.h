@interface AWEMusicStreamingImpl.LunaListenFeedDialogService : HTSService <DUXSheetDelegate, LunaListenFeedServiceProtocol> {
    void /* unknown type, empty encoding */ kAttatchSheetParamsKey;
    void /* unknown type, empty encoding */ hitPeople;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cache;
    void /* unknown type, empty encoding */ lastExitTime;
    void /* unknown type, empty encoding */ sheet;
    void /* unknown type, empty encoding */ listenFeedDelegate;
}

- (void)sheetDidDismiss:(id)a0;
- (void)showDialogWithModel:(id)a0 delegate:(id)a1 previousPage:(id)a2 params:(id)a3 showCompletion:(id /* block */)a4;
- (void)queryDataWithModel:(id)a0 completion:(id /* block */)a1;
- (id)buildBottomViewWithModel:(id)a0 previousPage:(id)a1;
- (void)onExitWithPreviewPage:(id)a0;
- (BOOL)canQueryBottomViewInfoWithPreviewPage:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
