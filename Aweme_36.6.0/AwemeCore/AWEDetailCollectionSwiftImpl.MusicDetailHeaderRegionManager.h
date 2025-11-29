@interface AWEDetailCollectionSwiftImpl.MusicDetailHeaderRegionManager : _TtCs12_SwiftObject <AWEDetailCollectionSwiftImpl.MusicDetailHeaderRegionLifecycleProtocol> {
    void /* unknown type, empty encoding */ regionArray;
    void /* unknown type, empty encoding */ skeletonCacheDict;
    void /* unknown type, empty encoding */ viewCacheDict;
}

- (void)onFetchDataEndWithSuccess:(BOOL)a0 response:(id)a1 error:(id)a2;
- (void)onRelatedDataEndWithMusicList:(id)a0;
- (void)onContainerViewDidDisappear;
- (void)onContainerViewWillDisappear;
- (void)onContainerViewDidAppear;
- (void)onContainerViewWillAppear;
- (void)onContainerViewDidLoad;

@end
