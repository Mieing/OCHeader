@class BaseRequest, NSString;

@interface QueryWxaHBDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *sendid;
@property (nonatomic) int offset;

+ (void)initialize;

@end
