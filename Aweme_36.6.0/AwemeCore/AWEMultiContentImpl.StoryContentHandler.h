@interface AWEMultiContentImpl.StoryContentHandler : BDMultiContentContainer.BaseContentHandler <AFDAlbumTransitionUpdateContentProtocol, AWEImageTextHandlerProtocol, AFDRichContentHandlerProtocol> {
    void /* unknown type, empty encoding */ hasTrackedFolderShowEvent;
    void /* unknown type, empty encoding */ startTimestamp;
    void /* unknown type, empty encoding */ readItemSet;
    void /* unknown type, empty encoding */ hasLoadedModel;
    void /* unknown type, empty encoding */ nextPlayIsAutomatic;
    void /* unknown type, empty encoding */ updatedIndex;
    void /* unknown type, empty encoding */ isPlayingBeforeEnteringDetail;
    void /* unknown type, empty encoding */ userScrolledBeforeEnteringDetail;
    void /* unknown type, empty encoding */ preloadManager;
    void /* unknown type, empty encoding */ albumComponentManagers;
}

- (BOOL)shouldSpectialHandlePlayState;
- (void)updateAllInfoWithOtherContentHandler:(id)a0;
- (id)handlerPageContext;
- (void)updatePlayerController:(id)a0;
- (void).cxx_destruct;

@end
