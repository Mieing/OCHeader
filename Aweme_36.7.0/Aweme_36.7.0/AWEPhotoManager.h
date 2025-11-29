@class NSString;

@interface AWEPhotoManager : NSObject <AWEPhotoManager>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)requestAuthorizationWithCompletionOnMainQueue:(id /* block */)a0;
+ (void)getLatestAssetWithType:(unsigned long long)a0 completion:(id /* block */)a1;
+ (void)getAssetsFromFetchResult:(id)a0 filterBlock:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)getAssetsWithAlbum:(id)a0 type:(unsigned long long)a1 filterBlock:(id /* block */)a2 completion:(id /* block */)a3;
+ (void)getAssetsWithIdentifiers:(id)a0 completion:(id /* block */)a1;
+ (void)getAssetsAndAVAssetAndCoverImageWithIdentifiers:(id)a0 completion:(id /* block */)a1;
+ (void)getAssetsWithType:(unsigned long long)a0 filterBlock:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)getAssetsWithType:(unsigned long long)a0 filterBlock:(id /* block */)a1 ascending:(BOOL)a2 completion:(id /* block */)a3;
+ (void)getAllAssetsWithType:(unsigned long long)a0 ascending:(BOOL)a1 completion:(id /* block */)a2;
+ (int)getUIImageWithPHAsset:(id)a0 networkAccessAllowed:(BOOL)a1 progressHandler:(id /* block */)a2 completion:(id /* block */)a3;
+ (int)getUIImageWithPHAsset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 networkAccessAllowed:(BOOL)a3 progressHandler:(id /* block */)a4 completion:(id /* block */)a5;
+ (int)getUIImageWithPHAsset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 networkAccessAllowed:(BOOL)a3 resizeMode:(long long)a4 progressHandler:(id /* block */)a5 completion:(id /* block */)a6;
+ (int)getUIImageWithPHAsset:(id)a0 imageSize:(struct CGSize { double x0; double x1; })a1 networkAccessAllowed:(BOOL)a2 progressHandler:(id /* block */)a3 completion:(id /* block */)a4;
+ (int)getUIImageWithPHAsset:(id)a0 targetSize:(struct CGSize { double x0; double x1; })a1 contentMode:(long long)a2 options:(id)a3 resultHandler:(id /* block */)a4;
+ (void)getPhotoDataWithAsset:(id)a0 version:(long long)a1 completion:(id /* block */)a2;
+ (void)getOriginalPhotoDataWithAsset:(id)a0 completion:(id /* block */)a1;
+ (void)getOriginalPhotoDataFromICloudWithAsset:(id)a0 progressHandler:(id /* block */)a1 completion:(id /* block */)a2;
+ (void)getPhotosBytesWithArray:(id)a0 completion:(id /* block */)a1;
+ (void)getPhotosBytesWithArray:(id)a0 resizeMode:(long long)a1 completion:(id /* block */)a2;
+ (struct CGSize { double x0; double x1; })sizeFor1080P:(id)a0;
+ (id)processImageTo1080P:(id)a0;
+ (id)processImageWithBlackEdgeWithOutputSize:(struct CGSize { double x0; double x1; })a0 sourceImage:(id)a1;
+ (id)privateVideoURLWithInfo:(id)a0;
+ (id)getMD5withPath:(id)a0 usedBytes:(long long)a1;
+ (id)timeStringWithDuration:(double)a0;
+ (id)assetModelWithPHAsset:(id)a0;
+ (unsigned long long)authorizationStatus;
+ (void)cancelImageRequest:(int)a0;
+ (void)authorizationStatusWithCompletion:(id /* block */)a0;


@end
