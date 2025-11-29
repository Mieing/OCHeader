@class PoiServiceInfo, BaseResponse;

@interface GetPoiInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) PoiServiceInfo *poiService;

+ (void)initialize;

@end
