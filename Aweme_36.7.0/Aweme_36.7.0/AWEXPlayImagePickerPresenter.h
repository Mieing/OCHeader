@class NSString, UIViewController;

@interface AWEXPlayImagePickerPresenter : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, PHPickerViewControllerDelegate>

@property (weak, nonatomic) UIViewController *presentingViewController;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)presentImagePickerWithCert:(id)a0 completion:(id /* block */)a1;
- (void)presentCameraWithCert:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithPresentingViewController:(id)a0;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)picker:(id)a0 didFinishPicking:(id)a1;

@end
