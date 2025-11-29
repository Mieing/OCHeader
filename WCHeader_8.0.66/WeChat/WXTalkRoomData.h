@class NSString, NSArray, NSData, NSMutableArray;

@interface WXTalkRoomData : NSObject

@property (nonatomic) int roomId;
@property (nonatomic) long long roomKey;
@property (nonatomic) int roomMemberId;
@property (retain, nonatomic) NSString *username;
@property (retain, nonatomic) NSMutableArray *memberList;
@property (nonatomic) long long micId;
@property (nonatomic) long long curHoldMicMemberId;
@property (retain, nonatomic) NSData *localCapInfo;
@property (nonatomic) unsigned int lastTryGetMicTime;
@property (nonatomic) unsigned int countDown;
@property (nonatomic) unsigned int lastHeartBeatTime;
@property (nonatomic) BOOL isSlience;
@property (retain, nonatomic) NSArray *unSpMemberList;
@property (nonatomic) BOOL isNobodyTalking;
@property (nonatomic) unsigned int lastSendInviteTime;
@property (nonatomic) unsigned int inviteCountWithinOneMin;
@property (nonatomic) unsigned int curGetMicEventID;
@property (retain, nonatomic) NSMutableArray *addrList;

- (id)init;
- (void)dealloc;
- (void)SetRoomId:(int)a0;
- (void)SetRoomKey:(long long)a0;
- (void)reset;
- (BOOL)isValidKey;
- (id)GetRoomContactList;
- (void).cxx_destruct;

@end
