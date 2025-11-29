@class NSMutableArray, SKBuiltinString_t;

@interface ChatRoomMemberData : WXPBGeneratedMessage

@property (nonatomic) unsigned int memberCount;
@property (retain, nonatomic) NSMutableArray *chatRoomMember;
@property (nonatomic) unsigned int infoMask;
@property (retain, nonatomic) SKBuiltinString_t *chatRoomUserName;
@property (nonatomic) unsigned int watchMemberCount;
@property (retain, nonatomic) NSMutableArray *watchMembers;

+ (void)initialize;

- (void)setWatchMembers:(id)a0;
- (id)watchMembers;
- (void)setWatchMemberCount:(unsigned int)a0;
- (unsigned int)watchMemberCount;
- (void)setChatRoomUserName:(id)a0;
- (id)chatRoomUserName;
- (void)setInfoMask:(unsigned int)a0;
- (unsigned int)infoMask;
- (void)setChatRoomMember:(id)a0;
- (id)chatRoomMember;
- (void)setMemberCount:(unsigned int)a0;
- (unsigned int)memberCount;

@end
