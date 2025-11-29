@class BDCTEventTracker, NSString, NSMutableDictionary, NSDictionary, NSDate, BDCTFlow;

@interface BDCTImageManager : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, PHPickerViewControllerDelegate>

@property (retain, nonatomic) BDCTEventTracker *eventTracker;
@property (copy, nonatomic) NSString *type;
@property (retain, nonatomic) NSMutableDictionary *typeToImageDic;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) int maxSide;
@property (nonatomic) double compressRatioWeb;
@property (nonatomic) double compressRatioNet;
@property (retain, nonatomic) NSDate *imageSelectStartTime;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (weak, nonatomic) BDCTFlow *flow;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)selectImageWithParams:(id)a0 completion:(id /* block */)a1;
- (void)selectedImageFromAlbum;
- (void)takePhotoFromCamera;
- (id)getImageByType:(id)a0;
- (void)pickImageFromAlbum:(id)a0;
- (void)cacheImageForUpdate:(id)a0 metaData:(id)a1;
- (void)callbackWithSelectedImage:(id)a0 from:(id)a1;
- (void)callbackWithCancel;
- (void)trackPhotoUploadAlertShow;
- (void)trackCameraPermission:(BOOL)a0;
- (void)trackTakePhotoShow;
- (void).cxx_destruct;
- (id)init;
- (void)imagePickerControllerDidCancel:(id)a0;
- (void)imagePickerController:(id)a0 didFinishPickingMediaWithInfo:(id)a1;
- (void)picker:(id)a0 didFinishPicking:(id)a1;

@end
