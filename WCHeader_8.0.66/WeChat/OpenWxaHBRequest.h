@class BaseRequest, NSString, NSData;

@interface OpenWxaHBRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (retain, nonatomic) NSString *sendid;
@property (retain, nonatomic) NSData *signature;

+ (void)initialize;

@end
