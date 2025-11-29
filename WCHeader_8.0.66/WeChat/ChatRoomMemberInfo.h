@class NSString;

@interface ChatRoomMemberInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *bigHeadImgUrl;
@property (retain, nonatomic) NSString *smallHeadImgUrl;
@property (nonatomic) unsigned int chatroomMemberFlag;
@property (retain, nonatomic) NSString *inviterUserName;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *textStatus;
@property (retain, nonatomic) NSString *associateOpenImappId;
@property (retain, nonatomic) NSString *associateOpenImdescId;
@property (retain, nonatomic) NSString *textStatusId;
@property (retain, nonatomic) NSString *textStatusExtInfo;
@property (retain, nonatomic) NSString *addChatRoomSceneNewXml;

+ (void)initialize;

- (void)setAddChatRoomSceneNewXml:(id)a0;
- (id)addChatRoomSceneNewXml;
- (void)setTextStatusExtInfo:(id)a0;
- (id)textStatusExtInfo;
- (void)setTextStatusId:(id)a0;
- (id)textStatusId;
- (void)setAssociateOpenImdescId:(id)a0;
- (id)associateOpenImdescId;
- (void)setAssociateOpenImappId:(id)a0;
- (id)associateOpenImappId;
- (void)setTextStatus:(id)a0;
- (id)textStatus;
- (void)setStatus:(unsigned int)a0;
- (unsigned int)status;
- (void)setInviterUserName:(id)a0;
- (id)inviterUserName;
- (void)setChatroomMemberFlag:(unsigned int)a0;
- (unsigned int)chatroomMemberFlag;
- (void)setSmallHeadImgUrl:(id)a0;
- (id)smallHeadImgUrl;
- (void)setBigHeadImgUrl:(id)a0;
- (id)bigHeadImgUrl;
- (void)setDisplayName:(id)a0;
- (id)displayName;
- (void)setNickName:(id)a0;
- (id)nickName;
- (void)setUserName:(id)a0;
- (id)userName;

@end
