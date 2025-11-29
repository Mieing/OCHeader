@class AWEECUploadFileHelper;

@interface AWEECEcUploadMultiFileWithProgressMethodImpl : AWEECEcUploadMultiFileWithProgressMethod

@property (retain, nonatomic) AWEECUploadFileHelper *preheatHelper;
@property (nonatomic) BOOL usePreHeat;

- (void)callWithParamModel:(id)a0 completionHandler:(id /* block */)a1;
- (void)callWithParamModel:(id)a0;
- (void)startPreHeatWithParams:(id)a0;
- (void)uploadPhotosWithParams:(id)a0 imagesArray:(id)a1;
- (void)uploadVideoWithParams:(id)a0 videoPath:(id)a1 musicID:(id)a2 source:(id)a3;
- (id)enableMultiUploader;
- (id)compressWithImage:(id)a0;
- (void)trackImageUploadResult:(id)a0 fileCount:(long long)a1 fileDataLength:(long long)a2;
- (id)compressImageThreshold;
- (void).cxx_destruct;

@end
