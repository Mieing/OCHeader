@class BaseRequest, NSString;

@interface WxaRuntimeUpdateNativeVoipRoomStatusReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *groupId;
@property (nonatomic) unsigned int roomStatus;
@property (nonatomic) unsigned int voiceTime;
@property (nonatomic) unsigned int videoTime;

+ (void)initialize;

@end
