@class NSString, AWECommentUploadAuthResponse, NSMutableDictionary, NSMutableString, BDImageXUploaderClient;

@interface AWECommentImageUploadManager : NSObject <BDImageXUploadClientDelegate, AWECommentImageUploadManagerProtocol>

@property (retain, nonatomic) AWECommentUploadAuthResponse *response;
@property (retain, nonatomic) BDImageXUploaderClient *imageUploadClient;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSString *imageSource;
@property (nonatomic) long long imageCountTotal;
@property (nonatomic) long long currentUploadProcess;
@property (nonatomic) long long uploadProcessUpdateCount;
@property (retain, nonatomic) NSMutableDictionary *multiImageInfoDict;
@property (retain, nonatomic) NSMutableString *multiImageUri;
@property (retain, nonatomic) NSMutableString *multiImageWidth;
@property (retain, nonatomic) NSMutableString *multiImageHeight;
@property (retain, nonatomic) NSMutableString *multiImageFormat;
@property (retain, nonatomic) NSMutableString *multiImageSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageXUploadDidFinish:(id)a0;
- (long long)imageXUploadGetNetState:(id)a0;
- (void)imageXUpload:(id)a0 onLogInfo:(id)a1;
- (void)commentPictureUploadWithImageList:(id)a0 imageSource:(id)a1 authCompletion:(id /* block */)a2 compressCompletion:(id /* block */)a3 progress:(id /* block */)a4 completion:(id /* block */)a5;
- (void)initMultiImageInfo;
- (void)startUploadImageList:(id)a0 compressCompletion:(id /* block */)a1;
- (void)appendMultiImageInfo:(id)a0;
- (void)updateMultiImageTotalProgress:(long long)a0;
- (void)processMultiImageInfo;
- (void)commentPictureUploadWithImageList:(id)a0 imageSource:(id)a1 progress:(id /* block */)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
