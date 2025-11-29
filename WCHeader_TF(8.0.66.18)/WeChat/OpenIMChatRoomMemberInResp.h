@class NSString;

@interface OpenIMChatRoomMemberInResp : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *userName;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *nickName;

+ (void)initialize;

@end
