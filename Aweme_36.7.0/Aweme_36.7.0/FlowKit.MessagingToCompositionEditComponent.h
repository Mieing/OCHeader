@interface FlowKit.MessagingToCompositionEditComponent : FlowCommon.TightCouplingComponent <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    void /* unknown type, empty encoding */ _profileDependency;
    void /* unknown type, empty encoding */ _appInfoProvider;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ _compistionEditModuleService;
    void /* unknown type, empty encoding */ compositionEditSameTmplType;
    void /* unknown type, empty encoding */ _rootComponent;
    void /* unknown type, empty encoding */ _viewController;
    void /* unknown type, empty encoding */ _attachmentViewComponent;
    void /* unknown type, empty encoding */ _instructionViewComponent;
    void /* unknown type, empty encoding */ instructionTypeAfterAlbum;
    void /* unknown type, empty encoding */ contextAfterAlbum;
}

- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
