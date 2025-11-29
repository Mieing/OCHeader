@interface AWEMultiContentImpl.ImageTextNewAdapterHandler : BDMultiContentContainer.ImageTextHandler <AWEKnowledgeSceneProvider, AWEImageTextHandlerProtocol, AFDRichContentHandlerProtocol, AFDRichContentProgressDurationProtocol, AFDAlbumHandlerIndexable, AFDAlbumTransitionUpdateableProtocol, AFDAlbumTransitionUpdatePlayStateProtocol, AFDAlbumTransitionUpdateContentProtocol> {
    void /* unknown type, empty encoding */ aweme;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sectionViewModelInfoProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_listViewModelInfoProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_contentPageInfoProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_pageContextInfo;
    void /* unknown type, empty encoding */ isPlayingBeforeEnteringDetail;
    void /* unknown type, empty encoding */ playModeBeforeEnterDetail;
    void /* unknown type, empty encoding */ userScrolledBeforeEnteringDetail;
    void /* unknown type, empty encoding */ startPinchingTime;
    void /* unknown type, empty encoding */ fromIndex;
    void /* unknown type, empty encoding */ $__lazy_storage_$_componentManager;
}

@property (nonatomic, readonly) long long currentIndex;

- (id)infoProviders;
- (void)checkPlayStateForSyncStateFromScene:(id)a0 toScene:(id)a1;
- (id)handlerPageContext;
- (BOOL)shouldSpectialHandlePlayState;
- (void)updatePlayerController:(id)a0;
- (BOOL)shouldFillProgressWhenScrollWithCurrentIndex:(long long)a0;
- (void)scrollToIndex:(long long)a0 offset:(id)a1;
- (void)updateAlbumHandlerWithOhterHandler:(id)a0;
- (void)updatePlayStateWithAlbumHandler:(id)a0 playVideoVC:(id)a1;
- (void)updateAllInfoWithOtherContentHandler:(id)a0;
- (void).cxx_destruct;

@end
