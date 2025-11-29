@interface FlowKitBizUI.FlowPhotoAlbum : NSObject <UIGestureRecognizerDelegate, PHPhotoLibraryChangeObserver, UIAdaptivePresentationControllerDelegate> {
    void /* unknown type, empty encoding */ imageBlock;
    void /* unknown type, empty encoding */ latestImageBlock;
    void /* unknown type, empty encoding */ imagePickerController;
    void /* unknown type, empty encoding */ registerPhotoLibrary;
    void /* unknown type, empty encoding */ _latestAssets;
    void /* unknown type, empty encoding */ showQuickAlbumView;
    void /* unknown type, empty encoding */ hideAnimating;
    void /* unknown type, empty encoding */ listeners;
    void /* unknown type, empty encoding */ $__lazy_storage_$_quickAlbumView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_quickAlbumDismissPanGesture;
    void /* unknown type, empty encoding */ _settingsProvider;
}

- (BOOL)gestureRecognizer:(id)a0 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)a1;
- (BOOL)gestureRecognizerShouldBegin:(id)a0;
- (BOOL)gestureRecognizer:(id)a0 shouldRequireFailureOfGestureRecognizer:(id)a1;
- (void)photoLibraryDidChange:(id)a0;
- (void)presentationControllerDidDismiss:(id)a0;
- (void)handlePan:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
