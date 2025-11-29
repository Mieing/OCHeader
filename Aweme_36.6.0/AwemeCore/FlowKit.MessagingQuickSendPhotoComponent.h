@interface FlowKit.MessagingQuickSendPhotoComponent : FlowCommon.TightCouplingComponent {
    void /* unknown type, empty encoding */ inputViewControl;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _rootComponent;
    void /* unknown type, empty encoding */ _inputViewComponent;
    void /* unknown type, empty encoding */ _attachmentModeComponent;
    void /* unknown type, empty encoding */ _attachmentViewComponent;
    void /* unknown type, empty encoding */ _imageAttachmentComponent;
    void /* unknown type, empty encoding */ isBackground;
    void /* unknown type, empty encoding */ isShowImagePromptView;
    void /* unknown type, empty encoding */ currentPhoto;
    void /* unknown type, empty encoding */ didShowWhenAppear;
    void /* unknown type, empty encoding */ disableShowWhenAppear;
    void /* unknown type, empty encoding */ _settingsProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imagePromptView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_swipGesture;
    void /* unknown type, empty encoding */ $__lazy_storage_$_panGesture;
}

- (void)handleNotification:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)handlePanGesture:(id)a0;
- (void)appDidEnterBackground;
- (void)appDidBecomeActive;
- (void)handleSwipe:(id)a0;

@end
