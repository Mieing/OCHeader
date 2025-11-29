@class NSMutableDictionary, NSArray, NSString, BDImageXUploaderClient;
@protocol ACCFileUploadServiceProtocol;

@interface AWEAIGCResourceUploadServiceImpl : NSObject <BDImageXUploadClientDelegate, ACCAIGCResourceUploadProtocol>

@property (retain, nonatomic) BDImageXUploaderClient *imageUploader;
@property (retain, nonatomic) NSMutableDictionary *uploadImages;
@property (retain, nonatomic) NSArray *uploadOriginImages;
@property (retain, nonatomic) NSMutableDictionary *imageUploadInfo;
@property (copy, nonatomic) id /* block */ uploadCompletion;
@property (retain, nonatomic) id<ACCFileUploadServiceProtocol> uploadService;
@property (nonatomic) BOOL hasUploadError;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageXUploadDidFinish:(id)a0;
- (void)aigcStartUploadImages:(id)a0 extra:(id)a1 authParameters:(id)a2 result:(id /* block */)a3;
- (id)uploadImageDownsampleWithImagePaths:(id)a0;
- (id)uploadCustomParameterString;
- (void)aigcStartUploadImagesWithResize:(id)a0 extra:(id)a1 authParameters:(id)a2 result:(id /* block */)a3;
- (void)aigcStartUploadVideo:(id)a0 extra:(id)a1 authParameters:(id)a2 result:(id /* block */)a3;
- (void).cxx_destruct;
- (void)cancelTask;

@end
