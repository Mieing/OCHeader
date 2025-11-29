@class BaseRequest, NSString, NSData;

@interface GameJoinChatRoomRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *groupId;
@property (retain, nonatomic) NSData *userName;

+ (void)initialize;

@end
