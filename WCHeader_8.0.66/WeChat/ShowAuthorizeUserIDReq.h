@class BaseRequest, NSString, NSMutableArray;

@interface ShowAuthorizeUserIDReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *categoryId;
@property (nonatomic) unsigned int authType;

+ (void)initialize;

@end
