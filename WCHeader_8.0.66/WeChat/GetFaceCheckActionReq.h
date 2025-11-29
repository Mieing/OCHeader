@class BaseRequest, NSString, NSData;

@interface GetFaceCheckActionReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) NSString *packageSign;
@property (nonatomic) unsigned int liveType;
@property (retain, nonatomic) NSData *selectData;
@property (retain, nonatomic) NSString *osKernelVersion;
@property (retain, nonatomic) NSData *extSpamInfo;
@property (nonatomic) BOOL isVpn;
@property (nonatomic) BOOL isWechatVoipCalling;

+ (void)initialize;

@end
