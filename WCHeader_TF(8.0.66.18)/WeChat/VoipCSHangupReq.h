@class BaseRequest, NSString;

@interface VoipCSHangupReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int inviteId;
@property (nonatomic) unsigned long long roomId;
@property (nonatomic) unsigned long long roomKey;
@property (retain, nonatomic) NSString *toBizUserName;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int reason;

+ (void)initialize;

@end
