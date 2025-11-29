@class NSString;

@interface ConfCallWordingInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long roomid;
@property (nonatomic) unsigned long long inviteId;
@property (nonatomic) unsigned int roomType;
@property (nonatomic) unsigned int selfRole;
@property (nonatomic) int callerMemberid;
@property (nonatomic) int calleeMemberid;
@property (nonatomic) unsigned int wordingId;
@property (nonatomic) unsigned int talkTime;
@property (retain, nonatomic) NSString *remoteUsername;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned int interruptType;
@property (retain, nonatomic) NSString *ownerGroupid;

+ (void)initialize;

- (id)wordingInfo;

@end
