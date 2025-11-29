@class NSString, NSMutableArray;

@interface DelOpenIMChatRoomMemberReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *roomName;
@property (retain, nonatomic) NSMutableArray *memberList;

+ (void)initialize;

@end
