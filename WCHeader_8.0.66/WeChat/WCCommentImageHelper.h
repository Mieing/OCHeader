@class NSString, UIViewController;
@protocol WCCommentImageHelperDelegate;

@interface WCCommentImageHelper : NSObject <MMImagePickerManagerDelegate>

@property (weak, nonatomic) UIViewController *viewController;
@property (weak, nonatomic) id<WCCommentImageHelperDelegate> helperDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithViewController:(id)a0 delegate:(id)a1;
- (void)selectPhotoFromImagePicker;
- (void)MMImagePickerManager:(id)a0 didFinishPickingImageWithInfo:(id)a1;
- (void)MMImagePickerManagerDidCancel:(id)a0;
- (void)MMImagePickerManagerDidPopOrDismiss:(id)a0;
- (void).cxx_destruct;

@end
