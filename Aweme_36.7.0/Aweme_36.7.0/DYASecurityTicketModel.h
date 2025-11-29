@class NSString, DYABindMobileAlertModel;

@interface DYASecurityTicketModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *profileKey;
@property (copy, nonatomic) NSString *ticket;
@property (copy, nonatomic) NSString *sharkTicket;
@property (copy, nonatomic) NSString *notLoginTicket;
@property (copy, nonatomic) NSString *verifyTicket;
@property (copy, nonatomic) NSString *verifyMobile;
@property (copy, nonatomic) NSString *platform;
@property (copy, nonatomic) NSString *cancelToken;
@property (nonatomic) double cancelTime;
@property (copy, nonatomic) NSString *smsContent;
@property (copy, nonatomic) NSString *channelMobile;
@property (copy, nonatomic) NSString *upstreamSMSVerifyTicket;
@property (copy, nonatomic) NSString *secInfo;
@property (copy, nonatomic) NSString *smsCodeKey;
@property (copy, nonatomic) NSString *nickName;
@property (copy, nonatomic) NSString *avatarUrl;
@property (copy, nonatomic) NSString *douyinNumber;
@property (nonatomic) long long carrierType;
@property (nonatomic) BOOL needVerify;
@property (nonatomic) long long checkResult;
@property (copy, nonatomic) NSString *mobileTicket;
@property (retain, nonatomic) DYABindMobileAlertModel *bindMobileAlertModel;
@property (copy, nonatomic) NSString *larkEmployeeLoginTicket;
@property (copy, nonatomic) NSString *nextUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
