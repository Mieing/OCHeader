@class BaseRequest, NSString;

@interface PstnCancelInviteRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int roomId;
@property (nonatomic) unsigned long long roomKey;
@property (retain, nonatomic) NSString *toUserName;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int inviteId;
@property (retain, nonatomic) NSString *toUserPhoneNum;
@property (nonatomic) unsigned long long callSeq;

+ (void)initialize;

@end
