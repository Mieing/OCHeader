@class NSMutableArray, BaseResponse;

@interface FinderBindPoiResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *poiInfoList;

+ (void)initialize;

@end
