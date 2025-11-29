@class NSString, BDECPigeonECOMVideoUploadInfoV2;

@interface AWEECOMIMPaasECOMVideoUploadInfoNew : NSObject <AWEECOMIMPaasECOMVideoUploadInfoProtocol>

@property (retain, nonatomic) BDECPigeonECOMVideoUploadInfoV2 *videoUploadInfo;
@property (copy, nonatomic) NSString *accessKeyId;
@property (copy, nonatomic) NSString *secretAccessKey;
@property (copy, nonatomic) NSString *sessionToken;
@property (copy, nonatomic) NSString *expiredTime;
@property (copy, nonatomic) NSString *currentTime;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *spaceName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)PaasVideoUploadInfoWithPigeonVideoUploadInfo:(id)a0;

- (void).cxx_destruct;

@end
