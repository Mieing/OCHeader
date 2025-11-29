@class BaseRequest, NSString, NSData;

@interface StatusGetFriendHistoriesReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *contact;
@property (retain, nonatomic) NSData *context;

+ (void)initialize;

@end
