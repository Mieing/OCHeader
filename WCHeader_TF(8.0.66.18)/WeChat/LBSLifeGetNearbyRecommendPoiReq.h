@class BaseRequest, PoiLocation;

@interface LBSLifeGetNearbyRecommendPoiReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) PoiLocation *location;

+ (void)initialize;

@end
