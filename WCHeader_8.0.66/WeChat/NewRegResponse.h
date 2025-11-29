@class SKBuiltinBuffer_t, NSString, HostList, SecAuthRegKeySect, XAgreementDmSetting, PluginKeyList, BaseResponse, XAgreementWordingSetting, ShowStyleKey, NetworkControl, BuiltinIPList, CDNDnsInfo;

@interface NewRegResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int uin;
@property (retain, nonatomic) NSString *sessionKey;
@property (retain, nonatomic) NSString *officialUserName;
@property (retain, nonatomic) NSString *officialNickName;
@property (retain, nonatomic) NSString *qqmicroBlogUserName;
@property (retain, nonatomic) NSString *bindEmail;
@property (nonatomic) unsigned int pushMailStatus;
@property (nonatomic) unsigned int sendCardBitFlag;
@property (retain, nonatomic) NSString *pushMailSettingTicket;
@property (retain, nonatomic) BuiltinIPList *builtinIplist;
@property (retain, nonatomic) NSString *fsurl;
@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NetworkControl *networkControl;
@property (nonatomic) unsigned int returnFlag;
@property (nonatomic) unsigned int regType;
@property (retain, nonatomic) NSString *authKey;
@property (retain, nonatomic) PluginKeyList *pluginKeyList;
@property (retain, nonatomic) NSString *password;
@property (nonatomic) unsigned int profileFlag;
@property (retain, nonatomic) HostList *newHostList;
@property (retain, nonatomic) NSString *autoAuthTicket;
@property (retain, nonatomic) CDNDnsInfo *dnsInfo;
@property (retain, nonatomic) NSString *stepTicket;
@property (retain, nonatomic) NSString *verifySignature;
@property (retain, nonatomic) SKBuiltinBuffer_t *verifyBuff;
@property (retain, nonatomic) ShowStyleKey *showStyle;
@property (retain, nonatomic) CDNDnsInfo *snsDnsInfo;
@property (retain, nonatomic) CDNDnsInfo *appDnsInfo;
@property (retain, nonatomic) SecAuthRegKeySect *secAuthRegKeySect;
@property (nonatomic) unsigned int mmtlsControlBitFlag;
@property (nonatomic) unsigned int serverTime;
@property (nonatomic) unsigned int userXagreementId;
@property (retain, nonatomic) XAgreementWordingSetting *xagreementWordingSetting;
@property (retain, nonatomic) XAgreementDmSetting *xagreementDmSetting;

+ (void)initialize;

@end
