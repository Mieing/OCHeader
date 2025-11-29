@class AWECommentUploadAuthResponse, BDVideoUploaderClient, NSString;

@interface AWECommentAudioUploadManager : NSObject <BDVideoUploadClientDelegate>

@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) AWECommentUploadAuthResponse *response;
@property (retain, nonatomic) BDVideoUploaderClient *client;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (void)videoUpload:(id)a0 didFinish:(id)a1 error:(id)a2;
- (void)videoUpload:(id)a0 progressDidUpdate:(long long)a1;
- (void)uploadAudioWithFilePath:(id)a0 authCompletion:(id /* block */)a1 completion:(id /* block */)a2;
- (void)trackCommentAudioAbnormalCaseWithType:(id)a0 errorCode:(long long)a1;
- (void)startUploadAudioWithFilePath:(id)a0;
- (void)uploadAudioWithFilePath:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
