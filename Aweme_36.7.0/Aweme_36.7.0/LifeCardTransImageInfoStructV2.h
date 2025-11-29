@class NSString, LifeCardImagePoiInfoV2, LifeCardSpuInfoV2, NSMutableArray;

@interface LifeCardTransImageInfoStructV2 : GPBMessage

@property (retain, nonatomic) LifeCardImagePoiInfoV2 *poiInfo;
@property (nonatomic) BOOL hasPoiInfo;
@property (retain, nonatomic) NSMutableArray *tabInfoArray;
@property (readonly, nonatomic) unsigned long long tabInfoArray_Count;
@property (nonatomic) int type;
@property (nonatomic) BOOL hasType;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) BOOL hasTitle;
@property (copy, nonatomic) NSString *desc;
@property (nonatomic) BOOL hasDesc;
@property (retain, nonatomic) LifeCardSpuInfoV2 *spuInfo;
@property (nonatomic) BOOL hasSpuInfo;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) BOOL hasExtra;

+ (id)descriptor;

@end
