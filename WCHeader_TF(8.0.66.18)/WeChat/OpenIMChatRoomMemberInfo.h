@class NSString;

@interface OpenIMChatRoomMemberInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSString *nickName;
@property (retain, nonatomic) NSString *displayName;
@property (retain, nonatomic) NSString *bigHeadimgUrl;
@property (retain, nonatomic) NSString *smallHeadimgUrl;
@property (nonatomic) unsigned int chatroomMemberFlag;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *descWordingId;
@property (retain, nonatomic) NSString *inviterUserName;

+ (void)initialize;

@end
