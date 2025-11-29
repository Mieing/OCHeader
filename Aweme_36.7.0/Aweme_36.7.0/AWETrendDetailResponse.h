@class NSArray, NSString, AWEUnifiedMusicGroupModel;

@interface AWETrendDetailResponse : AWEBaseApiModel

@property (retain, nonatomic) NSArray *trendsInfo;
@property (retain, nonatomic) AWEUnifiedMusicGroupModel *unifiedMusic;
@property (copy, nonatomic) NSString *useSameAction;
@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *commonTrack;
@property (copy, nonatomic) NSString *oneKeyAction;
@property (nonatomic) BOOL disableTrendsActivitySetting;
@property (copy, nonatomic) NSArray *trendsActivityResourceInfos;
@property (copy, nonatomic) NSArray *loraModelIDList;
@property (copy, nonatomic) NSArray *followShootButtons;

+ (id)propertyToModelClassInArrayMap;
+ (id)trendsInfoJSONTransformer;
+ (id)unifiedMusicJSONTransformer;
+ (id)relatedListJSONTransformer;
+ (id)mvTemplateInfoJSONTransformer;
+ (id)promotionModelJSONTransformer;
+ (id)bannerArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)trendInfoModel;
- (id)trendsActivityResourceInfoModel;
- (id)initWithDictionary:(id)a0 error:(id *)a1;
- (void).cxx_destruct;

@end
