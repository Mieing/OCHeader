@class BaseRequest, NSString, NSData;

@interface VoipCSInviteReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int inviteId;
@property (retain, nonatomic) NSString *toBizUserName;
@property (nonatomic) int netType;
@property (retain, nonatomic) NSData *callContext;
@property (retain, nonatomic) NSData *capInfo;
@property (nonatomic) unsigned long long timestamp;
@property (retain, nonatomic) NSString *toBizAppId;

+ (void)initialize;

@end
