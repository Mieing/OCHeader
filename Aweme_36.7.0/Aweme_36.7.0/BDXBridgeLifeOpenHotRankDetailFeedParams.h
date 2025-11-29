@class NSString, NSArray;

@interface BDXBridgeLifeOpenHotRankDetailFeedParams : BDXBridgeModel

@property (copy, nonatomic) NSString *extraParams;
@property (copy, nonatomic) NSString *isMaskPublishTime;
@property (copy, nonatomic) NSString *hotRankVersion;
@property (copy, nonatomic) NSString *cityCode;
@property (copy, nonatomic) NSString *postExpiredTime;
@property (copy, nonatomic) NSString *hotTotalCount;
@property (nonatomic) BOOL hasMore;
@property (retain, nonatomic) NSArray *hotSpotAwemeMap;

+ (id)requiredKeyPaths;
+ (id)hotSpotAwemeMapJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
