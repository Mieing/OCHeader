@class NSString, NSMutableArray, FinderPoiBasicInfoResponse_RecommendDishesComponent;

@interface PBFinderPoiBasicInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *poiId;
@property (nonatomic) unsigned long long cacheTime;
@property (nonatomic) long long scene;
@property (nonatomic) long long fromScene;
@property (retain, nonatomic) NSString *poiName;
@property (retain, nonatomic) NSMutableArray *lineComponentList;
@property (retain, nonatomic) NSString *poiAddress;
@property (retain, nonatomic) FinderPoiBasicInfoResponse_RecommendDishesComponent *recommendDishesComponent;
@property (retain, nonatomic) NSString *groupBuyTitle;
@property (retain, nonatomic) NSMutableArray *groupBuyArray;
@property (retain, nonatomic) NSString *groupFooterTitle;
@property (nonatomic) float poiLatitude;
@property (nonatomic) float poiLongitude;

+ (void)initialize;

@end
