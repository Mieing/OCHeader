@class BDUploadImageXInfo, NSString, NSDictionary, NSError, BDImageXUploaderClient;

@interface AWEUGImageXUploaderClient : NSObject <BDImageXUploadClientDelegate>

@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) NSDictionary *uploadConfig;
@property (copy, nonatomic) NSDictionary *authorizationParameter;
@property (retain, nonatomic) BDImageXUploaderClient *client;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) BDUploadImageXInfo *imageInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)instanceWithBase64Data:(id)a0 uploadConfig:(id)a1 authConfig:(id)a2 requestParams:(id)a3;

- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageXUploadDidFinish:(id)a0;
- (long long)imageXUploadGetNetState:(id)a0;
- (void)imageXUpload:(id)a0 onLogInfo:(id)a1;
- (void).cxx_destruct;

@end
