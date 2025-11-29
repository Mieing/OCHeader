@class NSString, NSArray, AWELiveLocalLifePackConfig, AWELiveLocalLifeLevelConfig, AWEURLModel, NSDictionary, AWELiveLocalLifeAggPreloadConfig, AWELiveLocalLifeLynxModel, NSNumber;

@interface AWELiveLocalLifeContentModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *roomId;
@property (copy, nonatomic) NSString *anchorId;
@property (copy, nonatomic) NSString *webTitle;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (retain, nonatomic) AWELiveLocalLifeAggPreloadConfig *aggPreloadConfig;
@property (copy, nonatomic) NSArray *cardInfos;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (retain, nonatomic) AWEURLModel *dynamicIconUrl;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSString *preloadWeb;
@property (retain, nonatomic) AWELiveLocalLifeLynxModel *nativeSiteConfig;
@property (retain, nonatomic) NSNumber *serverTime;
@property (copy, nonatomic) NSDictionary *perfLog;
@property (retain, nonatomic) AWELiveLocalLifeLevelConfig *levelConfig;
@property (nonatomic) BOOL isFromBackend;
@property (copy, nonatomic) NSArray *iconAlienationAnimationInfos;
@property (retain, nonatomic) AWELiveLocalLifePackConfig *packConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)iconUrlJSONTransformer;
+ (id)cardInfosJSONTransformer;
+ (id)dynamicIconUrlJSONTransformer;
+ (id)aggPreloadConfigJSONTransformer;
+ (id)nativeSiteConfigJSONTransformer;
+ (id)iconAlienationAnimationInfosJSONTransformer;
+ (id)levelConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
