@class UIImagePickerController, BDXBridgeChooseMediaMethodParamModel, NSString;

@interface BDXBridgeDefaultMediaPicker : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate, BDXBridgeChooseMediaPicker>

@property (retain, nonatomic) BDXBridgeChooseMediaMethodParamModel *params;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (weak, nonatomic) UIImagePickerController *imagePicker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isCameraDenied;
- (BOOL)supportedWithParamModel:(id)a0;
- (id)mediaPickerWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)finishWithResultModel:(id)a0 status:(id)a1;
- (id)createTemporaryPathforVideoFile:(id)a0;
- (id)imageDataForImageNew:(id)a0;
- (id)writeImageDataToDisk:(id)a0;
- (float)getCropRadio:(id)a0 sideWidth:(double)a1;
- (void).cxx_destruct;
- (id)imageDataForImage:(id)a0;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;

@end
