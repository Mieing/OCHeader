@interface AWEClassroomImpl.ClassroomHomeworkPublishToolbarView : UIView <UIDocumentPickerDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ tabBarTintColor;
    void /* unknown type, empty encoding */ tabBarBarTintColor;
    void /* unknown type, empty encoding */ tabBarBackgroundImage;
    void /* unknown type, empty encoding */ tabBarShadowImage;
    void /* unknown type, empty encoding */ barButtonItemTintColor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_captureButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_imageButton;
    void /* unknown type, empty encoding */ $__lazy_storage_$_audioButton;
}

- (void)documentPickerWasCancelled:(id)a0;
- (void)documentPicker:(id)a0 didPickDocumentsAtURLs:(id)a1;
- (void)didClickCaptureButton;
- (void)didClickImageButton;
- (void)didClickAudioButton;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;

@end
