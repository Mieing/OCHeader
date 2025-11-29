@class AWEIMNextGenerationUploadConfigModel, BDVideoUploaderClient, NSString;
@protocol BDExternFileReaderInterface;

@interface AWEIMNextGenerationStreamUploadVideoClient : NSObject <BDVideoUploadClientDelegate, AWEIMNextGenerationUploadFileClientProtocol>

@property (retain) AWEIMNextGenerationUploadConfigModel *config;
@property (retain, nonatomic) BDVideoUploaderClient *client;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (retain, nonatomic) id<BDExternFileReaderInterface> fileStreamReader;
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
- (id)p_checkContext:(id)a0;
- (id)createVideoUploaderClient;
- (id)createVideoUploaderClient_backup;
- (id)p_errorWithCode:(int)a0 info:(id)a1;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
