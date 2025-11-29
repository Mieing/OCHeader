@class BaseRequest, NSString;

@interface GetChatRoomInfoDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatRoomName;

+ (void)initialize;

@end
