@class NSString;

@interface AWEECRecorderHelper : HTSService <AWEECRecorderHelper>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)writeImageDataToDisk:(id)a0;
+ (void)uploadPhotosWithBridgeParams:(id)a0 completion:(id /* block */)a1;
+ (void)uploadPhotosWithBridgeParams:(id)a0 cameraOpt:(BOOL)a1 completion:(id /* block */)a2;
+ (void)uploadImages:(id)a0 params:(id)a1 eachProgress:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)uploadVideoWithURL:(id)a0 authToken:(id)a1 appKey:(id)a2 videoAuthorization:(id)a3 progressCallback:(id /* block */)a4 completion:(id /* block */)a5;
+ (id)saveImageToLocalWithImage:(id)a0;
+ (void)uploadImageTypePhotosWithBridgeParams:(id)a0 completion:(id /* block */)a1;
+ (void)uploadCameraTypePhotosWithBridgeParams:(id)a0 cameraOpt:(BOOL)a1 completion:(id /* block */)a2;
+ (id)generateLocalImagePathWithImages:(id)a0;
+ (id)externalRecorderViewControllerWithParams:(id)a0 completion:(id /* block */)a1;
+ (BOOL)enableCameraBlockOpt;
+ (id)downScaleImage:(id)a0;
+ (id)generateLocalVideoPathWithRecordModel:(id)a0;
+ (id)generateLocalVideoInfoWithRecordModel:(id)a0;
+ (id)addVideoLocalPathToOriginDictionary:(id)a0 localVideoPath:(id)a1;
+ (void)uploadVideoWithURL:(id)a0 authToken:(id)a1 appKey:(id)a2 videoAuthorization:(id)a3 completion:(id /* block */)a4;
+ (id)handleImageWithOriginResults:(id)a0 localPathArray:(id)a1;
+ (id)generateImageDataWithImages:(id)a0;
+ (void)uploadCameraTypePhotosWithBridgeParams:(id)a0 completion:(id /* block */)a1;
+ (id)imageDataForImage:(id)a0;


@end
