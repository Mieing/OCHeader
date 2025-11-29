@interface CreationKitAlbum.LibraryObserver : NSObject <PHPhotoLibraryChangeObserver> {
    void /* unknown type, empty encoding */ consumer;
    void /* unknown type, empty encoding */ genericRegisters;
    void /* unknown type, empty encoding */ categoryFetchResultDict;
    void /* unknown type, empty encoding */ dictLock;
    void /* unknown type, empty encoding */ isBackground;
    void /* unknown type, empty encoding */ temporaryChangeInstances;
    void /* unknown type, empty encoding */ notifyQueue;
}

- (void)photoLibraryDidChange:(id)a0;
- (void)didEnterBackgroundWithNoti:(id)a0;
- (void)didBecomeActiveWithNoti:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
