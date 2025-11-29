@class NSMutableArray, BaseResponse;

@interface FinderPoiSearchResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSMutableArray *poiList;

+ (void)initialize;

@end
