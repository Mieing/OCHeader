@class NSString, NSMutableArray;

@interface ConfRecvInviteInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long roomid;
@property (nonatomic) unsigned int roomType;
@property (nonatomic) unsigned int memberid;
@property (retain, nonatomic) NSString *callerOpenid;
@property (retain, nonatomic) NSString *callerUsername;
@property (retain, nonatomic) NSMutableArray *usernameList;
@property (retain, nonatomic) NSString *subAppid;
@property (nonatomic) BOOL subCall;

+ (void)initialize;

- (id)voIPMonoMsgWithType:(unsigned int)a0 scene:(unsigned int)a1;
- (id)inviteVoIPMonoMsg:(unsigned int)a0;
- (id)cancelVoIPMonoMsg:(unsigned int)a0;

@end
