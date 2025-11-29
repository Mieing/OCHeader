@class BaseRequest, NSString;

@interface TransferChatRoomOwnerRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatRoomName;
@property (retain, nonatomic) NSString *newOwnerUserName;

+ (void)initialize;

@end
