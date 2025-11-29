@class BaseRequest, NSString;

@interface GetCardGiftInfoReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int bizUin;
@property (retain, nonatomic) NSString *orderId;

+ (void)initialize;

@end
