@interface FlowKitBizUI.PHAssetResultCache : NSObject <PHPhotoLibraryChangeObserver> {
    void /* unknown type, empty encoding */ cache;
    void /* unknown type, empty encoding */ cachedKeys;
    void /* unknown type, empty encoding */ lock;
    void /* unknown type, empty encoding */ backgroundQueue;
}

- (void)photoLibraryDidChange:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
