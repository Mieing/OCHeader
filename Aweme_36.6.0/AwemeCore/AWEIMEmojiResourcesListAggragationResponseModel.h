@class NSString, NSArray, AWEIMStickerResourceResponseModel, AWEIMEmojiResourcesListHotKeyword, NSDictionary, AWEIMEmojiResourcesListBanner, AWEEmojiStoreSeriesRecommendResourcesInfo, AWEEmojiStoreRecommendResourcesInfo, NSNumber;

@interface AWEIMEmojiResourcesListAggragationResponseModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSNumber *statusCode;
@property (copy, nonatomic) NSString *statusMsg;
@property (copy, nonatomic) NSArray *storeResources;
@property (retain, nonatomic) AWEEmojiStoreRecommendResourcesInfo *recommendResources;
@property (retain, nonatomic) AWEEmojiStoreSeriesRecommendResourcesInfo *seriesRecommendResources;
@property (retain, nonatomic) AWEIMEmojiResourcesListBanner *banner;
@property (retain, nonatomic) AWEIMEmojiResourcesListHotKeyword *hotKeywords;
@property (retain, nonatomic) AWEIMStickerResourceResponseModel *customResources;
@property (retain, nonatomic) NSDictionary *trendingStickerRawData;
@property (copy, nonatomic) NSArray *errorScences;
@property (copy, nonatomic) NSDictionary *log_pb;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelContainerPropertyGenericClass;
+ (id)modelCustomPropertyMapper;
+ (id)storeResourcesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
