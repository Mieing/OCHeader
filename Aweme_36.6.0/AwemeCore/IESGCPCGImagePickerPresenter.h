@class NSString;
@protocol IESGCPCGImagePickerPresenterDelegate;

@interface IESGCPCGImagePickerPresenter : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, PHPickerViewControllerDelegate>

@property (weak, nonatomic) id<IESGCPCGImagePickerPresenterDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentImagePickerOn:(id)a0;
- (void).cxx_destruct;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)picker:(id)a0 didFinishPicking:(id)a1;

@end
