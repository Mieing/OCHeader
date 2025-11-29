@class NSArray, AWELifeSnackBarData, AWENearbyVideoTags, NSString, AWENearbyC2CellExpressData;

@interface AWENearbyVideoAttribute : AWEBaseApiModel

@property (retain, nonatomic) AWELifeSnackBarData *snackBarData;
@property (nonatomic) BOOL isLocalLifeVideo;
@property (nonatomic) BOOL hasSpuService;
@property (nonatomic) BOOL isLocalLifeExtVideo;
@property (nonatomic) BOOL enableFeedDualPlay;
@property (copy, nonatomic) NSArray *nearbyTags;
@property (retain, nonatomic) AWENearbyVideoTags *grouponBottomTag;
@property (retain, nonatomic) AWENearbyVideoTags *grouponBottomRightTag;
@property (retain, nonatomic) AWENearbyC2CellExpressData *grouponExpressModule;
@property (nonatomic) BOOL cacheDisable;
@property (nonatomic) BOOL hasAdTag;
@property (copy, nonatomic) NSString *snackbar;
@property (nonatomic) long long titleLimitLine;
@property (nonatomic) BOOL isPromotionCard;
@property (nonatomic) long long openType;
@property (copy, nonatomic) NSArray *grouponBottomTagList;

+ (BOOL)automaticallyDefaultMapping;
+ (id)nearbyTagsJSONTransformer;
+ (id)grouponBottomTagListJSONTransformer;

- (void).cxx_destruct;
- (id)init;

@end
