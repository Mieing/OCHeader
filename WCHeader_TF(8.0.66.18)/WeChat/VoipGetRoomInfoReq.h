@class BaseRequest, NSString;

@interface VoipGetRoomInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) int roomId;
@property (nonatomic) long long roomKey;
@property (retain, nonatomic) NSString *callerUserName;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned long long timestamp64;

+ (void)initialize;

@end
