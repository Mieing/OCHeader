@class RoamEncryptKey, BaseResponse;

@interface UpdateEncryptKeyResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseresponse;
@property (nonatomic) BOOL needSync;
@property (nonatomic) unsigned long long maxEncryptKeyVersion;
@property (retain, nonatomic) RoamEncryptKey *roamEncryptKey;

+ (void)initialize;

@end
