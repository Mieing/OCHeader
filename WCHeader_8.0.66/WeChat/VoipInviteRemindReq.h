@class BaseRequest, NSMutableArray;

@interface VoipInviteRemindReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int listCount;
@property (retain, nonatomic) NSMutableArray *toUserNameList;
@property (nonatomic) unsigned int inviteType;

+ (void)initialize;

@end
