@class AWEIMNextGenerationUploadConfigModel, NSString, AWEIMFakeProgressProvider, BDVideoUploaderClient;

@interface AWEIMNextGenerationUploadVideoClient : NSObject <BDVideoUploadClientDelegate, AWEIMNextGenerationUploadFileClientProtocol>

@property (copy, nonatomic) NSString *filePath;
@property (nonatomic) long long dataLength;
@property (nonatomic) BOOL forceNewEncrypt;
@property (nonatomic) long long messageType;
@property (retain, nonatomic) AWEIMFakeProgressProvider *fakeProgressProvider;
@property (retain) AWEIMNextGenerationUploadConfigModel *config;
@property (retain, nonatomic) BDVideoUploaderClient *client;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoUpload:(id)a0 didFinish:(id)a1 error:(id)a2;
- (void)videoUpload:(id)a0 progressDidUpdate:(long long)a1;
- (long long)videoUploadGetNetState:(id)a0;
- (id)videoUploadGetMetaString:(id)a0;
- (void)videoUpload:(id)a0 onLogInfo:(id)a1;
- (void)videoUpload:(id)a0 updateVideoStage:(long long)a1 timestamp:(double)a2;
- (void)uploadWithContext:(id)a0;
- (id)uploadCustomParameterString;
- (void)stopUpload;
- (id)createVideoUploaderClient;
- (id)createVideoUploaderClient_backup;
- (void)uploadOriginData:(id)a0 messageType:(long long)a1 filePath:(id)a2 fileType:(int)a3 forceNewEncrypt:(BOOL)a4 progressBlock:(id /* block */)a5 completion:(id /* block */)a6;
- (BOOL)p_isSupportNewVideoUploadStrategy;
- (id)getSpeedTestResultModel;
- (id)getCustomSlicSizeWithResultModel:(id)a0;
- (id)getSocketNumWithResultModel:(id)a0;
- (void)setSpeedTestContextWithResultModel:(id)a0 client:(id)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
