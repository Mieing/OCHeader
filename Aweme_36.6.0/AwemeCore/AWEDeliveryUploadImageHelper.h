@class NSArray, NSString, NSMutableArray, BDImageXUploaderClient;
@protocol AWEDeliveryUploadImageHelperDelegate;

@interface AWEDeliveryUploadImageHelper : NSObject <BDImageXUploadClientDelegate>

@property (retain, nonatomic) BDImageXUploaderClient *uploadClient;
@property (copy, nonatomic) id /* block */ callback;
@property (copy, nonatomic) NSArray *progresses;
@property (copy, nonatomic) NSArray *fileDatas;
@property (retain, nonatomic) NSMutableArray *URIs;
@property (retain, nonatomic) NSMutableArray *widths;
@property (retain, nonatomic) NSMutableArray *heights;
@property (weak, nonatomic) id<AWEDeliveryUploadImageHelperDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 singleImage:(id)a2 error:(id)a3;
- (void)imageXUpload:(id)a0 fileIndex:(long long)a1 progressDidUpdate:(long long)a2;
- (void)imageXUploadDidFinish:(id)a0;
- (long long)imageXUploadGetNetState:(id)a0;
- (void)imageXUpload:(id)a0 onLogInfo:(id)a1;
- (void)fetchUploadImageTokenWithPigeonBizType:(id)a0 completion:(id /* block */)a1;
- (void)uploadImageWithPigeonBizType:(id)a0 fileDatas:(id)a1 progresses:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;

@end
