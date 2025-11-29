@protocol ACCFileUploadServiceProtocol;

@interface ACCImageAlbumEditTagsUploadImageHelper : NSObject

@property (retain, nonatomic) id<ACCFileUploadServiceProtocol> videoUploadService;

+ (id)errorOfUploadImage;
+ (BOOL)enablePreupload;

- (void)uploadImageToCloudWithImagePath:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
