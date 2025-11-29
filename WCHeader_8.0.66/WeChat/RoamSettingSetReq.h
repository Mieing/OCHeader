@class BaseRequest, NSMutableArray, RoamEncryptKey_KeyPair;

@interface RoamSettingSetReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baserequest;
@property (nonatomic) unsigned long long maxRoamSettingVersion;
@property (nonatomic) int type;
@property (nonatomic) unsigned int globalRoamSwitch;
@property (retain, nonatomic) NSMutableArray *contactSwitch;
@property (nonatomic) BOOL clearData;
@property (nonatomic) unsigned long long enableTimeMs;
@property (retain, nonatomic) RoamEncryptKey_KeyPair *reinitEncryptKey;

+ (void)initialize;

@end
