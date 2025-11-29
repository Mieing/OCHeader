@class NSString;

@interface GetOpenIMChatRoomMemberDetailReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *roomName;
@property (nonatomic) unsigned int clientMemberVersion;

+ (void)initialize;

@end
