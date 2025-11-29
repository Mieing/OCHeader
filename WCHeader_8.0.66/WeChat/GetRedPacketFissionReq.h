@class BaseRequest, NSString, NSData;

@interface GetRedPacketFissionReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *packetId;
@property (retain, nonatomic) NSString *senderUsername;
@property (nonatomic) unsigned int msgCreateTime;
@property (nonatomic) unsigned int packetSource;
@property (nonatomic) unsigned int sceneType;
@property (retain, nonatomic) NSData *packetFissionInfo;

+ (void)initialize;

@end
