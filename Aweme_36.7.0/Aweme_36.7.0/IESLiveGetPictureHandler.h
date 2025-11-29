@protocol IESLivePhotoLibraryService;

@interface IESLiveGetPictureHandler : NSObject

@property (retain, nonatomic) id<IESLivePhotoLibraryService> photoService;
@property (retain, nonatomic) id<IESLivePhotoLibraryService> defaultPhotoService;

- (void)showImagePickerWithPrivacyCert:(id)a0 withCompletion:(id /* block */)a1;
- (void).cxx_destruct;
- (id)init;

@end
