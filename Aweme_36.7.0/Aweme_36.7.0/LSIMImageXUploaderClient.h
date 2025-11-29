@class BDUploadImageXInfo, LSIMBizCImageXUploadConfig, NSString, NSData, NSError, BDImageXUploaderClient;

@interface LSIMImageXUploaderClient : NSObject <BDImageXUploadClientDelegate>

@property (copy, nonatomic) NSData *data;
@property (nonatomic) int fileType;
@property (retain) LSIMBizCImageXUploadConfig *config;
@property (retain, nonatomic) BDImageXUploaderClient *client;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) BDUploadImageXInfo *imageInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageXUploadDidFinish:(id)a0;
- (long long)imageXUploadGetNetState:(id)a0;
- (void)imageXUpload:(id)a0 onLogInfo:(id)a1;
- (BOOL)isBOEEnv;
- (id)imageConfig;
- (void)uploadWithContext:(id)a0;
- (id)boeHandledHostName:(id)a0;
- (void)uploadOriginData:(id)a0 filePath:(id)a1 fileType:(int)a2 progressBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (id)originalHostName;
- (id)createImageXUploaderClient;
- (id)encryptionInputWithFileType:(int)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
