@class NSData;

@interface BaseRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSData *sessionKey;
@property (nonatomic) unsigned int uin;
@property (retain, nonatomic) NSData *deviceId;
@property (nonatomic) int clientVersion;
@property (retain, nonatomic) NSData *deviceType;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

- (void)setScene:(unsigned int)a0;
- (unsigned int)scene;
- (void)setDeviceType:(id)a0;
- (id)deviceType;
- (void)setClientVersion:(int)a0;
- (int)clientVersion;
- (void)setDeviceId:(id)a0;
- (id)deviceId;
- (void)setUin:(unsigned int)a0;
- (unsigned int)uin;
- (void)setSessionKey:(id)a0;
- (id)sessionKey;

@end
