@class BDVideoUploadInfo, NSString, AWEIMRedPacketUploadConfig, NSError, BDVideoUploaderClient;

@interface AWEIMRedPacketUploadVideoClient : NSObject <BDVideoUploadClientDelegate, AWEIMRedPacketUploadManagerProtocol>

@property (retain, nonatomic) AWEIMRedPacketUploadConfig *config;
@property (retain, nonatomic) BDVideoUploaderClient *client;
@property (retain, nonatomic) BDVideoUploadInfo *imageInfo;
@property (copy, nonatomic) NSString *filePath;
@property (retain, nonatomic) NSError *error;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ progressBlock;
@property (nonatomic) long long uploadProgress;
@property (copy, nonatomic) NSString *uploadId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoUpload:(id)a0 didFinish:(id)a1 error:(id)a2;
- (void)videoUpload:(id)a0 progressDidUpdate:(long long)a1;
- (long long)videoUploadGetNetState:(id)a0;
- (void)videoUpload:(id)a0 onLogInfo:(id)a1;
- (id)boeHandledHostName:(id)a0;
- (id)p_uploadCustomParameterString;
- (void)uploadWithContex:(id)a0 completion:(id /* block */)a1;
- (id)createVideoUploadClient;
- (void).cxx_destruct;
- (id)initWithConfig:(id)a0;

@end
