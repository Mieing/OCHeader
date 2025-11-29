@interface AWEKnowledgeRichContentImpl.FullPageFeedTracker : AWEKnowledgeSwiftBasic.FullPageContainerTracker <AWEKnowledgeSwiftBasic.AppLifeCycleProtocol> {
    void /* unknown type, empty encoding */ appearTime;
    void /* unknown type, empty encoding */ picStarTime;
    void /* unknown type, empty encoding */ textStarTime;
    void /* unknown type, empty encoding */ commentStarTime;
    void /* unknown type, empty encoding */ hadDragged;
    void /* unknown type, empty encoding */ everLeaveAlbumRegion;
    void /* unknown type, empty encoding */ everBackToAlbumRegion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_trackingService;
    void /* unknown type, empty encoding */ playCount;
}

- (void)onContainerViewDidDisappear;
- (void)onContainerViewDidAppear;
- (void)onContainerViewDidLoad;
- (void).cxx_destruct;
- (id)init;
- (void)appDidBecomeActive;
- (void)appWillResignActive;

@end
