@class BaseRequest, NSString;

@interface GetBlackListReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *biz;
@property (nonatomic) unsigned int limit;
@property (retain, nonatomic) NSString *buffer;

+ (void)initialize;

@end
