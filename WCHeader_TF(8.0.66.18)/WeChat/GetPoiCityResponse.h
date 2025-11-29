@class NSString, BaseResponse;

@interface GetPoiCityResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *city;

+ (void)initialize;

@end
