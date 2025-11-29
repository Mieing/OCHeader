@class NSString, NSDictionary, NSArray, NSMutableDictionary, NSNumber;

@interface AWENearbyC2FeedNicolCardModel : MTLModel <MTLJSONSerializing> {
    NSDictionary *_grouponExtraInfoDict;
}

@property (copy, nonatomic) NSString *awemeID;
@property (copy, nonatomic) NSString *cardID;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) unsigned long long renderType;
@property (nonatomic) long long nearbyPageType;
@property (nonatomic) unsigned long long cardType;
@property (copy, nonatomic) NSString *cardData;
@property (nonatomic) double predictHeight;
@property (nonatomic) double marginTop;
@property (nonatomic) double marginBottom;
@property (nonatomic) double marginLeft;
@property (nonatomic) double marginRight;
@property (copy, nonatomic) NSString *grouponTransJson;
@property (readonly, copy, nonatomic) NSDictionary *grouponExtraInfoDict;
@property (nonatomic) BOOL isAd;
@property (copy, nonatomic) NSString *rawAdData;
@property (nonatomic) unsigned long long column;
@property (nonatomic) double spaceWidth;
@property (retain, nonatomic) NSNumber *cardIndex;
@property (nonatomic) BOOL absoluteIndex;
@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *subType;
@property (nonatomic) double predictWidth;
@property (readonly, nonatomic) BOOL hasLynxCard;
@property (nonatomic) double height;
@property (retain, nonatomic) NSArray *preloadCovers;
@property (copy, nonatomic) NSString *poiId;
@property (copy, nonatomic) NSString *productId;
@property (nonatomic) BOOL canPlay;
@property (copy, nonatomic) NSDictionary *cardContextInfo;
@property (nonatomic) BOOL cacheDisable;
@property (nonatomic) BOOL showingRecommendData;
@property (nonatomic) BOOL firstShowRecommendData;
@property (retain, nonatomic) NSMutableDictionary *recommendData;
@property (nonatomic) BOOL hideMainCard;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)preloadCoversJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
