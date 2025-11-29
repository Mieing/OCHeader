@interface FlowKitBizUI.AvatarView : UIView <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    void /* unknown type, empty encoding */ shouldTrackRequest;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ didClickAvatar;
    void /* unknown type, empty encoding */ didUpdateAvatar;
    void /* unknown type, empty encoding */ customClickAction;
    void /* unknown type, empty encoding */ previewAvatarController;
    void /* unknown type, empty encoding */ topVC;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ $__lazy_storage_$_avatarView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_updateAvatarButton;
    void /* unknown type, empty encoding */ loadingView;
}

- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)uploadButtonClicked;
- (void)avatarViewClicked;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)layoutSubviews;

@end
