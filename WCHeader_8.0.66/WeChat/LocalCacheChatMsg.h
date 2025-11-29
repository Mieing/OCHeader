@class NSString, NSMutableArray;

@interface LocalCacheChatMsg : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *chatroomMsgList;
@property (retain, nonatomic) NSString *hostUserName;

+ (void)initialize;

@end
