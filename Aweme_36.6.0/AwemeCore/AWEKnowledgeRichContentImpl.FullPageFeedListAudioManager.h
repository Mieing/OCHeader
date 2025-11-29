@interface AWEKnowledgeRichContentImpl.FullPageFeedListAudioManager : AWEKnowledgeSwiftBasic.FullPageBaseComponent <AWEKnowledgeSwiftBasic.ContainerLifeCycleProtocol, AWEKnowledgeSwiftBasic.ListContainerLifeCycleProtocol, AWEKnowledgeRichContentImpl.FullPageFeedListAudioManagerProtocol> {
    void /* unknown type, empty encoding */ currentPlayingCard;
    void /* unknown type, empty encoding */ dataContext;
    void /* unknown type, empty encoding */ viewController;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_playStateDispatcher;
    void /* unknown type, empty encoding */ enterPureMode;
    void /* unknown type, empty encoding */ headerShouldStopPlaying;
    void /* unknown type, empty encoding */ initialAudioDeviceOption;
    void /* unknown type, empty encoding */ dummyAudioEnabled;
}

- (void)onContainerViewWillDisappear;
- (void)onContainerViewDidAppear;
- (void)onScrollViewDidEndDraggingWithScrollView:(id)a0 willDecelerate:(BOOL)a1;
- (void)onScrollViewDidEndDeceleratingWithScrollView:(id)a0;
- (void)updatePlayerAudioOptionsWithIsMute:(BOOL)a0;
- (void)restorePlayerAudioOptions;
- (void)savePlayerInitialAudioOptionsWithAudioController:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
