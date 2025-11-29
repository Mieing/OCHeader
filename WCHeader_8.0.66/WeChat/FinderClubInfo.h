@class NSString, FinderJumpInfo;

@interface FinderClubInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int clubRole;
@property (retain, nonatomic) NSString *groupName;
@property (nonatomic) unsigned int memberCount;
@property (retain, nonatomic) NSString *chatroomdId;
@property (retain, nonatomic) FinderJumpInfo *freezeJumpInfo;

+ (void)initialize;

- (void)setFreezeJumpInfo:(id)a0;
- (id)freezeJumpInfo;
- (void)setChatroomdId:(id)a0;
- (id)chatroomdId;
- (void)setMemberCount:(unsigned int)a0;
- (unsigned int)memberCount;
- (void)setGroupName:(id)a0;
- (id)groupName;
- (void)setClubRole:(unsigned int)a0;
- (unsigned int)clubRole;

@end
