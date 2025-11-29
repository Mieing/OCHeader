@class NSString, NSMutableArray;

@interface WithChatroom : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *chatroomId;
@property (nonatomic) unsigned int withChatroomUserListCount;
@property (retain, nonatomic) NSMutableArray *withChatroomUserList;

+ (void)initialize;

@end
