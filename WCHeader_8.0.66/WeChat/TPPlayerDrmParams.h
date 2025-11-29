@class NSString;

@interface TPPlayerDrmParams : NSObject

@property (nonatomic) long long drmAbility;
@property (nonatomic) long long drmType;
@property (nonatomic) long long drmSecureLevel;
@property (nonatomic) long long drmPrepareStartTimeMs;
@property (nonatomic) long long drmPrepareEndTimeMs;
@property (nonatomic) long long drmSupportSecureDecoder;
@property (nonatomic) long long drmSupportSecureDecrypt;
@property (copy, nonatomic) NSString *drmComponentName;
@property (nonatomic) long long drmOpenSessionStartTimeMs;
@property (nonatomic) long long drmOpenSessionEndTimeMs;
@property (nonatomic) long long drmGetProvisionReqStartTimeMs;
@property (nonatomic) long long drmGetProvisionReqEndTimeMs;
@property (nonatomic) long long drmSendProvisionReqTimeMs;
@property (nonatomic) long long drmRecvProvisionRespTimeMs;
@property (nonatomic) long long drmProvideProvisionRespStartTimeMs;
@property (nonatomic) long long drmProvideProvisionRespEndTimeMs;
@property (nonatomic) long long drmGetKeyReqStartTimeMs;
@property (nonatomic) long long drmGetKeyReqEndTimeMs;
@property (nonatomic) long long drmSendKeyReqTimeMs;
@property (nonatomic) long long drmRecvKeyRespTimeMs;
@property (nonatomic) long long drmProvideKeyRespStartTimeMs;
@property (nonatomic) long long drmProvideKeyRespEndTimeMs;
@property (nonatomic) long long drmCertificateStartTimeMs;
@property (nonatomic) long long drmCertificateEndTimeMs;
@property (nonatomic) long long drmLicenseStartTimeMs;
@property (nonatomic) long long drmLicenseEndTimeMs;

- (id)init;
- (void).cxx_destruct;

@end
