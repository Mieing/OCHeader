@class NSData;

@interface IamBizBaseRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *sessionKey;
@property (nonatomic) unsigned int uin;
@property (retain, nonatomic) NSData *deviceId;
@property (nonatomic) int clientVersion;
@property (retain, nonatomic) NSData *deviceType;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
