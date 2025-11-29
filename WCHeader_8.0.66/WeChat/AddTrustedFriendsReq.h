@class BaseRequest, NSMutableArray;

@interface AddTrustedFriendsReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *contacts;

+ (void)initialize;

@end
