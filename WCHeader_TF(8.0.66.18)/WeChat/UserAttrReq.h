@class BaseRequest, NSString, NSMutableArray;

@interface UserAttrReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *biz;
@property (retain, nonatomic) NSMutableArray *openid;

+ (void)initialize;

@end
