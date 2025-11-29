@class BaseRequest, NSMutableArray, NSString;

@interface DelChatRoomMemberRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int memberCount;
@property (retain, nonatomic) NSMutableArray *memberList;
@property (retain, nonatomic) NSString *chatRoomName;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
