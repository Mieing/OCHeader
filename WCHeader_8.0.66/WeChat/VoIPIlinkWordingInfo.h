@class NSString;

@interface VoIPIlinkWordingInfo : NSObject

@property (nonatomic) unsigned long long roomid;
@property (nonatomic) unsigned long long inviteId;
@property (nonatomic) unsigned int roomType;
@property (nonatomic) unsigned int selfRole;
@property (nonatomic) unsigned int wordingId;
@property (nonatomic) unsigned int talkTime;
@property (retain, nonatomic) NSString *remoteUsername;
@property (nonatomic) int callerMemberID;
@property (nonatomic) int calleeMemberID;
@property (nonatomic) unsigned long long exceptionType;
@property (nonatomic) unsigned long long timestamp;

- (id)description;
- (void).cxx_destruct;

@end
