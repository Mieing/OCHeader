@class NSString;

@interface ConfCallResultInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned long long roomid;
@property (nonatomic) unsigned long long inviteId;
@property (nonatomic) unsigned int roomType;
@property (nonatomic) unsigned int selfRole;
@property (nonatomic) unsigned int callResult;
@property (nonatomic) unsigned int talkTime;
@property (retain, nonatomic) NSString *remoteUsername;
@property (nonatomic) unsigned int wordingId;
@property (nonatomic) BOOL subCall;
@property (nonatomic) unsigned int leftCallCnt;

+ (void)initialize;

@end
