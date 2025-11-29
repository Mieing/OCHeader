@class NSString, NSData, HTSLiveApi, BDImageXUploaderClient;
@protocol IESLivePhotoImageXUploadRequestParams;

@interface AWELivePhotoImageXUploadRequest : NSObject <BDImageXUploadClientDelegate>

@property (retain, nonatomic) NSData *imageData;
@property (retain, nonatomic) id<IESLivePhotoImageXUploadRequestParams> params;
@property (copy, nonatomic) id /* block */ responseHandler;
@property (retain, nonatomic) BDImageXUploaderClient *uploaderClient;
@property (retain, nonatomic) HTSLiveApi *getURLApi;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)requestWithImageData:(id)a0 params:(id)a1 responseHandler:(id /* block */)a2;

- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUploadDidFinish:(id)a0;
- (id)initWithImageData:(id)a0 params:(id)a1 responseHandler:(id /* block */)a2;
- (void)configUploaderClient;
- (void)errorCallBackWithError:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
