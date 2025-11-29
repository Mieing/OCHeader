@class BaseRequest, NSString;

@interface GetProductDetailRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *pid;
@property (nonatomic) unsigned int version;
@property (retain, nonatomic) NSString *scanCode;

+ (void)initialize;

@end
