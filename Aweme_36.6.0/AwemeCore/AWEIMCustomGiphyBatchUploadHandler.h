@class NSMutableDictionary, NSMutableArray;

@interface AWEIMCustomGiphyBatchUploadHandler : NSObject

@property (retain, nonatomic) NSMutableDictionary *uploadedImagesInfo;
@property (retain, nonatomic) NSMutableDictionary *resultInfos;
@property (retain, nonatomic) NSMutableArray *uploadedImagesInfoArray;
@property (retain, nonatomic) NSMutableArray *resultInfoArray;
@property (retain, nonatomic) NSMutableArray *uploaders;
@property (retain, nonatomic) NSMutableDictionary *uploadModelDic;

+ (BOOL)isGifImage:(id)a0;
+ (BOOL)isPNGImage:(id)a0;
+ (struct CGSize { double x0; double x1; })p_getAssetSizeFromAsset:(id)a0 orImage:(id)a1;
+ (BOOL)p_isSizeTooSmallWithSize:(struct CGSize { double x0; double x1; })a0;
+ (struct CGSize { double x0; double x1; })p_caculateEmojiSizeWithOriginSize:(struct CGSize { double x0; double x1; })a0;
+ (void)uploadData:(id)a0 uploadImage:(id)a1 completion:(id /* block */)a2;
+ (void)checkExistedWithMd5List:(id)a0 completion:(id /* block */)a1;
+ (id)imageDataFromImage:(id)a0;

- (void)requestAddBatchEmoticonsWithParams:(id)a0 completion:(id /* block */)a1;
- (void)p_uploadImage:(id)a0 data:(id)a1 preferredMD5:(id)a2 isLast:(BOOL)a3 completion:(id /* block */)a4;
- (void)uploadModels:(id)a0 canCompress:(BOOL)a1 completion:(id /* block */)a2;
- (void)p_uploadEmoticonStatus:(long long)a0;
- (void)checkExistBeforeUploadWithCompletion:(id /* block */)a0;
- (void)uploadWithModel:(id)a0 completion:(id /* block */)a1;
- (void)uploadPhotoObj:(id)a0 originAssets:(id)a1 completion:(id /* block */)a2;
- (void)uploadImages:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
