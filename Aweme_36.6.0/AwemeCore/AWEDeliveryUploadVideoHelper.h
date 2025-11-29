@class BDVideoUploaderClient, NSString;
@protocol AWEDeliveryUploadVideoHelperDelegate;

@interface AWEDeliveryUploadVideoHelper : NSObject <BDVideoUploadClientDelegate>

@property (retain, nonatomic) BDVideoUploaderClient *uploadClient;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) id /* block */ progresses;
@property (weak, nonatomic) id<AWEDeliveryUploadVideoHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoUpload:(id)a0 didFinish:(id)a1 error:(id)a2;
- (void)videoUpload:(id)a0 progressDidUpdate:(long long)a1;
- (long long)videoUploadGetNetState:(id)a0;
- (id)videoUploadGetMetaString:(id)a0;
- (void)videoUpload:(id)a0 onLogInfo:(id)a1;
- (void)uploadVideoWithPigeonBizType:(id)a0 filePath:(id)a1 updateCallback:(id /* block */)a2 completion:(id /* block */)a3;
- (void)fetchUploadVideoTokenWithPigeonBizType:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end
