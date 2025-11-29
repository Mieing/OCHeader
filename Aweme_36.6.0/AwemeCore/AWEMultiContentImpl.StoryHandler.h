@interface AWEMultiContentImpl.StoryHandler : AWEMultiContentImpl.ContentHandler <AFDAlbumTransitionUpdateContentProtocol> {
    void /* unknown type, empty encoding */ hasTrackedFolderShowEvent;
    void /* unknown type, empty encoding */ startTimestamp;
    void /* unknown type, empty encoding */ readItemSet;
    void /* unknown type, empty encoding */ hasLoadedModel;
    void /* unknown type, empty encoding */ nextPlayIsAutomatic;
    void /* unknown type, empty encoding */ updatedIndex;
    void /* unknown type, empty encoding */ isPlayingBeforeEnteringDetail;
    void /* unknown type, empty encoding */ userScrolledBeforeEnteringDetail;
}

- (void)updateAllInfoWithOtherContentHandler:(id)a0;
- (BOOL)shouldSpectialHandlePlayState;
- (void).cxx_destruct;

@end
