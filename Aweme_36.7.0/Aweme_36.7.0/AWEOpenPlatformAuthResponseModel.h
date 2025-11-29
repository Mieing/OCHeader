@class AWEOpenPlatformAuthEntranceModel, NSString, NSDictionary, NSError;

@interface AWEOpenPlatformAuthResponseModel : NSObject

@property (copy, nonatomic) AWEOpenPlatformAuthEntranceModel *entranceModel;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSString *grantedPermissions;
@property (copy, nonatomic) NSString *grantedLocalPermissions;
@property (nonatomic) long long errCode;
@property (nonatomic) long long subErrCode;
@property (copy, nonatomic) NSString *errMsg;
@property (nonatomic) BOOL shouldNotJumpBack;
@property (nonatomic) BOOL isSilentAuth;
@property (copy, nonatomic) NSError *originalError;
@property (nonatomic) BOOL withPrivacyAgreement;
@property (retain, nonatomic) NSDictionary *sdkExtraInfo;

+ (id)commonParamsErrorRespWithError:(id)a0 entranceModel:(id)a1;
+ (id)delegateErrorRespWithError:(id)a0 entranceModel:(id)a1;
+ (id)errCode:(long long)a0 subErrCode:(long long)a1 errMsg:(id)a2 originalError:(id)a3 entranceModel:(id)a4;
+ (id)silentSuccessWithTicket:(id)a0 grantedPermissions:(id)a1 entranceModel:(id)a2;
+ (id)successWithTicket:(id)a0 grantedPermissions:(id)a1 entranceModel:(id)a2;

- (void).cxx_destruct;

@end
