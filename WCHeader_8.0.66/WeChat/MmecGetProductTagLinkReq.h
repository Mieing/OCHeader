@class BaseRequest, NSString;

@interface MmecGetProductTagLinkReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *appid;
@property (nonatomic) unsigned long long productId;
@property (retain, nonatomic) NSString *promoterKey;
@property (nonatomic) unsigned long long cpsProductId;
@property (retain, nonatomic) NSString *passBuffer;

+ (void)initialize;

@end
