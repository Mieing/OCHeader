@class NSString, NSDictionary;

@interface FavLocationItem : FavoritesModel

@property (nonatomic) double lng;
@property (nonatomic) double lat;
@property (nonatomic) double scale;
@property (retain, nonatomic) NSString *label;
@property (retain, nonatomic) NSString *poiname;
@property (retain, nonatomic) NSString *poiId;
@property (nonatomic) BOOL isFromPoiList;
@property (retain, nonatomic) NSString *buildingId;
@property (retain, nonatomic) NSString *floorName;
@property (retain, nonatomic) NSDictionary *dicLocationName;

+ (id)modelPropertyBlacklistForConfigTag:(id)a0;

- (id)identifier;
- (void).cxx_destruct;

@end
