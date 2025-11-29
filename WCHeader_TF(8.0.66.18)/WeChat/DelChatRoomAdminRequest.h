@class BaseRequest, NSString, NSMutableArray;

@interface DelChatRoomAdminRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *chatRoomName;
@property (retain, nonatomic) NSMutableArray *userNameList;

+ (void)initialize;

@end
