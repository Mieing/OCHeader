@class BDImageXUploaderClient, NSMutableDictionary, NSString;

@interface AWELiveImageUploadServiceImpl : NSObject <BDImageXUploadClientDelegate, IESLiveImageUploadService>

@property (retain, nonatomic) BDImageXUploaderClient *imageUploadClient;
@property (retain, nonatomic) NSMutableDictionary *uploadResult;
@property (copy, nonatomic) id /* block */ onCompletion;
@property (copy, nonatomic) id /* block */ singleImageCompletion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageXUploadDidFinish:(id)a0;
- (long long)imageXUploadGetNetState:(id)a0;
- (void)imageXUpload:(id)a0 onLogInfo:(id)a1;
- (id)uploadErrorWithReason:(id)a0;
- (void)uploadWithRequest:(id)a0 singleImageCompletion:(id /* block */)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;

@end
