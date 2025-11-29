@class BaseRequest, NSString, NSMutableArray;

@interface BatchGetWxaGroupOpenIdRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *chatroomName;
@property (retain, nonatomic) NSMutableArray *usernameList;
@property (retain, nonatomic) NSString *toUsername;

+ (void)initialize;

@end
