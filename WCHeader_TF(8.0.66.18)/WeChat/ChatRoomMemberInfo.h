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

@end
