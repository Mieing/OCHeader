@class BaseRequest;

@interface SnsGetCdnDistanceRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int cityId;
@property (nonatomic) unsigned int provinceId;

+ (void)initialize;

@end
