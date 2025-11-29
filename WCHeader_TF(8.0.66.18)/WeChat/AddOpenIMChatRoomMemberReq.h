@class NSString, NSMutableArray;

@interface AddOpenIMChatRoomMemberReq : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *roomName;
@property (retain, nonatomic) NSMutableArray *memberList;
@property (retain, nonatomic) NSString *desc;

+ (void)initialize;

@end
