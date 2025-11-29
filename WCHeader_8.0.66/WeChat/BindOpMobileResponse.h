@class BuiltinIPList, NSString, HostList, NetworkControl, SafeDeviceList, ShowStyleKey, BaseResponse;

@interface BindOpMobileResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *ticket;
@property (retain, nonatomic) NSString *smsNo;
@property (nonatomic) unsigned int needSetPwd;
@property (retain, nonatomic) NSString *pwd;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) HostList *newHostList;
@property (retain, nonatomic) BuiltinIPList *builtinIplist;
@property (retain, nonatomic) NetworkControl *networkControl;
@property (retain, nonatomic) NSString *authTicket;
@property (nonatomic) unsigned int safeDevice;
@property (retain, nonatomic) NSString *cc;
@property (nonatomic) unsigned int obsoleteItem1;
@property (retain, nonatomic) SafeDeviceList *safeDeviceList;
@property (retain, nonatomic) NSString *pureMobile;
@property (retain, nonatomic) NSString *formatedMobile;
@property (retain, nonatomic) ShowStyleKey *showStyle;
@property (nonatomic) unsigned int mmtlsControlBitFlag;
@property (retain, nonatomic) NSString *smsUpCode;
@property (retain, nonatomic) NSString *smsUpMobile;
@property (nonatomic) unsigned int mobileCheckType;
@property (retain, nonatomic) NSString *regSessionId;
@property (nonatomic) unsigned int restart;
@property (nonatomic) unsigned int certRegion;
@property (retain, nonatomic) NSString *verifyTicket;
@property (nonatomic) int needDoPostCheck;

+ (void)initialize;

@end
