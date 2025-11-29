@class NSData, BaseResponse;

@interface SnsGetCdnDistanceResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *data;
@property (nonatomic) unsigned int version;
@property (nonatomic) unsigned int cityId;
@property (nonatomic) unsigned int provinceId;

+ (void)initialize;

@end
