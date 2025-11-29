@class NSMutableArray, BaseResponse;

@interface LBSLifeGetNearbyRecommendPoiResp : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *poiList;

+ (void)initialize;

@end
