@class BaseRequest, NSString, NSMutableArray;

@interface BatchGetWxaUserNameRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSMutableArray *groupOpenidList;

+ (void)initialize;

@end
