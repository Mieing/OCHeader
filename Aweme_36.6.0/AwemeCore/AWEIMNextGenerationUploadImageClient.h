@class AWEIMNextGenerationUploadConfigModel, NSString, BDImageUploaderClient, NSData, AWEIMFakeProgressProvider, NSError, BDUploadImageInfo;

@interface AWEIMNextGenerationUploadImageClient : NSObject <BDImageUploadClientDelegate, AWEIMNextGenerationUploadFileClientProtocol>

@property (copy, nonatomic) NSData *data;
@property (retain, nonatomic) AWEIMFakeProgressProvider *fakeProgressProvider;
@property (nonatomic) int fileType;
@property (retain) AWEIMNextGenerationUploadConfigModel *config;
@property (retain, nonatomic) BDImageUploaderClient *client;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) BDUploadImageInfo *imageInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageUploadDidFinish:(id)a0;
- (void)imageUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageUpload:(id)a0 onLogInfo:(id)a1;
- (void)imageUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (long long)imageUploadGetNetState:(id)a0;
- (id)imageConfig;
- (void)uploadWithContext:(id)a0;
- (id)boeHandledHostName:(id)a0;
- (id)p_uploadCustomParameterString;
- (void)stopUpload;
- (id)createImagePreHeatUploaderClient;
- (BOOL)shouldIgnoreVerifyImageForUploadFileType:(int)a0;
- (void)uploadOriginData:(id)a0 filePath:(id)a1 fileType:(int)a2 progressBlock:(id /* block */)a3 completion:(id /* block */)a4;
- (id)createImageUploaderClient;
- (id)createImageUploaderClient_backup;
- (id)originalHostName;
- (id)p_getUploadConfigDic;
- (id)p_setPreHeatConfigWithConfigDict:(id)a0 isUseStorage:(BOOL)a1;
- (id)p_getAuthDictWithConfig:(id)a0;
- (void)p_setRequestParameterWithClient:(id)a0;
- (void)p_tracePicPreHeatResultWith:(BOOL)a0;
- (id)adjustUploadConfig:(id)a0;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
