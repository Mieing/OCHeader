@interface FlowKit.CoverEditAction : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate> {
    void /* unknown type, empty encoding */ sheetTitle;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ context;
    void /* unknown type, empty encoding */ _toastProvider;
    void /* unknown type, empty encoding */ coverEditActionDelegate;
}

- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void).cxx_destruct;
- (id)init;

@end
