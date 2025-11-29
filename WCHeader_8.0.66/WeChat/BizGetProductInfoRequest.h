@class BaseRequest, NSString;

@interface BizGetProductInfoRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *productId;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSString *qrUrl;

+ (void)initialize;

@end
