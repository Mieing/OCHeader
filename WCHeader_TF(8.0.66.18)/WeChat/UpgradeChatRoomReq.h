@class BaseRequest, NSString;

@interface UpgradeChatRoomReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatRoomName;

+ (void)initialize;

@end
