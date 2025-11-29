@class NSString, BDECPigeonECOMImageUploadInfoV2;

@interface AWEECOMIMPaasECOMImageUploadInfoNew : NSObject <AWEECOMIMPaasECOMImageUploadInfoProtocol>

@property (retain, nonatomic) BDECPigeonECOMImageUploadInfoV2 *imageUploadInfo;
@property (copy, nonatomic) NSString *accessKeyId;
@property (copy, nonatomic) NSString *secretAccessKey;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSString *expiredTime;
@property (copy, nonatomic) NSString *currentTime;
@property (copy, nonatomic) NSString *serviceId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)PaasImageUploadInfoWithPigeonImageUploadInfo:(id)a0;

- (void).cxx_destruct;

@end
