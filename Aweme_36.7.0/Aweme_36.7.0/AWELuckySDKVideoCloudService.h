@class BDVideoUploaderClient, NSString;
@protocol BDXBridgeContainerProtocol;

@interface AWELuckySDKVideoCloudService : NSObject <BDVideoUploadClientDelegate>

@property (readonly, nonatomic) BDVideoUploaderClient *uploaderClient;
@property (weak, nonatomic) id<BDXBridgeContainerProtocol> container;
@property (copy, nonatomic) id /* block */ completionHandler;
@property (copy, nonatomic) NSString *traceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)videoUpload:(id)a0 didFinish:(id)a1 error:(id)a2;
- (void)videoUpload:(id)a0 progressDidUpdate:(long long)a1;
- (long long)videoUploadGetNetState:(id)a0;
- (id)initWithParamModel:(id)a0;
- (void).cxx_destruct;
- (void)dealloc;

@end
