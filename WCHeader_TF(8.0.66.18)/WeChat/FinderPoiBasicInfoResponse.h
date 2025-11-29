@class FinderPoiBasicInfoResponse_RecommendDishesComponent, NSString, NSMutableArray, BaseResponse;

@interface FinderPoiBasicInfoResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSString *poiName;
@property (retain, nonatomic) NSMutableArray *lineComponentList;
@property (retain, nonatomic) NSString *poiAddress;
@property (retain, nonatomic) FinderPoiBasicInfoResponse_RecommendDishesComponent *recommendDishesComponent;

+ (void)initialize;

@end
