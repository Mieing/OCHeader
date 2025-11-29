@class NSString, NSMutableArray;

@interface AWEDeliveryMediaUtil : NSObject <AWEDeliveryUploadImageHelperDelegate, AWEDeliveryUploadVideoHelperDelegate>

@property (retain, nonatomic) NSMutableArray *uploadImageHelpers;
@property (retain, nonatomic) NSMutableArray *uploadVideoHelpers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageUploadHost;
+ (id)videoUploadHost;
+ (id)videoFetchDomain;
+ (id)shared;

- (void)transCodeVideoWithPigeonBizType:(id)a0 vid:(id)a1 completion:(id /* block */)a2;
- (void)publishVideoWithPigeonBizType:(id)a0 vid:(id)a1 receiverId:(id)a2 completion:(id /* block */)a3;
- (void)uploadVideoWithPigeonBizType:(id)a0 filePath:(id)a1 updateCallback:(id /* block */)a2 completion:(id /* block */)a3;
- (void)uploadImageToTOSWithPigeonBizType:(id)a0 imageData:(id)a1 imageName:(id)a2 completion:(id /* block */)a3;
- (void)uploadImageWithPigeonBizType:(id)a0 fileDatas:(id)a1 completion:(id /* block */)a2;
- (void)uploadImageHelperDidFinish:(id)a0;
- (void)uploadImageWithPigeonBizType:(id)a0 fileDatas:(id)a1 progresses:(id)a2 completion:(id /* block */)a3;
- (void)uploadVideoHelperDidFinish:(id)a0;
- (void)fetchVideoApiStrWithPigeonBizType:(id)a0 vid:(id)a1 completion:(id /* block */)a2;
- (void).cxx_destruct;
- (id)init;

@end
