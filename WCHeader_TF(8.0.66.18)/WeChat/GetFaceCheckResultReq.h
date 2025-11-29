@class BaseRequest, NSString, PayGenActionLocation, NSData, GyroScopeData;

@interface GetFaceCheckResultReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *personId;
@property (retain, nonatomic) NSString *actionData;
@property (nonatomic) float reductionRatio;
@property (retain, nonatomic) NSString *videoFileid;
@property (retain, nonatomic) NSString *aesKey;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *takeMessage;
@property (retain, nonatomic) NSString *package;
@property (retain, nonatomic) PayGenActionLocation *location;
@property (retain, nonatomic) NSData *hash;
@property (nonatomic) BOOL needSignContract;
@property (nonatomic) unsigned int liveType;
@property (nonatomic) unsigned long long bioId;
@property (retain, nonatomic) NSString *osKernelVersion;
@property (retain, nonatomic) NSData *extSpamInfo;
@property (retain, nonatomic) GyroScopeData *gyroscope;
@property (nonatomic) BOOL isVpn;
@property (nonatomic) BOOL isWechatVoipCalling;

+ (void)initialize;

@end
