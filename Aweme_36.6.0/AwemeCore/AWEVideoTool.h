@interface AWEVideoTool : NSObject

@property (copy, nonatomic) id /* block */ block;

+ (void)saveVideoToAlbum:(id)a0 needAsset:(BOOL)a1 completion:(id /* block */)a2;
+ (void)disableAssertLib;
+ (void)cleanOldAWEVideoToolErrorVideos;
+ (void)saveVideoToCameraRoll:(id)a0 needAsset:(BOOL)a1 completion:(id /* block */)a2;
+ (void)logSaveVideoErrorInfoWithKey:(id)a0 videoPath:(id)a1 error:(id)a2;
+ (void)saveVideoToAlbumUsingAssetLibrary:(id)a0 needAsset:(BOOL)a1 completion:(id /* block */)a2;
+ (void)getAlbumWithName:(id)a0 completion:(id /* block */)a1;
+ (void)saveVideoToCameraRoll:(id)a0 withDate:(id)a1 needAsset:(BOOL)a2 completion:(id /* block */)a3;
+ (id)errorVideoDir;
+ (void)saveVideoToAlbum:(id)a0 completion:(id /* block */)a1;
+ (void)saveVideoToAlbum:(id)a0 needAsset:(BOOL)a1 withDate:(id)a2 completion:(id /* block */)a3;

- (void)saveVideoToAlbumUsingUISaveVideoAtPathToSavedPhotosAlbum:(id)a0 completion:(id /* block */)a1;
- (void)saveVideoToAlbumByUsingUIImageWriteSavedPhotoAlbum:(id)a0 didFinishSavingWithError:(id)a1 contxtInfo:(void *)a2;
- (void).cxx_destruct;

@end
